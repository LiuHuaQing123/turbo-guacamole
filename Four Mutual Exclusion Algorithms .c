/*单标志算法
#include<stdio.h>
int main(){
    int turn = 0;
    while (turn != 0);
    ///这时可以访问临界区
    int turn = other;

    ///下一个程序开始查看turn变量是否是自己的编号
}   ///无法解决空闲让进思想
*/



/*双标志前检查法
#include<stdio.h>
#include<stdbool.h>
int main(){
    bool flag[2];///此处假设有两个进程
    flag[0] = False;
    flag[1] = False;
    while (flag[1] == ture);///进程1查看进程2是否使用中，先检查，但是若是此时检查完之后调度了，会导致违反忙则等待思想
    flag[0] = ture;
    ///访问临界区
    flag[0] = false;
}
*/


/*双标志后检查法
只是在前一种方法的基础上，把先赋值为ture放在了循环前面后才检查
但是会因为同时并行赋值违反空则让进和有限等待思想
*/

/*peterson算法
#include<stdio.h>
#include<stdbool.h>
int main(){
    int turn = 0;
    bool flag[2];
    flag[0] = false;
    flag[1] = false; ///我们这里假设是有两个进程
    ///一号进程想用时
    flag[0] = ture;
    int turn = 1;
    while(turn == 1 && flag[1] == ture);查看是否自己表谦让且它者有使用意向
    ///访问临界区
    flag[0] = false;
    ///违背让权等待    
}
*/
