#include<stdio.h>
#define MAXLINE 1000

int get_line(char line[], int max);
int strindex(char source[], char searchfor[]);
int str_len(char []);
int getline_book(char [], int);
int strindex_book(char [], char []);

char pattern[]="ould";

int main(){
    char line[MAXLINE];
    int found=0;

    while(get_line(line, MAXLINE)>0)
        if(strindex(line, pattern)>=0){
            printf("%s", line);
            found++;
        }
    // return found;
    printf("%d\n", found);
}

//Possible getline function.
int get_line(char line[], int max){
    int c, i=0;
    while(((c=getchar())!=EOF) && i<max-1){
        line[i++]=c;
        if(c=='\n')
            break;
    }
    line[i]='\0';
    return i;
}

//Possible strindex function.
// int strindex(char s[], char t[]){
//     for(int i=0; s[i]!='\0'; ++i){
//         int j;
//         // for(j=0; t[j]!='\0' && s[i+j]!='\0'; ++j){//Also works.
//         //     if(s[i+j]!=t[j])
//         //         break;
//         // }
//         for(j=0; t[j]!='\0' && s[i+j]==t[j]; ++j)//!!
//             ;
//         if(t[j]=='\0')
//             return i;
//     }
//     return -1;
// }

int str_len(char t[]){
    int i;
    for(i=0; t[i]!='\0'; ++i)
        ;
    return i;
}

//The previous, simplified.
int strindex(char s[], char t[]){
    int ls=str_len(s);
    int lt=str_len(t);
    for(int i=0; i<ls; ++i){
        int j;
        // for(j=0; j<lt && i+j<ls; ++j){//Also works.
        //     if(s[i+j]!=t[j])
        //         break;
        // }
        for(j=0; j<lt && s[i+j]==t[j]; ++j)
            ;
        if(j==lt)
            return i;
    }
    return -1;
}

int getline_book(char s[], int lim){
    int c, i;
    i=0;
    while(--lim>0 && (c=getchar())!=EOF && c!='\n')
        s[i++]=c;
    if(c=='\n')
        s[i++]=c;
    s[i]='\0';
    return i;
}

int strindex_book(char s[], char t[]){
    int i, j, k;
    for(int i=0; s[i]!='\0'; i++){
        for(j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
            ;
        if(k>0 && t[k]=='\0')
            return i;
    }
    return -1;
}