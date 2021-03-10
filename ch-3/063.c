#include<stdio.h>

void i_toa(int, char []);
void itoa(int, char []);

int main(){
    int x=123;
    char t[10];
    itoa(x, t);
    // i_toa(x, t);
    printf("%s\n", t);
    return 0;
}

// void i_toa(int x, char t[]){
//     int i;
//     if(x==0){
//         t[i++]='0';
//     }
//     for(i=0; x!=0; ++i){
//         t[i]=x%10+'0';
//         x/=10;
//     }
//     t[i]='\0';
//     reverse(t);
// }

//Using do/while.
void i_toa(int x, char t[]){
    int i=0;
    do t[i++]=x%10+'0';
    while((x/=10)!=0);
    t[i]='\0';
    //reverse(t);
}

//From the book.
void itoa(int n, char s[]){
    int i, sgn;
    if((sgn=n)<0)
        n=-n;
    i=0;
    do{
        s[i++]=n%10+'0';
    } while((n/=10)>0);
    if(sgn<0)
        s[i++]='-';
    s[i]='\0';
    //reverse(s);
}