#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#define size 50
int top=-1;
void push(char);
char pop();
int stack[30],postfix[30];
int eval_postfix()

void push(char symbol))
{
stack[++top]=symbol;
}

char pop()
{
char symbol;
symbol=stack[top--];
return symbol;
}


int eval_postfix()
{
char symbol;
int i=0,op1,op2;

while((symbol=postfix[i++])!='\0')
{
if(isalnum(symbol))
{
push(symbol-'0');
}
else
{
op2=pop();
op1=pop();
switch(symbol)
{
case '+':push(op1+op2);
         break;
case '-':push(op1-op2);
         break;
case '*':push(op1*op2);
         break;
case '/':if(op2==0)
          {
         push(op1+op2);
         break;
          }
          else
          {
      printf("out loop");
          return 0;
          }
case '^':push(pow(op1,op2));
         break;
}
}
return(pop());
}

void main()
{
int val;
printf("Enter the value");
scanf("%d",&op1);
printf("Enter another value:");
scanf("%d",&op2);
val=eval_postfix();
printf("Evalvation of postfix expression %d and %d:",val);
}
