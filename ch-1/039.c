#include<stdio.h>
#include<string.h>

int str_len(char s[]);

int main(){
    char c[]="Four";
    // printf("c[%d]=%d\n", 4, c[4]);//c[4]=0.
    int c_len=str_len(c);
    printf("%d\n", c_len);
    printf("%lu\n", strlen(c));
    return 0;
}

int str_len(char s[]){
    int i=0;
    for(; s[i]!='\0'; ++i)
        ;
    return i;
}

//From the book:
// int str_len(char s[]){
//     int i=0;
//     while(s[i]!='\0'){
//         ++i;
//     }
//     return i;
// }

/*
printf("%d\n", strlen(c));
039.c: In function ‘main’:
039.c:11:14: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘size_t {aka long unsigned int}’ [-Wformat=]
     printf("%d\n", strlen(c));
             ~^     ~~~~~~~~~
             %ld
*/