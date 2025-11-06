#include<stdio.h>
int DAT[1000];
int fibo(int n){
    if(n==1 || n==2)
        return DAT[n]=n-1;
    else
    {
        if(DAT[n]==0)
        return DAT[n]=(fibo(n-1)+fibo(n-2));
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    printf("%d ",DAT[fibo(n-i)]);
    }
    return 0;

}