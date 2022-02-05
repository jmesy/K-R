#include<stdio.h>
#include<tgmath.h>

unsigned getbits(unsigned x, int p, int n){
    return (x>>(p+1-n)) & ~(~0<<n);
}
void printf_bin(unsigned x);

int main(){
    unsigned int x=0b110100;
    // x=getbits(x, 4, 3);//0b101.
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
    int M=n_digits+1;// +1 in order to hold '\0' at the end of the array.
    char c[M];
    int i=0;
    for(int i=0; i<M-1; ++i)
        c[M-2-i]=((x>>i)&1)+'0';
    c[M]='\0';
    printf("%s\n", c);
}
