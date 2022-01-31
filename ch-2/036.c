#include<stdio.h>
#include<limits.h>//https://en.wikipedia.org/wiki/C_data_types
#include<math.h>

/*
00 2^1*0+2^0*0=0
01 2^1*0+2^0*1=1
10 2^1*1+2^0*0=2
11 2^1*1+2^0*1=3

With 2 bits I can express the digits from 00 to 11 that is the interval [00, 11]=[0, 3].
11
=100-1
=2^2*1+2^1*0+2^0*0-1
=2^2*1-1
=3
so [0, 3] or [0, 2^2-1]
for 2 bits.

Generally
[0, 2^k-1] for k bits if unsigned.
*/

// int power(int, int);

int main(){
    int ncol=3;//Columns of the output.
    printf("%d\n", CHAR_BIT);//8 on my machine.
    double d=pow(2, CHAR_BIT);
    char c[(int) d];//Cast the double to int.
    for(int i=0; i<d; ++i){
        c[i]=i;// In the c array are stored all the possible values for a char, from 0 to d-1=2^8-1.
    }

    // Formatting the table.
    // 0/3=0 remainder 0
    // 1/3=0 r 1
    // 2/3=0 r 2 <- This is when we move to a new line.
    // 3/3=1 r 0
    // ...
    // i%ncol=i%3==ncol-1=3-1=2

    for(int i=0; i<d-1; ++i){
        printf("%5d", c[i]);
        if((i%ncol)==ncol-1)
            printf("\n");
    }
    printf("\n");
}

// int power(int m, int n){
//     int r=1;
//     while(n>0){
//         r*=m;
//         --n;
//     }
//     return r;
// }
