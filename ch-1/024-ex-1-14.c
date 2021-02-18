#include<stdio.h>
// #define LOOP for(int i=0; i<len; ++i)
#define LOOP(X) for(int i=0; i<X; ++i)

int main(){
    int c;
    int len='z'-'a'+1;
    int nchars[len];

    for(int i=0; i<len; ++i){
        nchars[i]=0;
    }

    while((c=getchar())!=EOF){
        for(int i=0; i<len; ++i){
            if(c=='a'+i || c=='A'+i){
                ++nchars[i];
                break;
            }
        }

        //Alternatively:
        // if('A'<=c && c<='Z')
        //     ++nchars[c-'A'];
        // else if('a'<=c && c<='z')
        //     ++nchars[c-'a'];
    }

    //Horizontal histogram.
    // for(int i=0; i<len; ++i){
    //     printf("[%c/%c] ", i+'a', i+'A');
    //     for(int j=0; j<nchars[i]; ++j){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    // int max=10;//Calculate this precisely or keep a counter to break the outer loop.

    int max=nchars[0];

    //Find the maximum with a while loop.
    int i=1;
    while(i!=len){
        if(nchars[i]>max)
            max=nchars[i];
        ++i;
    }

    //Find the maximum with a for loop.
    // for(int i=1; i<len; ++i){
    //     if(nchars[i]>max)
    //         max=nchars[i];
    // }


    //Horizontal histogram.
    printf("\n");
    LOOP(len) printf("%c", i+'a');
    printf("\n");
    LOOP(len) printf("%c", i+'A');
    printf("\n\n");
    for(int i=1; i<=max; ++i){//i=1.
        for(int j=0; j<len; ++j){
            if(nchars[j]>=i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}