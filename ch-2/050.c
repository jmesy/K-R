#include<stdio.h>
#include<tgmath.h>

int bitcount(unsigned);
void printf_bin(unsigned);

int main(){
    unsigned x=0b111;
    // printf("%d\n", bitcount(x));
    printf_bin(x);
    return 0;
}

int bitcount(unsigned x){
    int b;
    for(b=0; x!=0; x>>=1){
        if(x&01) b++;
    }
    return b;
}

//Alternative printf_bin.
void printf_bin(unsigned x){
    printf("0b");
    if(x==0){
        printf("0\n");
        return;
    }
    unsigned m=~(~(unsigned) 0>>1);//Casting is necessary.
    while(!(m&x)) x<<=1;
    while(x!=0){
        if((m&x)==m) printf("1");
        else printf("0");
        x<<=1;
    }
    printf("\n");
}
