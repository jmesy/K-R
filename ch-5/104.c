#include<stdio.h>

int main(){
    char p[]="123";
    // char *p="123";//This causes: Segmentation fault (core dumped).
    p[0]='0';//[but the result is undefined if you try to modify the string contents.]
    printf("%s\n", p);
    test(p);
    return 0;
}

void test(char *t){
    printf("%s\n", t);
    t[0]='*';//One the other hand, this works.
    printf("%s\n", t);
}