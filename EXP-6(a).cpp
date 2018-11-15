#include<iostream>
#include<string.h>
#define size 50

using namespace std;
char stack[size];
int top=-1;
char ele;
void push(char);
char pop();
char infix[30],output[30];
int prec(char);
int main()
{
int i=0,j=0,length;
char temp;
cout<<"\nEnter an infix expression: ";
cin>>infix;
length=strlen(infix);
for(i=0;i<length;i++)
{
    if(infix[i]!='+' && infix[i]!='-' && infix[i]!='*' && infix[i]!='/' && infix[i]!='^' && infix[i]!=')' && infix[i]!='(' )
    {
    output[j++]=infix[i];
    }
   else
    {
        if(top==-1)
        {
        push(infix[i]);
        }
        else
        {
        if(infix[i]!=')' && infix[i]!='(')
        {

          if(prec(infix[i]) <= prec(stack[top]))
            {
                while(prec(infix[i]) <= prec(stack[top]))
                {
                temp=pop();
                output[j++]=temp;
                }
          push(infix[i]);

            }
            else
            {
            push(infix[i]);
            }
        }
        else
            {
            if(infix[i]=='(')
            {
            push(infix[i]);
            }
            if(infix[i]==')')
            {
            temp=pop();
            while(temp!='(')
            {
            output[j++]=temp;
            temp=pop();}
            }
            }
            }
            }
}
while(top!=-1)
    {
    output[j++]=pop();
    }
cout<<"The Postfix expression is: "<<output;

}
void push(char ele)
{

    ++top;
    stack[top]=ele;


}
char pop()
{
    char t;
    t=stack[top];
    top--;
    return t;


}
int prec(char symbol)
{
if(symbol== '(')
return 0;
if(symbol== ')')
return 0;
if(symbol=='+' || symbol=='-')
return 1;
if(symbol=='*' || symbol=='/')
return 2;
if(symbol=='^')
return 3;
return 0;
}
