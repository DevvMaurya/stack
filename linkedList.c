#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void travel(struct node *head)
{
    while(head != NULL)
    {
        printf("%d \t",head->data);
    head = head->next;
    }
    printf("\n");
}

struct node *insertAtFirst(struct node *head)
{
    int data;
    printf("Enter THE data::");
    scanf("%d",&data);
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->next =head;

    return new;    
}

struct node *insertAtEnd(struct node *p)
{
    int data;
    printf("Enter THE data::");
    scanf("%d",&data);
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    p->next = new;
    new->next =NULL;
    p = new;

    return p;
}

struct node *insertAtBw(struct node *head)
{

}

struct node *deleteFirst(struct node *head)
{
    printf("%d is Deleted:\n",head->data);
    head->data = '\0';
    head = head->next;
    return head;
}
void wish_list()
{
    printf("--------------------------\n");
    printf("-1. For Exit\n");
    printf(" 1. Insert at Fisrt\n");
    printf(" 2. Insert at End\n");
    printf(" 3. Travel\n");
    printf(" 4. Delete from First\n");
    printf("--------------------------\n");
}

int main()
{
    int data;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    printf("Enter the data::");
    scanf("%d",&data);
    head->data = data;
    head->next = NULL;    
int wish = 0;int i =0;
wish_list();
do
{
    printf("Enter Your wish:: ");
    scanf("%d",&wish);

    switch(wish)
    {
        case 1:
        head = insertAtFirst(head);
        break;

        case 2:
        p = insertAtEnd(p);
        break;

        case 3:
        travel(head);
        break;

        case 4:
        head = deleteFirst(head);
        break;

        case -1:
        exit(0);

        default:
        printf("INVALID WISH\n");
        wish_list();
        
    }
}while (wish != '\0');

    // printf("%d",p->data);
    

return 0;
}
		
