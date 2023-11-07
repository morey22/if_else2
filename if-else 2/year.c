#include <stdio.h>
int main(){
    int y,m,d;
    scanf("%d%d%d", &y,&m,&d);
    if(y>0){
        printf("valid");
    }
    else if(d>=1){
        printf("valid");
    }
    else if(d<=31){
        printf("valid");
    }
    else if(m>=1){
        printf("valid");
    }
    else if(m<=31){
        printf("valid");
    }
    else{
        printf("invalid");
    }
    return 0;
}