#include <stdio.h>
int main(){
    int y;
    scanf("%d", &y);
    if(y%100==0){
        printf("divisible by 100");
    }
    else{
        printf("not divisible by 100");
    }
    return 0;
}