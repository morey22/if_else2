#include <stdio.h>
int main(){
    int n,t;
    scanf("%d", &n);
    if(n<=100){
        printf("No charge");
    }
    else if(n<=200){
        t = 100*0+(n-100)*5;
        printf("%d", t);
    }
    else if(n<=400){
        t = 100*0+100*5+(n-200)*10;
    }
    else {
       printf("invalid");
    }
    return 0;
}