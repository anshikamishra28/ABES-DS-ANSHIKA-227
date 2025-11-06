#include<stdio.h>
int power(int b,int p){
    if(p==0)
        return 1;
    return b*power(b,(p-1));
}
int main(){
    int b,p;
    printf("enter base:");
    scanf("%d",&b);
    printf("enter power:");
    scanf("%d",&p);
    int ans=power(b,p);
    printf("%d raised to the power %d is: %d",b,p,ans);
    return 0;
}