#include<stdio.h>

int power(int m, int n);//[This declaration, which is called function prototype, ...]
//int power(int, int);//Alternative.
// int power(int x, int y);//Alternative.

int main(){
    int i;
    for(i=0; i<5; ++i)
        // printf("%4d %4d %4d\n", i, power(2, i), power(-3, i));
        printf("%4d %4d\n", i, power(2, i));
    return 0;
}

int power(int m, int n){
    int r=1;
    int i=0;
    while(i<n){
        r*=m;
        ++i;
    }
    return r;

    // This is a tad better:
    // int r=1;
    // while(n>0){
    //     r*=m;
    //     --n;
    // }
    // return r;
}

//From the book.
// int power(int base, int n){
//     int i, p;
//     p=1;
//     for(in i=1; i<=n; ++i){
//         p*=base;
//     }
//     return p;
// }

//Do it also using recursion.