#include <stdio.h>
int main(){
    int p,b;
    scanf("%d", &p); 
    if(p>3000){
        printf("3000");
    }
    else if(p>1600){
        b=(p*10)/100;
        if(b>240){
            printf("240\n");
        }
        else{
            printf("%d", b);
        }
    }
    else{
        b=(p*15)/100;
    }
    if(b<100){
        printf("100");
    }
    else{
        printf("%d", b);
    }
    return 0;
}