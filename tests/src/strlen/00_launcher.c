// #include "strlen.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define _RED "\033[31m"

//typedef int (*func)(void);

//int32_t strlen_launcher(void)
//{
//    t_unit_test *testlist;
//    // puts("STRLEN:");""

//    start_test("STRLEN");

//    // load_test(&testlist, "Basic test", &basic_test);
//    // load_test(&testlist, "NULL test", &null_test);

//    func *f;
//    // f = (func[]){basic_test, null_test, NULL};
//    char *te;

//    int cnt = 0;
//    load_test(&testlist, f, te, &cnt);
//    //load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
//    return (launch_tests(&testlist, cnt));
//}

// void test()
// {
//     printf("123\n");
// }

// void test2()
// {
//     printf("abc\n");
// }

// int add(int a, int b)
// {
//     return (a + b);
// }

// int sub(int a, int b)
// {
//     return (a - b);
// }

int main()
{
    // func *cal;
    // cal = (func[]){add, sub, add, add, add, NULL};
    // int i = -1;
    // //    void **p = ((*[])(void)){test, test2};
    // //    for (int i = 0; i < 2; i++)
    // //    {
    // //        (*p[i])();
    // //        // (void)a[i];
    // //    }
    // //}
    // //{
    // //    (*p[i])();
    // //    // (void)a[i];
    // //}
    // while (cal[++i])
    // {
    //     printf("%s\n", cal[i]);
    //     printf("ans=%d\n", cal[i](10, 3));
    // }

    write(1, _RED "aaa", strlen(_RED "aaa"));
    // printf("%d\n", i);
    //    printf()

    //        //     for (int i = 0; i < 10; i++)
    //        // {

    //        if (!cal[i]) break;
    //// }
}
