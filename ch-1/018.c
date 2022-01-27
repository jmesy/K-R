#include<stdio.h>

//This counts the number of characters typed before each newline.
//Ctrl d for EOF.
int main(){
    int c;
    int counter=0;
    while((c=getchar())!=EOF){
        ++counter;
        if(c=='\n'){
            --counter;
            printf("%d\n", counter);
            counter=0;
        }
    }
    //From the book:
    // while((c=getchar())!=EOF){
    //     ++counter;
    // }
    // printf("%d\n", counter);
}