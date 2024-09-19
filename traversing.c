#include<stdio.h>
struct node *head;
struct node
{
int value;
struct node *next;
};
void printLinkedList()
{
struct node *p;
p = head;
while (p != NULL)
{
printf("%d", p->value);
p = p->next;
}
}
struct node takeLinkedListInput()
{
//int a;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;
// Allocate memory
one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));
// Assign value values
//a = 6;
one->value = 1;
two->value = 2;
three->value = 3;
// Connect nodes
one->next = two;
two->next = three;
three->next = NULL;
// printing node-value
head = one;
}
void main()
{
takeLinkedListInput();
printLinkedList();

}
