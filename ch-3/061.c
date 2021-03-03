#include<stdio.h>
#include<ctype.h>

int is_space(char);
int atoi_f(char []);
int atoi(char []);

int main(){
    char t[]=" -0123 ";
    //Not all spaces and at least a digit after the sign if sign.
    printf("%d\n", atoi_f(t));
    printf("%d\n", atoi(t));
    return 0;
}

int is_space(char c){
    if(c==' ' || c=='\t' || c=='\n')
        return 1;
    return 0;
}

//Solution.
int atoi_f(char t[]){
    char sgn=1;
    int res=0;
    int i;
    for(i=0; is_space(t[i]); ++i)
        ;
    
    if(t[i]=='-'){
        ++i;
        sgn=-1;
    }
    else if(t[i]=='+'){
        ++i;
    }

    for(; !is_space(t[i]) && t[i]!='\0'; ++i){
        res=res*10+(t[i]-'0');
    }
    return sgn*res;
}

//From the book.
int atoi(char s[]){
    int i, n, sign;
    for(i=0; isspace(s[i]); ++i)
        ;
    printf("i= %d\n", i);
    sign=(s[i]=='-')?-1:1;
    if(s[i]=='+' || s[i]=='-')
        ++i;
    for(n=0; isdigit(s[i]); ++i)
        n=10*n+(s[i]-'0');
    return sign*n;
}