#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    pid_t pid;

    // 引数チェック
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s <command> <arg>\n", argv[0]);
        exit(1);
    }

    // forkして子プロセスを作成する
    // fork以降の処理は親プロセスと子プロセスの2つのプロセスが同時に実行されている
    pid = fork();
    if (pid < 0)
    {
        fprintf(stderr, "fork(2) failed\n");
        exit(1);
    }

    // 子プロセスのforkの戻り値は0
    if (pid == 0)
    { /* 子プロセスが実行する処理 */
        execl(argv[1], argv[1], argv[2], NULL);
        /* execl()は成功したら戻らないので、戻ったらすべて失敗 */
        perror(argv[1]);
        exit(99);
    }
    // 親プロセスのforkの戻り値は子プロセスのプロセスID
    else
    { /* 親プロセスが実行する処理 */
        // ゾンビの生存時間は30秒
        // ここでは30秒にしていますが、while(1)などの無限ループの場合はずっとゾンビが存在することになります
        sleep(10);
        printf("child (PID=%d) finished;\n", pid);
        exit(0);
    }
}
