#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2)
        return n-1;
    else
        return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    printf("%d",fibo(n-i));
    }
    return 0;
}