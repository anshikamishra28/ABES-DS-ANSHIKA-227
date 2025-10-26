#include<stdio.h>
#include<string.h>

int IsBalanced(char *exp){
    char stack[100];
    int top=-1;
    for(int i=0;i<strlen(exp);i++){
        char c=exp[i];
         if(c=='(' || c=='{' || c=='['){
            stack[++top]=c;
         }
         else if(c==')' || c=='}' || c==']'){
            if(top==-1)
                return 0;

                char topchar=stack[top--];
                if ((c==')' && topchar!='(') || (c=='}' && topchar!='{') || (c==']' && topchar!='[')) {
                return 0;
                }
         }
}
return (top==-1);
}
int main(){
    char exp[100];
    printf("Enter an expression : ");
    scanf("%s",&exp);

    if(IsBalanced(exp))
    printf("Balanced");
    else
    printf("Not balanced");
    return 0;
}