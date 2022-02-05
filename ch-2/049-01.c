#include<stdio.h>
#include<tgmath.h>

unsigned getbits(unsigned x, int p, int n){
    return (x>>(p+1-n)) & ~(~0<<n);
}
void printf_bin(unsigned x);

int main(){
    unsigned int x=0b110100;
    x=getbits(x, 4, 3);//0b101.
    printf_bin(x);
    return 0;
}

//Possible implementation of a function which prints binary numbers.
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
