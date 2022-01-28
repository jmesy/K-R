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
                //Note that 1 \n as input counts \n as word.
                // See how the alternative solution at the bottom of the page deals with this.
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

// Alternative solution.

// #include<stdio.h>

// int main(){
//     int c=0;
//     int wc=0;
//     int state=0;
//     while((c=getchar())!=EOF){
//         // This one can also be used instead of the next two lines.
//         // if(c!=' ' && c!='\n'){
//         if(c=='\n') continue;
//         if(c!=' '){
//             if(state==0){
//                 ++wc;
//                 state=1;
//             }
//         }
//         // If c is not a space character we have that:
//         // else {
//         //     if(state==1){
//         //         state=0;
//         //     }
//         // }
//         // Which is equivalent to a less descriptive:
//         else if(state==1){
//             state=0;
//         }
//     }
//     printf("Number of words counted: %d\n", wc);
//     return 0;
// }
