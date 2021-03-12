#include<stdio.h>

int main(){//Use of goto.
    char s[]="12345";
    char t[]="67389";//s and t have 3 in common.
    int match=0;
    // for(int i=0; s[i]!='\0'; ++i){//[1]
    //     for(int j=0; t[j]!='\0'; ++j){
    //         if(s[i]==t[j]){
    //             match=s[i];
    //             break;
    //         }
    //         if(match)
    //             break;
    //     }
    // }

    // for(int i=0; s[i]!='\0'; ++i){//[2]
    //     for(int j=0; t[j]!='\0'; ++j){
    //         if(s[i]==t[j]){
    //             match=s[i];
    //             break;
    //         }
    //     }
    // }

    for(int i=0; s[i]!='\0'; ++i){//[3]
        for(int j=0; t[j]!='\0'; ++j){
            if(s[i]==t[j]){
                match=s[i];
                goto found;
            }
        }
    }
found:
    printf("%c\n", match);
    return 0;
}