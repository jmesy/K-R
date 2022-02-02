#include<stdio.h>
#include <limits.h>

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

// Print bits of a char.//[1]
// int main(){
//     // char k=4;
//     unsigned char k=0b10101010;

//     for(int i=0; i<CHAR_BIT; ++i){
//         printf("%d\n", (k>>i)&1);//k is not changed.
//     }
//     return 0;
// }

// Print bits of a char. Improved version.//[2]
// int main(){
//     char string[CHAR_BIT];
//     unsigned char k=0b11110000;
//     printf("0b");
//     for(int i=0; i<CHAR_BIT; ++i){
//         if((k>>i)&1) string[(CHAR_BIT-1)-i]='1';
//         else string[(CHAR_BIT-1)-i]='0';
//     }
//     printf("%s\n", string);
//     return 0;
// }

// Reverse string in place.
// void reverse_str(char s[]);
// int str_len(char s[]);

// int main(){
//     char s[]="String.";
//     printf("%s\n", s);
//     reverse_str(s);
//     printf("%s\n", s);
//     return 0;
// }

// void reverse_str(char s[]){
//     int i=str_len(s);
//     char tmp;
//     for(int j=0, k=i-1; j<k; ++j, --k){
//         tmp=s[j];
//         s[j]=s[k];
//         s[k]=tmp;
//     }
// }

// int str_len(char s[]){
//     int i=0;
//     for(; s[i]!='\0'; ++i)
//         ;
//     return i;
// }
