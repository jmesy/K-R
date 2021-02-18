#include<stdio.h>

// #define IN 1
// #define OUT 0

//This is basically the program of in the book.
int main(){
    //Write a program which counts just words in alphanumeric stream plus spaces.
    //I count each state transition from outside to inside.
    int c;
    int state=0;
    int nw=0;
    while((c=getchar())!=EOF){
        if(state==0){
            if(c!=' '){
                //Note that 1 \n input counts \n as word.
                ++nw;
                state=1;
            }
        }

        // else if(state==1){
        //     if(c==' ') state=0;
        // }

        // else{
        //     if(c==' ') state=0;
        // }

        else if(c==' ') state=0;
    }
    printf("%d\n", nw);
}