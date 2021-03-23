#include<stdio.h>

int str_len(char *);

int main(){
    char *s="12";
    printf("%d\n", str_len(s));
    return 0;
}

int str_len(char *t){
    char *s=t;
    while(*s!='\0')
        ++s;
    return s-t;
}

