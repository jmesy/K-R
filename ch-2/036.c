#include<stdio.h>
#include<limits.h>//https://en.wikipedia.org/wiki/C_data_types
#include<math.h>

/*
00 2^1*0+2^0*0=0
01 2^1*0+2^0*1=1
10 2^1*1+2^0*0=2
11 2^1*1+2^0*1=3

11 is also
100-1 or
2^2*1-1=3
so [0, 3] or [0, 2^2-1]
for 2 bits.

Generally
[0, 2^k-1] for k bits if unsigned.
*/

int power(int, int);

int main(){
    int ncol=3;//Columns of the output.
    printf("%d\n", CHAR_BIT);//8 on my machine.
    // printf("%f\n", pow(2, 3));
    double d=pow(2, CHAR_BIT);
    char c[(int) d];//Cast the double to int.
    for(int i=0; i<d; ++i){
        c[i]=i;
    }

    //This is the easy solution.
    for(int i=0; i<d-1; ++i){
        printf("%5d", c[i]);
        if((i%ncol)==ncol-1)
            printf("\n");
    }
    printf("\n");
    //How come that I get the result that I get?
}

// int power(int m, int n){
//     int r=1;
//     int i=1;
//     while(i<n){
//         r*=m;
//         ++i;
//     }
//     return r;
// }