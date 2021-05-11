#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

#define PROCESS_NUM 3
#define ROOP_NUM 3

// 子プロセスの処理
void child()
{
pid_t c_pid; // 子プロセスID
pid_t p_pid; // 親プロセスID
int num;

c_pid = getpid(); // 現プロセスID取得
p_pid = getppid(); // 親プロセスID取得



fprintf(stdout,"[PID:%d]子プロセス開始（親プロセスIDは%d）\n", c_pid, p_pid);



for(num = 1; num <= ROOP_NUM; num++)
{
sleep(1);
fprintf(stdout,"[PID:%d]%d回目のループ\n", c_pid, num);
}
fprintf(stdout,"[PID:%d]子プロセス終了\n",c_pid);
return;
}

int main()
{
pid_t c_pid; // 子プロセスID
pid_t p_pid; // 親プロセスID
int i;
int status;



// 親プロセスIDを取得
p_pid = getpid();
fprintf(stdout, "[PID:%d]親プロセス開始\n", p_pid);

// 子プロセス生成
for(i = 0; i < PROCESS_NUM; i++)
{
switch(c_pid = fork()) // 子プロセス生成
{
case 0: // 子プロセス
child();
exit(EXIT_SUCCESS); // 子プロセス終了
case -1:
fprintf(stderr, "子プロセス作成エラー\n");
break;
default: // 親プロセス
fprintf(stdout, "[PID:%d]子プロセス(pid=%d)作成\n", p_pid, c_pid);
sleep(2);
break;
}
}



// 子プロセスの終了を待つ
for(i = 0; i < PROCESS_NUM; i++)
{
c_pid = wait(&status); // 子プロセスの状態変化を待つ
fprintf(stdout, "[PID:%d]子プロセス(pid=%d)終了\n", p_pid, c_pid);
}

fprintf(stdout, "[PID:%d]親プロセス終了\n", p_pid);
return 0;
}