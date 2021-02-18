#include<stdio.h>

// int main(){
//     int fahr, celsius;
//     int lower, upper, step;

//     lower=0;
//     upper=160;
//     step=20;

//     fahr=lower;
//     // while(fahr<=upper){
//     //     celsius=5*(fahr-32)/9;
//     //     printf("%d\t%d\n", fahr, celsius);
//     //     fahr+=step;
//     // }
//     for(; fahr<=upper; fahr+=step){
//         celsius=5*(fahr-32)/9;
//         printf("%d\t%d\n", fahr, celsius);
//     }
// }

//The program can be written more coincisely as:
int main(){
    // int celsius;
    // int fahr;
    float celsius, fahr;
    for(fahr=0; fahr<=160; fahr+=20){
        celsius=5*(fahr-32)/9;//No need for 9. here since fahr is float.
        // printf("%d\t%d\t%d\n", fahr, celsius, (9*celsius+5*32)/5);
        printf("%6.1f%6.1f%6.1f\n", fahr, celsius, (9*celsius+5*32)/5.);
        //Print as floating point.
        //At least 6 wide and 2 after decimal point.
        //Right alignment.
    }
}

/*
user@guest:~/.../c/ch-1$ ./a.out
0	-17	1
20	-6	21
40	4	39
60	15	59
80	26	78
100	37	98
120	48	118
140	60	140
160	71	159
*/

//Output of the float version.
/*
user@guest:~/.../c/ch-1$ ./a.out
   0.0 -17.8   0.0
  20.0  -6.7  20.0
  40.0   4.4  40.0
  60.0  15.6  60.0
  80.0  26.7  80.0
 100.0  37.8 100.0
 120.0  48.9 120.0
 140.0  60.0 140.0
 160.0  71.1 160.0
*/