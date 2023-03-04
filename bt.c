#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *newnode(int i)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = i;
    n->left = n->right = NULL;
};

void inorder(struct node *head)
{
    if (head == NULL)
    {
        return;
    }
    else
    {
        inorder(head->left);
        printf("%d ", head->data);
        inorder(head->right);
    }
}
struct node *insert(struct node *head, int key)
{
    if (head == NULL)
        return newnode(key);
    if (key < head->data)
    {
        head->left = insert(head->left, key);
    }
    else if (key > head->data)
    {
        head->right = insert(head->right, key);
    }

    return head;
}

int main()
{
    struct node *root = newnode(25);
    // root->left = newnode(9);
    // root->right = newnode(4);
    insert(root, 10);
    insert(root, 8);

    inorder(root);
}