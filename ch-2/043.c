#include<stdio.h>
#include<math.h>

/*
FIRST EXPLANATION

int s[]="234"
234
=200+30+4
=(20+3)*10+4
=(2*10+3)*10+4
=((0*10+2)*10+3)*10+4
which suggests
int r=0
r=r*10+(s[i]-'0')

r=0*10+2=2
r=2*10+3=23
r=23*10+4=234

SECOND MORE INTUITIVE EXPLANATION

In the first iteration you unpack 2.
In the second, 3 which you have to combine with 2.
Clearly 2*10+3=23.
Third iteration: 23*10+4=234.
This suggests an initial r=0 and then
r=r*10+(s[i]-'0')
*/

// void trim_leading_zeros(char s[]);
int s_len(char s[]);
void invert(char s[]);
int atoi_f(char s[]);
int atoi_book(char s[]);

//Compile this as gcc 043.c -lm if using pow().
int main(){
    char s[]="234";
    // char s[]="";
    printf("%s\n", s);
    printf("%d\n", atoi_book(s));
    printf("%d\n", atoi_f(s));
    return 0;
}

// Possible solution.
int atoi_f(char s[]){
    int r=0;
    int i=0;
    for(; s[i]!='\0'; ++i){
        r=r*10+s[i]-'0';
    }
    if(!(i)) return -1;//For i==0 of empty string, !(i)==1.
    else return r;
}

// Arguably easier way to do it (this modifies s)
// int atoi_f(char s[]){
//     int r=0;
//     int i=0;
//     for(; s[i]!='\0'; ++i){
//         s[i]=s[i]-'0';//char (signed) can express up to +2^7-1.
//     }
//     // for s[]="234"
//     // s[0]=2, s[1]=3, s[3]=4
//     // i=3
//     // 200+30+4 in the next loop

//     for(int j=0; j<i; ++j){
//         r+=s[j]*pow(10, (i-1)-j);
//     }
//     if(!(i)) return -1;
//     else return r;
// }

//From the book.
int atoi_book(char s[]){
    int i, n;
    n=0;
    for(i=0; s[i]>='0' && s[i]<='9'; ++i){
        n=10*n+(s[i]-'0');
    }
    return n;
}

// //Alternative lengthier solution.
// int s_len(char s[]){
//     int i=0;
//     for(; s[i]!='\0'; ++i)
//         ;
//     return i;
// }

// void invert(char s[]){
//     char tmp;
//     int i=0;
//     int j=s_len(s);
//     for(; i<j-1; ++i, --j){
//         tmp=s[i];
//         s[i]=s[j-1];
//         s[j-1]=tmp;
//     }
// }

// int atoi_f(char s[]){
//     // printf("%s\n", s);
//     invert(s);
//     // printf("~>%s\n", s);
//     int i=0, k='0', res=0;
//     for(; s[i]!='\0'; ++i){
//         res+=(s[i]-k)*pow(10, i);
//     }
//     return res;
// }
