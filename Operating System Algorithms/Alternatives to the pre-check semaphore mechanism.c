#include<stdio.h>
void wait(int *S){
    while (*S <= 0);
    *S --;
}///模拟原语
void signal(int *S){
    *S ++;
}///模拟原语
int main(){
    int a = 1;
    wait(&a);
    printf("%d",a);///访问临界区
    signal(&a);

}