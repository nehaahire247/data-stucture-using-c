#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
} *head1,*head2,*temp1,*temp2,*fnode1,*fnode2;
int main()
{
     create_list_1();
     display_list();
     //create_list_2();
     //display_list2();
    // addpoly();
}
 void create_list_1()
 {   int n;
     head1=(struct node *)malloc(sizeof(struct node));
     printf("enter the no of elements in first list::");
     scanf("%d",&n);
     printf("enter the first element::");
     scanf("%d",&head1->data);
     head1->next=NULL;
     temp1=head1;
     for(int i=2;i<=n;i++)
     {
         fnode1=(struct node *)malloc(sizeof(struct node));
         printf("\nenter the %d element::",i);
         scanf("%d",&fnode1->data);
         fnode1->next=NULL;
         temp1->next=fnode1; //for linking current element with privious element//
         temp1=temp1->next; // storing temp->next in temp//
     }

 }
 void display_list()
 {
     temp1=head1;
     while(temp1->next!=NULL)
     { 
         printf("\t %d",temp1->data);
         temp1=temp1->next;
     }
 }

