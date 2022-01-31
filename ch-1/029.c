#include<stdio.h>
#define M 1000

// Some context on strings.
// int main(){
//     char str[]="String.";
//     printf("%s\n", str);
//     for(int i=0; i<strlen(str); ++i){ // strlen requires string.h.
//         printf("%c\n", str[i]);
//     }
//     printf("%d\n", str[strlen(str)]);// This is the NULL character or \0 whose value is 0.
//     return 0;
// }

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
    int len;
    int max;
    char line[M];//What value does line[M] have?
    char longest[M];//[The purpose of supplying the size of an array in a declaration is to set aside storage.]

    max=0;
    while((len=get_line(line, M))>0){//get_line stores the value of the line in line.
        if(len>max){
            max=len;
            copy(longest, line);//copy stores in longest.
        }
    }
    if(max>0)
        printf("%s", longest);
    return 0;
}

int get_line(char line[], int maxline){//Why have maxline here instead of using M?
    int c;
    int i=0;
    while((c=getchar())!=EOF && i<maxline){
        line[i++]=c;
        if(c=='\n') break;
    }
    if(i==maxline){
        line[i-1]='\0';//NULL character, which marks the end of the array.
    }
    else{
        line[i]='\0';
    }
    return i;
}

//From the book.
//The return value in case of EOF is 0.
// int get_line(char s[], int lim){
//     int c, i;
//     for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
//         s[i]=c;
//     if(c=='\n'){
//         s[i]=c;
//         ++i;
//     }
//     s[i]='\0';
//     return i;
// }

void copy(char to[], char from[]){
    //From the book.
    int i=0;
    while((to[i]=from[i])!='\0')
        ++i;
}