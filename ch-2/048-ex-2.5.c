#include<stdio.h>

int str_pbrk(char s1[], char s2[]);

int main(){
    char s1[]="String.";
    char s2[]="ki";
    int idx=str_pbrk(s1, s2);
    printf("%d\n", idx);
    printf("%d\n", 3);
    return 0;
}

//Solution.
int str_pbrk(char s1[], char s2[]){
    for(int i=0; s2[i]!='\0'; ++i){
        for(int j=0; s1[j]!='\0'; ++j){
            if(s1[j]==s2[i]) return j;
        }
    }
    return -1;
}