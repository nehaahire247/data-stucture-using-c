#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
}*temp,*newnode,*top=0;
int main()
{   int choice;
    char ch;
    printf("\n programe to display stack using linked list");
    printf("\n enter 1 for push");
    printf("\n enter 2 for pop");
    printf("\n enter 3 for peek");
    printf("\n enter 4 for display");
    do{
        printf("\n enter the choice::");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;

        }
       printf("\n do u want to continue \n if yes enter Y \n if no enter N\n->");
       ch=getche();
    }while(ch="Y");
}
void push()
{  int x;
    printf("\n enter the element ::");
    scanf("%d",&x);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;

}
void pop()
{
    temp=top;  //to free the last element
    top=top->link;//to store link of privous element in top//
    printf("\n you have poped the element %d",temp->data);
     free(temp);  //to free the allocated memory//
     
}
void peek()  // to check which is the top element//
{
    printf("%d",top->data);
}
void display()
{
    temp=top;
    printf("\n elements of the list are as following");
    while(temp!=NULL)
    {
        printf("\n  %d",temp->data);
        temp=temp->link;
    }
}