#include<stdio.h>
#include<ctype.h>
#include<iso646.h>

double a_tof(char []);

int main(){
    char t[]=" 123.45e1";
    double x=a_tof(t);
    printf("%f\n", x);
    return 0;
}

//Possible solution.
double a_tof(char t[]){
    char sgn=+1;
    char sgn_exp=+1;
    int exp=0;
    int exp_pow=1;
    double res=0;
    int i;
    int k=1;
    
    for(i=0; isspace(t[i]); ++i)
        ;
    if(t[i]=='-'){
        sgn*=-1;
        ++i;
    }
    else if(t[i]=='+')
        ++i;
    while(isdigit(t[i]))
        res=res*10+(t[i++]-'0');
    if(t[i]=='.'){
        ++i;
        while(isdigit(t[i])){
            k*=10;
            res=res+(double)(t[i++]-'0')/k;
        }
    }

    if(t[i]=='e' or t[i]=='E'){
        ++i;
        if(t[i]=='-'){
            sgn_exp*=-1;
            ++i;
        }
        else if(t[i]=='+')
            ++i;
        while(isdigit(t[i]))
            exp=exp*10+(t[i++]-'0');
        for(int j=0; j<exp; ++j)
            exp_pow*=10;
    }
    if(sgn_exp==+1)
        return sgn*res*exp_pow;
    else
        return sgn*res/exp_pow;
}