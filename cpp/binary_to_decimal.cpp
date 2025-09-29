#include<iostream>
using namespace std;
int top;
int stack[100];
int num;
int rem;
int n;
int decimal=0;
int power=1;
void push( int stack[],int num)
{
    if (top==n-1){
    cout<<"overflow"<<endl;
    }
    else
    {
        while(num>0){
        rem=rem%10;
        num=num/10;
        decimal+=rem*power;
        power=power*2;
        }
    }
}
int main()
{
    cout<<"enter the number"<<endl;
    cin>>num;
    cout<<"decimal of given number is:"<<endl;
    push(stack,decimal);

}