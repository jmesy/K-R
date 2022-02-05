#include <stdio.h>
#include <limits.h>
#include <math.h>


//Determining the number of bits in an unsigned int.
int main(){
    unsigned int x=UINT_MAX;//Maximum value for an unsigned int.
    int M=100;
    char t[M];
    int i=0;
    while(x){
        x/=2;
        ++i;
    }
    t[i]='\0';
    printf("%d\n", i);//32
    printf("%d\n", (int) log2(UINT_MAX)+1);//32
    return 0;
}
//Compile as gcc reh.c -lm
