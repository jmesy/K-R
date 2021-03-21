#include<stdio.h>

// int main(){
//     int x=1, y=2, z[10];
//     int *ip;

//     ip=&x;
//     y=*ip;//[when applied to a pointer, it accesses the object the pointer points to]
//     *ip=0;
//     ip=&z[0];
//     return 0;
// }

int main(){
    int x=0;
    int *p;
    p=&x;
    printf("%d\n", x);
    printf("%d\n", *p);
    printf("%p\n", p);
    printf("%p\n", &(*p));
    printf("%p\n", &x);
    printf("%p\n", &p);
    return 0;
}

/*
0
0
0x7ffd6716316c
0x7ffd6716316c
0x7ffd6716316c
0x7ffd67163170
*/