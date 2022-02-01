#include<stdio.h>

void squeeze(char s1[], char s2[]);

int main(){
    char s1[]="String.";
    char s2[]="ti";
    printf("%s\n", s1);
    printf("%s\n", s2);
    squeeze(s1, s2);
    printf("%s\n", s1);
    return 0;
}

//Solution.
void squeeze(char s1[], char s2[]){
    // int k=0;
    // for(int i=0; s2[i]!='\0'; ++i){
    //     for(int j=0; s1[j]!='\0'; ++j){
    //         if(s1[j]!=s2[i])
    //             s1[k++]=s1[j];
    //     }
    //     s1[k]='\0';
    //     k=0;
    // }

    //Solution with the loops swapped.
    // int k=0;
    // int flag=0;
    // for(int i=0; s1[i]!='\0'; ++i){
    //     for(int j=0; s2[j]!='\0'; ++j){
    //         if(s1[i]==s2[j]){
    //             flag=1;
    //             break;
    //         }
    //     }
    //     if(flag==0){
    //         s1[k]=s1[i];
    //         ++k;
    //     }
    //     else flag=0;
    // }
    // s1[k]='\0';

    // Little tweak to the latter.
    int k=0;
    for(int i=0; s1[i]!='\0'; ++i){
        int j=0;
        for(; s2[j]!='\0'; ++j){
            if(s1[i]==s2[j]) break;
        }
        if(s2[j]=='\0'){
            s1[k]=s1[i];
            ++k;
        }
    }
    s1[k]='\0';
}
