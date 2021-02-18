#include<stdio.h>

//Not so interesting.
#define LOWER 0
// #define UPPER 300
#define UPPER 160
#define STEP 20

int main(){
    for(int fahr=LOWER; fahr<=UPPER; fahr+=STEP){
        // printf("%d\t%6.1f\n", fahr, 5*(fahr-32)/9.);
        printf("%d\t%6.1f\n", fahr, 5*(fahr-32)/9.);
        //Tabs have different width on terminal.
        //I suspect 8 spaces minus %d width
    }
}