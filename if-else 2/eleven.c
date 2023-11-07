#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n%5==0){
        printf("divisibly by 5");
    }
    else if(n%11==0){
        printf("divisible by 11");
    }
    else if(n%5==0 || n%11==0){
        printf("divisible by both 5 & 11");
    }
    return 0;
}