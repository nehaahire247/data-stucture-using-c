#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear=0;
int main ()
{   int choice;
    char ch;
    printf("\n programe to display circular queue using linked list");
    printf("\n enter the following numbers for the desired operation");
    printf("\n1.adding element");
    printf("\n2.deleting an element");
    printf("\n3.display");
     do{ printf("\n enter the choice::");
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
    printf("\n do u want to continue \n if yes enter y\n if no enter n::");
    ch=getche();
     }while(ch=='y');
}
void add (){
    int x;
    printf("\nenter the data::");
    scanf("%d",&x);
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(rear==0)
    {front=rear=newnode;//both front and rear are pointing to address of newnode//
    rear->next=front;
    }
    else{
        rear->next=newnode;
        rear=newnode; //now rear is storing address of newnode element//
        rear->next=front;
     
    }

}
void delete()
{
    struct node *temp;
    temp=front;
    if(front==0 && rear==0)
    printf("\n queue underflow");
    if(front==rear)
    {
        front=rear=0;
        free(temp);
    }
    else{
        front=front->next;
        rear->next=front;
        free(temp);
    }

}
void display()
{ struct node *temp;
    temp=front;
    while(temp->next!=front)
    {
        printf("\t %d",temp->data);
        temp=temp->next;
    }
}