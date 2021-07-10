#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int coeff;
	int pow;
	struct Node* next;
};

void new_Polynomial(struct Node** p)
{
	int coeff, exp;
	char ch = 'Y';
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	*p = temp;
	do{
		printf("\n Enter Coefficient: ");
		scanf("%d", &coeff);
		printf("\n Enter Exponent: ");
		scanf("%d", &exp);
		temp->coeff = coeff;
		temp->pow = exp;
		temp-> next = NULL;
		printf("\n Are there any more terms? Y/N: ");
		ch = getche();
		if(ch == 'Y')
		{
			temp->next = (struct Node*)malloc(sizeof(struct Node));
			temp = temp->next;
			temp->next = NULL;
		}
	}while(ch == 'Y');
}

void display(struct Node* p)
{
	printf("\nEntered Polynomial is: ");
	while(p != NULL)
	{
		printf("%dX^%d", p->coeff, p->pow);
		p = p->next;
		if(p != NULL)
			printf("+");
	}
}

void add(struct Node** result, struct Node* first, struct Node* second)
{
 	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
 	temp->next = NULL;
 	*result = temp;
 	while(first && second)
 	{
 		if(first->pow > second->pow)
 		{
 			temp->coeff = first->coeff;
 			temp->pow = first->pow;
 			first = first->next;
 		}
 		else if(first->pow < second->pow)
 		{
 			temp->coeff = second->coeff;
 			temp->pow = second->pow;
 			second = second->next;
 		}
 		else
 		{
 			temp->coeff = first->coeff + second->coeff;
 			temp->pow = first->pow;
 			first = first->next;
 			second = second->next;
 		}

 		if(first && second)
 		{
 			temp->next = (struct Node*)malloc(sizeof(struct Node));
 			temp = temp->next;
 			temp->next = NULL;
 		}
 	}
 	while(first || second)
 	{
 		temp->next = (struct Node*)malloc(sizeof(struct Node));
 		temp = temp->next;
 		temp->next = NULL;

 		if(first)
 		{
 			temp->coeff = first->coeff;
 			temp->pow = first->pow;
 			first = first->next;
 		}

 		else if(second)
 		{
 			temp->coeff = second->coeff;
 			temp->pow = second->pow;
 			second = second->next;
 		}
 	}
}

int main()
{

	struct Node* first = NULL;
	struct Node* second = NULL;
	struct Node* result = NULL;

	printf("\nEnter the corresponding data:-\n");
	printf("\nFirst polynomial:\n");
	new_Polynomial(&first);
	display(first);
	printf("\nSecond polynomial:\n");
	new_Polynomial(&second);
	display(second);
	add(&result, first, second);
	display(result);
	return 0;
}
