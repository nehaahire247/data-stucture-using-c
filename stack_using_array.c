#include<stdio.h>
#include<conio.h>
# define N 5
int stack[N];
int top =-1; 
int main()
{
    int i,m;
    char ch;
    printf("\n enter 1 for push (inserting an element)");
    printf("\n enter 2 for pop (removing an element)");
    printf("\n enter 3 for peek (checking which is the last element)");
    printf("\n enter 4 for to display elements of stack");
    do
    {  printf("\n enter the choice::");
       scanf("%d",&m);
       switch(m)
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
        printf("\n do u want to continue,\n enter y if yes \n enter n if no::");
        ch=getche();
    }while(ch=='y');
}
void push()  //to add the elements in the stack//
{
    int x;
    if(top==N-1)
    printf("\n stack overflow");
    else{
    printf("\n enter which element u want  enter::");
    scanf("%d",&x);
    top++;
    stack[top]=x;}
}
void pop() //to remove the  upper element
{    int item;
    if(top==-1)
    printf("\n stack underflow");
    else{
        item=stack[top];
        top--;
        printf(" ur removed element is %d::",item);
    }
    printf("\n***************************************");
    
}
void display()  // to display  elements of stack//
{   int i;
     printf("\n elements ::");
    for(i=top;i>=0;i--)
    { 
        printf("\t %d",stack[i]);
        
    }
    printf("\n****************************************");
}
void peek() // to check which is the last element//
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else{
        printf("\n your top element is %d",stack[top]);
    }
    printf("\n***********************************************");
}