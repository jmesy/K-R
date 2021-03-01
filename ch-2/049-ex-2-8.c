#include<stdio.h>
#include<tgmath.h>

unsigned rightrot(unsigned x, int n);
void printf_bin(unsigned x, int m);

int main(){
    unsigned x=0b11010011;
    printf_bin(x, 1);
    // unsigned t=~0;
    // printf("%d\n", (int) log2(t)+1);//32.
    x=rightrot(x, 3);
    printf_bin(x, 1);
    return 0;
}

unsigned rightrot(unsigned x, int n){
    unsigned y=~(~0<<n)&x;
    unsigned t=~0;
    int bits=log2(t)+1;
    return (x>>n)|(y<<(bits-n));
}

//With m set to 1 you could do without c.
void printf_bin(unsigned x, int m){
    printf("%s", "0b");
    if(x==0){
        printf("0\n");
        return;
    }
    int n_digits;
    int c_size;
    if(m){
        unsigned t=~0;
        n_digits=log2(t)+1;
        c_size=n_digits+1+n_digits/8-1;
    } else{
        n_digits=log2(x)+1;
        c_size=n_digits+1;
    }
    char c[c_size];
    int i=0;
    int j=c_size-1;
    c[j--]='\0';
    for(; i<n_digits; ++i){
        c[j--]=(x&1)+'0';//Why to the right?
        x=x>>1;
        if((i%8)==7) c[j--]=' ';
    }
    // c[j]='\0';
    printf("%s\n", c);
}
