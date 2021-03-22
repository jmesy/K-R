#include<stdio.h>
#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp=allocbuf;
char *alloc(int);
void afree(char *);

int main(){
    char *pt;
    if(!(pt=alloc(1)))
        return 0;
    pt[0]='0';
    printf("%c\n", *pt);
    afree(allocbuf);
    return 0;
}

char *alloc(int n){
    if(allocbuf+ALLOCSIZE-allocp>=n){
        allocp+=n;
        return allocp-n;
    } else
        // return 0;
        return NULL;
}

void afree(char *p){
    if(p>=allocbuf && p <allocbuf + ALLOCSIZE)
        allocp=p;
}
