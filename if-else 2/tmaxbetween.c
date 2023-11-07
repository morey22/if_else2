#include <stdio.h>
int main(){
    int a,b,c,d,min1,smin1,min2,smin2;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<b){
        min1 = a;
        smin1 = b;
    }
    else{
        min1 = b;
        smin1 = a;
    }
    if(c<d){
        min2 = c;
        smin2 = d;
    }
    else{
        min2 = d;
        smin2 = c;
    }
    if(min2<min1){
       if(min1<smin1){
        printf("%d", min1);
       }
       else{
        printf("%d", smin1);
       }
    }
    else if(min2<smin1){
        printf("%d", min2);
    }
    else{
        printf("%d", smin1);
    }
    return 0;
}