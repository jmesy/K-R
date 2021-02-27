#include<stdio.h>

void str_cat(char s[], char t[]);
void str_cat_book(char s[], char t[]);

int main(){
    int M=100;
    //This doesn't work.
    // char s[M];
    // char t[M];
    // s[]="concate";
    // t[]="nate";

    char s[]="concate";
    char t[]="nate";
    str_cat(s, t);
    // str_cat_book(s, t);
    printf("%s\n", s);
    return 0;
}

//Solution.
void str_cat(char s[], char t[]){
    int i=0;
    for(; s[i]!='\0'; ++i)
        ;
    for(int j=0; (s[i+j]=t[j])!='\0'; ++j)
        ;
}

//[strcat assumes that there is enough space in s to hold the combination]
//From the book.
void str_cat_book(char s[], char t[]){
    int i, j;
    i=j=0;
    while(s[i]!='\0')
        i++;
    while((s[i++]=t[j++])!='\0')
        ;
}

/*
concatenate
*** stack smashing detected ***: <unknown> terminated
Aborted (core dumped)
*/