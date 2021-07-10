#include<stdio.h>
#define n 5
int que [n];
int front=-1;
int rear=-1;
int main()
{
    int choice;
    char ch;
    printf("\n programe to implement circular queue using array enter the following no for the desired output::");
    printf("\n 1.adding an element");
    printf("\n 2.deleting an element");
    printf("\n 3.displaying all the elements");
    do{
        printf("\n enter the choice::");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        add();
        break;
        case 2:
        delete();
        break;
        case 3:
        display();
        break;
         
    }
    printf("\n do u want to continue \n if yes enter y \n if no enter n \n->>"); 
    ch=getche();
    }while(ch=='y');
}
void add()
{
    int x;
    printf("\n enter the element::");
    scanf("%d",&x);
    if(front==-1 && rear==-1)
    {                         //for inserting an first element//
        front=rear=0;
        que[rear]=x;
    }
  else if((rear+1)%n==front)
{
    printf("\n queue is full");
}
else
{
    rear=(rear+1)%n;  // for adding second and other elements//
    que[rear]=x;
}
}
void delete()
{
    if(front==rear)
    front=rear=-1;
    else
    {
        printf("\n %d is the deleted element",que[front]);
        front=(front+1)%n;
    }
}
void display()
{
    int i=front;
    for( i=front;i!=rear;i=(i+1)%n)
    {printf("\t %d",que[i]);}
    printf("\t %d",que[i]);
}

