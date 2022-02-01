#include <stdio.h>

void squeeze(char s[], char);

int main(){
    char s[]="Poodle doodle";
    char c='o';
    printf("%s\n", s);
    squeeze(s, c);
    printf("%s\n", s);
    return 0;
}

void squeeze(char s[], char c){
    int j=0;
    for(int i=0; s[i]!='\0'; ++i){
        if(s[i]==c) continue;
        s[j]=s[i];
        ++j;

        // Alternatively:

        // if(s[i]!=c){ //[1]
        //     s[j]=s[i];
        //     ++j;
        // }

        // if(s[i]!=c) s[j++]=s[i]; //[2]
    }
    s[j]='\0';
}
