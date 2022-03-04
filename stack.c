#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 4

int stack [MAXSIZE],top=-1;

void push(int ele)
{
if(top==MAXSIZE-1)
{
printf("Stack is full\n");
exit(0);
}
stack[++top]=ele;
}
int pop()
{
int ele;
if(top==-1)
{
printf("stack is empty\n");
exit(0);
printf("%d",stack[top]);
}
ele=stack[top--];
return ele;
}
void display()
{
int i;
if(top==-1)
{
printf("Stack is empty\n");
exit(0);
}
printf("\n stack is ");

for(i=top;i>=0;i--)
printf("%d\t",stack[i]);
}
void main()
{
int ch,x;
while(1)
{
printf("\n 1.Push \n 2.Pop \n 3.Display\n");
printf("Enter your choice:");
scanf("%d",&ch);

switch(ch)
{
case 1:printf("Enter the element to be inserted:");
       scanf("%d",&x);
       push(x );
       break;
case 2:printf("Enter the element to be deleted:");
       scanf("%d",&x);
       pop(x);
       break;
case 3:display();
      break;
default :printf("wrong choice");
exit(0);
}
} 
}
