#include <stdio.h>

void main(){
    int* ptr;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",ptr+i);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",*ptr+9-i);
    }
    // 実は、添え字の無い array は配列の先頭アドレス、つまり、ポインタなのです。
}