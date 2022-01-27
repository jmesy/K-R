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
    //After having pressed Enter (\n), the first getchar() reads the 1 from the text stream.
    //c=getchar()='1'=49, see $ man ascii.
    //The program loops until it prints the whole stream 12\n and then it awaits for input.
    //Ctrl d, if pressed, triggers getchar() again, whose value is EOF; this breaks the while loop.

    // This way you can read the decimal ASCII value for the first character of the text stream.
    // Try: 1\n

    // int c=getchar();
    // printf("~~~\n");
    // printf("Decimal value: %d\n", c);
    // putchar(c);
    // printf("\n");
    // return 0;

    // printf("%d\n", EOF);
    // -1
}