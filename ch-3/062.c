#include<stdio.h>

int str_len(char []);
void reverse(char []);
void rev_erse(char []);

int main(){
    char t[]="String.";
    printf("%s\n", t);
    // reverse(t);
    rev_erse(t);
    printf("%s\n", t);
    return 0;
}

int str_len(char t[]){
    int i;
    for(i=0; t[i]!='\0'; ++i)
        ;
    return i;
}

void reverse(char s[]){
    int c, i, j;
    //[A pair of expressions separated by a comma is evaluated left to right,]
    //[and the type and value of the result are the type and value of the right operand.]
    for(i=0, j=str_len(s)-1; i<j; ++i, --j){//See after the last semicolon.
        // c=s[i];
        // s[i]=s[j];
        // s[j]=c;
        c=s[i], s[i]=s[j], s[j]=c;
    }
}

void rev_erse(char t[]){
    int tmp;
    for(int i=0, j=str_len(t)-1; i<j; ++i, --j){
        tmp=t[i];
        t[i]=t[j];
        t[j]=tmp;
    }
}