#include<stdio.h>

int blank(char);
void tri_m(char []);
int str_len(char []);
int trim(char []);

int main(){
    char t[]="Stri  ng  ";
    // char t[]="Stri  ";
    // tri_m(t);
    trim(t);
    printf("%s\n", t);
    return 0;
}


int blank(char c){
    if(c==' ' || c=='\t' || c=='\n')
        return 1;
    return 0;
}

// int blank(char c){
//     switch(c){
//         case ' ':
//         case '\t':
//         case '\n':
//             return 1;
//     }
//     return 0;
// }

// void tri_m(char t[]){
//     int idx;
//     char flag=0;
//     int i;
//     for(i=0; t[i]!='\0'; ++i){
//         if(flag==0)
//             if(!blank(t[i]))
//                 flag=1;
//         else if(flag==1)
//             if(blank(t[i])){
//                 idx=i;
//                 flag=0;
//             }
//     }
//     t[idx]='\0';
// }

//Rewriting the latter.
void tri_m(char t[]){
    int idx=0;
    char flag=0;
    int i;
    for(int i=0; t[i]!='\0'; ++i){
        if(flag==1){
            if(blank(t[i])){
                idx=i;
                flag=0;
            }
        }
        else if(!blank(t[i]))
            flag=1;
    }
    t[idx]='\0';
}

int str_len(char s[]){
    int i;
    for(i=0; s[i]!='\0'; ++i)
        ;
    return i;
}

//From the book.
int trim(char s[]){
    int n;
    for(n=str_len(s)-1; n>=0; --n){
        if(blank(s[n]))
            break;
    }
    return n;
}