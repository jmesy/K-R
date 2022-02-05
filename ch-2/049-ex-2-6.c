#include<stdio.h>
#include<tgmath.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);
void printf_bin(unsigned x);

int main(){
    // unsigned x=0b110100;
    // unsigned y=0b11;
    unsigned int x=0b10101111;
    unsigned int y=0b11110101;
    x=setbits(x, 4, 3, y);
    printf_bin(x);
    return 0;
}

//Solution.
unsigned setbits(unsigned x, int p, int n, unsigned y){
    unsigned m=~(~0<<n);
    m=m<<(p+1-n);
    y=y<<(p+1-n);
    return (~m&x)|(m&y);
}

void printf_bin(unsigned x){
    printf("%s", "0b");
    if(x==0){
        printf("0\n");
        return;
    }
    int n_digits=log2(x)+1;//double log2(double).
    char c[n_digits+1];
    int i=0;
    for(; i<n_digits; ++i){
        c[n_digits-1-i]=(x&1)+'0';
        x=x>>1;
    }
    c[i]='\0';
    printf("%s\n", c);
}

// This has better formatting given that we already know beforehand how many bits we are interested in.
// void printf_bin(unsigned int x){
//     int M=8+1;
//     char t[M];
//     printf("0b");
//     for(int i=0; i<M-1; ++i)
//         t[M-2-i]=((x>>i)&1)+'0';
//     t[M-1]='\0';
//     printf("%s\n", t);
// }