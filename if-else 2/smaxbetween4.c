#include <stdio.h>
int main(){
    int a,b,c,d,max1,smax1,max2,smax2;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    if(a>b){
        max1 = a;
        smax1 = b;
    }
    else{
        max1 = b;
        smax1 = a;
    }
    if(c>d){
        max2 = c;
        smax2 = d;
    }
    else{
        max2 = d;
        smax2 = c;
    }
    if(max1>max2){
        if(max2>smax1){
            printf("max1");
        }
        else{
            printf("smax1");
        }
    }
    else if(max1>smax2){
        printf("max1");
    }
    else{
        printf("smax2");
    }
    return 0;
}