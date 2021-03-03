#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void random_array(int[], int);
int bin_search(int [], int, int);
int binsearch(int, int[], int);
void print_array(int [], int);
void bubble_sort(int [], int);
int sort_check(int [], int);

int main(){
    int len=3;
    int t[len];
    int x=5;
    random_array(t, len);
    // t[0]=2;
    // t[1]=3;
    // t[2]=5;
    bubble_sort(t, len);
    print_array(t, len);
    int r=bin_search(t, x, len);
    // int r=binsearch(x, t, len);
    if(r==-1) printf("%d is not in t[].\n", x);
    else printf("%d is in t[] at position %d.\n", x, r);
    return 0;
}

//https://www.cplusplus.com/reference/cstdlib/rand/
void random_array(int t[], int len){
    srand(time(NULL));
    for(int i=0; i<len; ++i){
        t[i]=rand()%10;//t[i] in {0, ..., 9}.
    }
}

//Possible solution.
int bin_search(int t[], int x, int len){
    int t0, t1, t2, r;
    r=-1;
    t0=0;
    t2=len-1;
    while(t0<=t2){
        t1=t0+(t2-t0+1)/2;//Casts to int.
        if(x==t[t1]) return t1;
        else if(x<t[t1]) t2=t1-1;
        else if(x>t[t1]) t0=t1+1;
    }
    return r;
}

//From the book.
int binsearch(int x, int v[], int n){
    int low, high, mid;
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(x<v[mid])
            high=mid-1;
        else if(x>v[mid])
            low=mid+1;
        else
            return mid;
    }
    return -1;
}

void print_array(int t[], int len){
    for(int i=0; i<len; ++i){
        printf("t[%d]=%d\n", i, t[i]);
    }
}

void bubble_sort(int t[], int len){
    int tmp;
    int flag=1;
    while(flag){
        flag=0;
        for(int i=0; i<len-1; ++i){
            if(t[i]>t[i+1]){
                tmp=t[i];
                t[i]=t[i+1];
                t[i+1]=tmp;
                flag=1;
            }
        }
    }
}

//This also works.
// void bubble_sort(int t[], int len){
//     int tmp;
//     while(sort_check(t, len)==-1){
//         for(int i=0; i<len-1; ++i){
//             if(t[i]>t[i+1]){
//                 tmp=t[i];
//                 t[i]=t[i+1];
//                 t[i+1]=tmp;
//             }
//         }
//     }
// }

int sort_check(int t[], int len){
    int r=0;//Sorted until proven otherwise.
    for(int i=0; i<len-1; ++i){
        if(t[i]>t[i+1]) return -1;
    }
    return r;
}