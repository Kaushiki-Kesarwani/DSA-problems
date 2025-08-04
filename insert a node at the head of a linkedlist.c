#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct SinglyLinkedListNode
{
    int data;
    struct SinglyLinkedListNode *next;
};

// Function to insert a node at the head of the list
struct SinglyLinkedListNode *insertNodeAtHead(struct SinglyLinkedListNode *llist, int data)
{
    // Create a new node
    struct SinglyLinkedListNode *newnode = (struct SinglyLinkedListNode *)malloc(sizeof(struct SinglyLinkedListNode));
    newnode->data = data;
    newnode->next = llist; // Point new node to current head
    return newnode;        // Return new head
}

// Function to print the linked list
void printList(struct SinglyLinkedListNode *head)
{
    struct SinglyLinkedListNode *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Main function
int main()
{
    struct SinglyLinkedListNode *llist = NULL; // Initialize list
    int n, data;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        llist = insertNodeAtHead(llist, data);
    }

    printf("The linked list is: ");
    printList(llist);

    return 0;
}
