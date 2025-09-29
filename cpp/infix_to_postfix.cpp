#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char Stack[100];
int top=-1;
void push(char x)
 {
    Stack[++top]=x;
 }
char pop(){
    if(top==-1)
        return '\0';  
        return Stack[top--];
 }
int priority(char x){
    if(x=='(')
        return 0;
    else if(x=='+'|| x=='-')
        return 1;
    else if(x=='*'|| x=='/')
        return 2;
    else if(x=='^')
        return 3;

    return 0;
}
int main(){  
    string exp;
    cout<< "Enter the expression" << endl;
    cin>>exp;
    char ch;
    for(int i=0;i<exp.length();i++){
        ch=exp[i];
        if(ch=='(')
            push(ch);
        else if(isalnum(ch))
            cout <<ch;
        else if(ch==')')
        {
            while( top!=-1 && Stack[top]!='('){
                cout <<pop();
            }
            pop();       
        }
        else if(ch=='^')
            push(ch);
        else
            {
                while((top!=-1) && priority(Stack[top])>=priority(ch)){
                    cout<<pop();               
            }
            push (ch);
        }
    }
        while(top!=-1){
            cout << pop();
        }
        cout<<endl;
    
return 0;
    }


