#include<stdio.h>
int main(){
    int M;
    printf("Enter value of M :- ");
    scanf("%d",&M);
    if(M%3==0 & M%5==0){
        printf("Good Number");
    }else{
        if(M%3==0 & M%5 !=0){
            printf("Bad Number");
        }else{
            if(M%5==0 & M%3 !=0){
                printf("Poor Number");
            }else{
                printf("-1");
            }
        }
    }
    return 0;
}