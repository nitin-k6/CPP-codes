#include <stdio.h>
#include <stdlib.h>
void display();
void insertatfirst();
void inseratloc(int);
void sehead(int);
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

int main()
{
    int n, loc;
    do
    {
        printf("Enter your choice = ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            insertatfirst();
            break;
        case 2:
            printf("Enter loc = ");
            scanf("%d", &loc);
            inseratloc(loc);
            break;
        case 3:

            display();
            break;
        case 4:
            printf("Enter loc = ");
            scanf("%d", &loc);
            delete(loc);
            break;

        default:
            break;
        }
    } while (n != 5);

    return 0;
}

void insertatfirst()
{
    int i;
    printf("Enter value you want to enter = ");
    scanf("%d", &i);
    struct node *new = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        new->data = i;
        new->next = NULL;
    }else{
        new->data = i;
        new->next = head;
    }
    head = new;
}
void inseratloc(int loc)
{
    int k, i;
    printf("Enter value you want to enter = ");
    scanf("%d", &k);
    struct node *new = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    for (i = 0; i < loc - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            printf("Wrong loc\n");
            return;
        }
    }
    new->data = k;
    new->next = temp->next;
    temp->next = new;
}
void display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void delete (int loc)
{
    int i;
    if (head == NULL)
    {
        printf("Underflow\n");
        return;
    }
    struct node *temp = head;
    for (i = 0; i < loc-1; i++)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
}