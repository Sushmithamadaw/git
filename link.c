#include<stdio.h>
#include<stdlib.h>
typedef struct Node* lstptr;
struct Node
{
	int data;
	lstptr link;
};
lstptr first=NULL;
lstptr getnode()
{
lstptr node;
node=(lstptr)malloc(sizeof(struct Node));
return node;
}
void insertBegin(int ele)
{
lstptr new;
new=getnode();
new->data=ele;
new->link=NULL;
if(first!=NULL)
new->link=first;
first=new;
}
void insertEnd(int ele)
{
lstptr new,temp;
new=getnode();
new->data=ele;
new->link=NULL;
if(first!=NULL)
{
temp=first;
while(temp->link!=NULL)
temp=temp->link;
temp->link=new;
}
else
first=new;
}
void display()
{
lstptr temp;
if(first==NULL)
{
printf("\nList is empty");
exit(0);
}
temp=first;
while(temp->link!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
printf("%d\t",temp->data);
}
void deleteBegin()
{
lstptr temp;
if(first==NULL)
{
printf("List is empty");
}
else
{
temp=first;
if(first->link==NULL)
first=NULL;
else
first=first->link;
free(temp);
}
}
void deleteEnd()
{
lstptr temp,prev;
if(first==NULL)
{
printf("List is empty");
}
else
{
temp=first;
if(first->link==NULL)
first=NULL;
else
{
prev=temp;
	while(temp->link!=NULL)
	{
	prev=temp;
	temp=temp->link;
	prev->link=NULL;
         }
	free(temp);
	
}
}
}
void deletespecified(int ele)
{
lstptr temp,prev;
temp=first;
if(first==NULL)
{
printf("empty list");
}
else if(first->data==ele)
{
if(first->link!=NULL)
first=first->link;
else
first=NULL;
}
else
{
while(temp->data!=ele && temp->link!=NULL)
{
prev=temp;
temp=temp->link;
}
if(temp->link==NULL&&temp->data!=ele)
{
printf("item not found");
return;
}
else if(temp->link!=NULL)
prev->link=temp->link;
else
prev->link=NULL;
}
free(temp);
}
//void insertspecified(int ele)
//{
//lstptr temp,prev,count=1,ipos;
//temp=first;
//if(start==NULL && ipos==1)
//{
//new=getnode();
//new->data=ele;
//new->link=NULL;
//}
//else if(count
//{
//
void main()
{
 int ch,ele,opt=1;
while(opt)
{
printf("\n1.INSERT_BEGIN \n2.INSERT_END \n 3.DELETE_BEGIN \n 4.DELETE_END \n 5.DELETE_SPECIFY \n 6.DISPLAY\n");
printf("Enter your choice:");
scanf("%d",&ch);
	switch(ch)
	{
	case 1:printf("Enter the element to be inserted at the begin:");
	       scanf("%d",&ele);
	       insertBegin(ele);
		printf("Element %d is Inserted\n",ele);
		break;
        case 2:printf("Enter the element to be inserted at the end:");
	       scanf("%d",&ele);
	       insertEnd(ele);
		printf("Element %d is Inserted\n",ele);
		break;
        case 3:deleteBegin();
                 break;
        case 4:deleteEnd();
                 break;
 	case 5:printf("Enter specific element to delete");
               scanf("%d",&ele);
		deletespecified(ele);
		 printf("Element %d is deleted",ele);
		break;
        case 6:display();
                 break;
	}
printf("Do you want to continue:(1/0)");
scanf("%d",&opt);
}
}

