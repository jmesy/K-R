#include<stdio.h>

int main(){
    //[A text stream is a sequence of characters divided into lines;]
    //[each line consists of zero or more characters followed by a newline character.]
    //[getchar reads the next input character from a text stream and returns that as its value.]
    int c;
    c=getchar();
    while(c!=EOF){
        putchar(c);
        c=getchar();
    }
    //The program awaits for input (text stream) at c=getchar().
    //Let 12\n be the stream after program execution, \n being Enter/new line.
    //\n "triggers the execution of the first getchar()".
    //c=getchar()='c'=99, see $ man ascii.
    //The program loops until it prints the whole stream 12\n and then it awaits for input.
    //Ctrl d triggers getchar() again, whose value is EOF; this breaks the while loop.
}