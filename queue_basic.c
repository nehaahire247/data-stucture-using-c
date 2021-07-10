#include<stdio.h>
# define N 5
int que [N];
int front= -1;
int rear= -1;
int main()
{  int choice;
   char ch; 
printf("\n enter the following operation for the desired operation");
printf("\n 1. adding the element ");
printf("\n 2. deleting the element ");
printf("\n 3. peek(to check whick is the first/top element");
printf("\n 4. display");
    do 
    {
        printf("\n enter the choice::");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            enque();
            break;
            case 2:
            deque ();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
        }
        printf("\n do u want to continue \n if yes enter Y \n if no enter N\n->>");
        ch=getche();

    }while(ch=='y');  
}
void enque()
{
    int x;
    printf("\n enter the element::");
    scanf("%d",&x);
  //  if(rear==N-1);
  // { printf("\n u cannot enter the data queue is full");}
        if(front==-1 && rear==-1)
        {
            front=rear=0;
            que[rear]=x;
        }
        else{
            rear++;
            que[rear]=x;
        }
    
}
void deque()  //to delete the front element deque is used//
{   if(front==-1 && rear==-1)  //when both are -1 the queue is empty//
    printf("\n ur queue is empty cannot delete the element");
        if (front==rear) //when both are equal only 1 element is present there//
        front=rear=-1;
        else{
            printf("your deleted element is %d",que[front]);
            front++;
        }

}
void display()  // to display all the elements//
{    printf("\n elements are as folllowing");
    for(int i=front;i<=rear;i++)
    {   
        printf("\n \t %d",que[i]);
    }
    
}
void peek() // to check the front element//
{
    printf("%d=",que[front]);
}