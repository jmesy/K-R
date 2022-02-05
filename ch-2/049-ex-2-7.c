#include<stdio.h>
#include<tgmath.h>

unsigned invert(unsigned x, int p, int n);
void printf_bin(unsigned x);

int main(){
    unsigned x=0b110100;
    x=invert(x, 4, 3);
    printf_bin(x);//101000.
    return 0;
}

//Solution.
unsigned invert(unsigned x, int p, int n){
    unsigned m=~(~0<<n)<<(p+1-n);
    return (~(x&m)&m)|(x&(~m));
}

void printf_bin(unsigned x){
    printf("%s", "0b");
    if(x==0){
        printf("0\n");
        return;
    }
    int n_digits=log2(x)+1;
    int M=n_digits+1;
    char c[M];
    for(int i=0; i<M-1; ++i)
        c[M-2-i]=((x>>i)&1)+'0';
    c[M-1]='\0';
    printf("%s\n", c);
}
