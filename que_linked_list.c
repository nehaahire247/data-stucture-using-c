// programe of queue  linked list //
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*temp;
struct node *front=0;
struct node *rear=0;
struct node *newnode;
int main()
{
    int choice;
    char ch;
    printf("\n enter the following no for the desired operation::");
    printf("\n  1.adding an element");
    printf("\n 2.deleting an element");
    printf("\n 3.display");
    do{
        printf("\n enter the choice ::");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            enque(); // for adding the element//
            break;
            case 2:
            deque();
            break;
            case 3:
            display();
            break;
        }
        printf("\n do u wnat continue \n  if yes enter Y\n if no enter N\n ->");
        ch=getche();
    }while(ch=='y');
}
void enque()
{
    int x;
    printf("\n enter the no.::");
    scanf("%d",&x);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(front==0 && rear==0)
    front=rear=newnode;
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void deque()
{
struct node *temp;
temp=front;
if(front==0 && rear==0)
printf("\n list is empty");
else
{
    printf("%d is the deleted element",front->data);
    front=front->next;
    free(temp);
}
}
void display()
{if(front==0 && rear==0)
printf("\n list is empty");
else{
    temp=front;
    printf("\n elements of list are as following");
    while(temp!=NULL)
    {   
        printf("\t %d",temp->data);
        temp=temp->next;
    }
}

}
