#include<stdio.h>
#include<iso646.h>
#define MAXLINE 1000

int get_line(char [], int);
int strrindex(char [], char []);
int str_len(char []);

char pattern[]="ould";

int main(){
    char line[MAXLINE];
    int found=0;

    while(get_line(line, MAXLINE)>0)
        if(strrindex(line, pattern)>=0){
            printf("%s", line);
            found++;
        }
    // return found;
    printf("%d\n", found);
}

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

int str_len(char t[]){
    int i;
    for(i=0; t[i]!='\0'; ++i)
        ;
    return i;
}

int strrindex(char s[], char t[]){
    int ls=str_len(s);
    int lt=str_len(t);
    if(lt==0 or ls<lt)
        return -1;
    for(int i=ls-lt; i>=0; --i){//Or ls-lt-1 because of \n.
        int j;
        for(j=0; j<lt && s[i+j]==t[j]; ++j)
            ;
        if(j==lt)
            return i;
    }
    return -1;
}