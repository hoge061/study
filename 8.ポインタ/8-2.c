#include <stdio.h>


void main(){
    char str[] = "hello world";

    // 'h'と'w'を大文字にする
    *str -= ('a' - 'A');
    *(str + 6) -= ('a' - 'A');

    printf( "%s\n", str );
}
// xの値を12にする