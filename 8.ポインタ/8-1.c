#include <stdio.h>


void main(){
    int x;
    int* p;

    p = &x;
    *p = 12;

    printf("%d\n",x);
}
// xの値を12にする
