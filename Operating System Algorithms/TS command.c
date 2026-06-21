#include<stdio.h>
#include<stdbool.h>
bool trans_true_false(bool *lock){
    bool old;
    old = *lock;
    *lock = true;
    return old;
}
int main(){
    bool lock = false;
    while(trans_true_false(&lock));
    printf("Ready to enter critical section");
    lock = false;
}