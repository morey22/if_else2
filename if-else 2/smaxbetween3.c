#include <stdio.h>
int main(){
    int a,b,c,max1,smax1;
    scanf("%d%d%d", &a,&b,&c);
    if(a>b){
          max1 = a;
          smax1 = b;
    }
    else {
        max1 = b;
        smax1 = a;
    }
    if(max1>c){
        if(c>smax1){
            printf("%d", c);
        }
        else {
            printf("smax1");
        }
    }
    else{
        printf("max1");
    }
    return 0;
}