#include<stdio.h>

int main(){//Inconsistency with pointer notation.
    int x=10;
    int *px=&x;
    printf("%d\n", *px);

    //But also:

    int y=10;
    int *py;
    py=&y;
    printf("%d\n", *py);
    
    //And:

    int *p;
    int *q=p;

    int *r;
    int *s;
    s=r;
}