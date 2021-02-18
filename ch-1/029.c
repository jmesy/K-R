#include<stdio.h>
#define M 1000

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
    // if(i==maxline) line[i-1]='\0';//No point. line[M] is '\0'.
    line[i]='\0';//Null character, which marks the end of the array.
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
    // int i=0;
    // while((to[i]=from[i])!='\0')
    //     ++i;

    int i=0;
    while(1){
        to[i]=from[i];
        if(from[i]=='\0')
            break;
        ++i;
    }
}