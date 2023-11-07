#include <stdio.h>
int main(){
    int b;
    scanf("%d",&b);
    if(b<=50){
        int t = b*0.50;
        printf("%d", t);
    }
    else if(b<=150){
         int t = (50*0.50)*(b-50*0.75);
         printf("%d", t);
    }
    else if(b<=250){
        int t = (50*0.50+100*0.75)*(b-150)*1.20;
        printf("%d", t);
    }
    else{
        int t = 50*0.50+100*0.75+100*1.20+(b-250)*1.50;
        printf("%d", t);
    }
    return 0;
    
}