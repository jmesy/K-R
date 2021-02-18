#include<stdio.h>

int main(){
    int c;
    int bc=0, tc=0, nc=0;
    while((c=getchar())!=EOF){
        // switch(c){
        //     case ' ':
        //         ++bc;
        //         break;
        //     case '\t':
        //         ++tc;
        //         break;
        //     case '\n':
        //         ++nc;
        //         break;
        // }

        // if(c==' ') ++bc;
        // else if(c=='\t') ++tc;
        // else if(c=='\n') ++nc;

        if(c==' '){
            ++bc;
        }
        else if(c=='\t'){
            ++tc;
        }
        else if(c=='\n'){
            ++nc;
        }
    }
    printf("bc: %d\n",  bc);
    printf("tc: %d\n",  tc);
    printf("nc: %d\n",  nc);
    return 0;
}