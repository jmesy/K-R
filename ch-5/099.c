#include<stdio.h>

int str_len(char *);

int main(){
    char t[]="12";
    printf("%d\n", str_len(t));
    return 0;
}

int str_len(char *t){
    int i;
    // for(i=0; *(t+i)!='\0'; ++i)//Also works.
    //     ;
    for(i=0; *t!='\0'; ++t, ++i)
        ;
    return i;
}
