#include<stdio.h>

/*
Let d be the binary number dk...d1d0 and let s=0.
Then ds=d2.

ds=dk...d0s
=dk2^(k+1)+...+d02^1+0*2^0
=dk2^(k+1)+...+d02^1
=(dk2^k+...+d02^0)2^1
=d2
*/

int main (){
    int d=0b11;//3.
    printf("%d\n", d);
    d=d<<1;
    printf("%d\n", d);//6.
    return 0;
}

//[Right shifting a signed quantity will fill with sign bits ("arithmetic shift") on some machines and with 0-bits ("logical shift") on others.]