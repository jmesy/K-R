#include<stdio.h>

int main(){
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite=nother=0;
    for(i=0; i<10; ++i){
        ndigit[i]=0;
    }

    while((c=getchar())!=EOF){
        if(c>='0' && c<='9'){
            ++ndigit[c-'0'];
        }
        else if(c==' ' || c=='\n' || c=='\t') ++nwhite;
        else ++nother;
    }
    printf("nwhite: %d\n", nwhite);
    printf("nother: %d\n", nother);
    for(i=0; i<9; ++i){
        // printf("ndigit[%d]=%d\n", i, ndigit[i]); // Simpler alternative to the double loop.
        printf("nd[%d] ", i);
        for(int j=0; j<ndigit[i]; ++j){
            printf("*");
        }
        printf("\n");
    }
}