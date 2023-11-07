#include<stdio.h>
int main()
{
    int A,B,T,C;
    scanf("%d%d",&A,&B);
    T = A+B;
    printf("%d\n", T);
    if(A>20){
        if(B>20){
            if(T>45){
                printf("pass");
            }
            else if(T>45){
                  printf("pass");
            }
            else{
                printf("fail");
            }
        }
        else if(T>45){
              printf("technical fail");
        }
        else{
            printf("fail");
        }
    }
    else if(B>20){
        if(T>54){
            printf("technical fail");
        }
        else{
            printf("fail");
        }
    }
    else{
        printf("fail");
    }
    return 0;


}