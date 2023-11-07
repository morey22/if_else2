#include <stdio.h>
int main(){
    int d,c;
    scanf("%d", &d);
    if(d<=5){
        c = d*2;
        printf("%d", c);
    }
    else if(d<=10){
        c = (5*2)+(5-d)*3;
        printf("%d", c);
    }
    else if(d<=15){
        c = (5*2+10*2)+(10-d)*4;
        printf("%d", c);
    }
    else{
        c = (5*2+10*3+15*4)+(d-15)*5;
        printf("%d", c);
    }
    return 0;
    
}