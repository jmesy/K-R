#include<stdio.h>

int main(){
    // printf("Hello.\n");
    printf("hello, ");
    printf("world");
    printf("\n");
    // printf("Test.\bs");
    printf("Test.\b\n");
    printf("Test.\b\b.t\n");
    //Tes.t is the output of the last line.
    //\b is the backspace character.
    //It moves the cursor back two places, t. is overwritten by .t.
}
