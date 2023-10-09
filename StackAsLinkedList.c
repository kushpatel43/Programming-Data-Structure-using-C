#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void push(int data)
{
    if(head==NULL)
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=NULL;
        head=temp;
        printf("\nFirst node %d added to stack :)\n",temp->data);
    }
    else
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=head;
        head=temp;
        printf("\nA new node %d added to stack :)\n",temp->data);
    }
}

void pop()
{
    if(head==NULL)
    {
        printf("\nCan't POP from a empty Stack.\n");
    }
    else
    {
        struct node *p=head;
        head=head->next;
        printf("poped out TOS %d ;\n Now TOS is %d \n",p->data,head->data);
        free(p);
    }

}

void peek()
{
    if (head==NULL)
    {
        printf("\nStack is Empty :(\n");
    }
    else
    {
        printf("\nTop of the stack is: %d \n",head->data);
    }
    
}

void display()
{
    if (head==NULL)
    {
        printf("\nCan't Display :( \n Stack is Empty; Push a node to Stack by push function.\n");
    }
    else
    {
    struct node *p=head;
    printf("\nAll the nodes present in stack is/are:\n");
    while (p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
    printf("\n");
    }
}

int main()
{
    peek();
    display();
    pop();

    printf("\nNow pushing 3 elements:- 1,9&5\n");
    push(1);
    push(9);
    push(5);
    peek();
    display();

    printf("\nNow Poping out an element:\n");
    pop();
    peek();
    display();
    
    
    
    return 0;
}
