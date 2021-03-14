#include<stdio.h>
#include<ctype.h>
#include<iso646.h>

double a_tof(char []);
double atof(char []);

int main(){
    char t[]=" 123.45 ";
    double x=a_tof(t);
    printf("%f\n", x);
    printf("%f\n", atof(t));
    return 0;
}

//Possible solution.
double a_tof(char t[]){
    char sgn=+1;
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
    return sgn*res;
}

//From the book.
double atof(char s[]){
    double val, power;
    int i, sign;

    for(i=0; isspace(s[i]); ++i)
        ;
    sign=(s[i]=='-')?-1:1;
    if(s[i]=='-' or s[i]=='+')
        i++;
    for(val=0.0; isdigit(s[i]); i++)
        val=10.0*val+(s[i]-'0');
    if(s[i]=='.')
        i++;
    for(power=1.0; isdigit(s[i]); i++){
        val=10.0*val+(s[i]-'0');
        power*=10.0;
    }
    return sign*val/power;
}