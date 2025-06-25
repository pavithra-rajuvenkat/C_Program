#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void count_of_nodes(struct node * head);
void print_data(struct node * head);
void count_of_nodes(struct node * head)
{
    int count = 0;
    if( head==NULL)
    printf("It is empty linked list\n");
    struct node * ptr =NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf("count = %d\n",count);
    
}

void print_data(struct node * head)
{
    if(head==NULL)
        printf("Linked list is empty\n");
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}



int main() {
    struct node * head;
    head= (struct node *)malloc(sizeof(struct node *));
    head->data=45;
    head->link=NULL;
    //printf("%d",head->data);
    
    struct node * current= (struct node *)malloc(sizeof(struct node *));
    current->data=65;
    head->link=current;
    current->link=NULL;
    
    current=(struct node *)malloc(sizeof(struct node *));
    current->data=75;
    current->link=NULL;
    head->link->link=current;

    count_of_nodes(head);
    print_data(head);
    return 0;
}