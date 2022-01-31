#include<stdio.h>

int to_lower_char(char c);
void to_lower(char s[]);

int main(){
    char s[]="StRiNg";
    to_lower(s);
    printf("%s\n", s);
    return 0;
}

//Solution similar to the book.
int to_lower_char(char c){
    char k='a'-'A';
    if(c>='A' && c<='Z'){
        return c+k;
    }
    return c;
    //If c='A' then c+k='A'+'a'-'A'='a'.
}

void to_lower(char s[]){
    for(int i=0; s[i]!='\0'; ++i){
        s[i]=to_lower_char(s[i]);
    }
}

// void to_lower(char c[]){
//     for(int i=0; c[i]!='\0'; ++i){
//         if('A'<=c[i] && c[i]<='Z'){
//             c[i]+='a'-'A';
//         }
//     }
// }