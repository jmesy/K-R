#include<stdio.h>
#include<math.h>

/*
123
1*10^2+2*10^1+3
(1*10+2)*10+3

k=t[0]*10+t[1]
k=k*10+t[2]

but if k=t[0] then

k=k*10+t[1]
k=k*10+t[2]

and if k=0 then
k=t[0] becomes
k=k*10+t[0]
so

k=k*10+t[0]
k=k*10+t[1]
k=k*10+t[2]

*/

// void trim_leading_zeros(char s[]);
int s_len(char s[]);
void invert(char s[]);
int atoi_f(char s[]);
int atoi_book(char s[]);

//Compile this as gcc 043.c -lm.
int main(){
    // char s[]="12";//Positive integer.
    char s[]="12";
    printf("%d\n", atoi_book(s));
    printf("%d\n", atoi_f(s));//This modifies s.
    return 0;
}

//Possible solution.
// int atoi_f(char s[]){
//     int i=0, k='0', res=0;
//     for(; s[i]!='\0'; ++i){
//         s[i]=s[i]-k;//char (signed) can take up to +2^7-1.
//     }
//     for(int j=0; j<i; ++j){
//         res+=(int) s[j]*pow(10, (i-1)-j);
//     }
//     return res;
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

//Useless.
// void trim_leading_zeros(char s[]){
//     int i=0;
//     while(s[i]=='0'){
//         ++i;
//     }
//     if(i==0)
//         return;
//     int j=0;
//     for(; s[j+i]!='\0'; ++j){
//         s[j]=s[j+i];
//     }
//     s[j]='\0';
// }

//Alternative lengthier solution.
int s_len(char s[]){
    int i=0;
    for(; s[i]!='\0'; ++i)
        ;
    return i;
}

void invert(char s[]){
    char tmp;
    int i=0;
    int j=s_len(s);
    for(; i<j-1; ++i, --j){
        tmp=s[i];
        s[i]=s[j-1];
        s[j-1]=tmp;
    }
}

int atoi_f(char s[]){
    // printf("%s\n", s);
    invert(s);
    // printf("~>%s\n", s);
    int i=0, k='0', res=0;
    for(; s[i]!='\0'; ++i){
        res+=(s[i]-k)*pow(10, i);
    }
    return res;
}