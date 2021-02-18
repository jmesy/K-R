#include<stdio.h>

int main(){
    //Line counting.
    int c;
    int lc=0;
    while((c=getchar())!=EOF){
        if(c=='\n'){
            //'n' is called character constant.
            //'\n' is another character constant.
            //"\n" is a string constant.
            ++lc;
        }
    }
    printf("%d\n", lc);
    return 0;
}