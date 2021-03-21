#include<stdio.h>

void swap(int *, int *);

int main(){
    int x=0;
    int y=1;
    printf("%d, %d\n", x, y);
    swap(&x, &y);
    printf("%d, %d\n", x, y);
    return 0;
}

void swap(int *px, int *py){
    int tmp;
    tmp=*px;
    *px=*py;
    *py=tmp;
}
