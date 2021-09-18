// Program to split a circular linked list
// into two halves
#include <bits/stdc++.h>
using namespace std;

/* structure for a node */
class Node
{
	public:
	int data;
	Node *next;
};

/* Function to split a list (starting with head)
into two lists. head1_ref and head2_ref are
references to head nodes of the two resultant
linked lists */
void splitList(Node *head, Node **head1_ref,
						Node **head2_ref)
{
    head1_ref=&head;
    Node* slow=head;
    Node* fast=head;
    
    while(fast!=head && fast->next!=head){
        slow=slow->next;
        fast=fast->next->next;
    }

    if(fast->next==head){
        fast=fast->next;
    }

    head2_ref=&slow->next;
    fast->next=slow->next;
    slow->next=head;
}

/* UTILITY FUNCTIONS */
/* Function to insert a node at
the beginning of a Circular linked list */
void push(Node **head_ref, int data)
{
	Node *ptr1 = new Node();
	Node *temp = *head_ref;
	ptr1->data = data;
	ptr1->next = *head_ref;
		
	/* If linked list is not NULL then
	set the next of last node */
	if(*head_ref != NULL)
	{
		while(temp->next != *head_ref)
		temp = temp->next;	
		temp->next = ptr1;
	}
	else
		ptr1->next = ptr1; /*For the first node */
	
	*head_ref = ptr1;
}

/* Function to print nodes in
a given Circular linked list */
void printList(Node *head)
{
	Node *temp = head;
	if(head != NULL)
	{
		cout << endl;
		do {
		cout << temp->data << " ";
		temp = temp->next;
		} while(temp != head);
	}
}

// Driver Code
int main()
{
	int list_size, i;
		
	/* Initialize lists as empty */
	Node *head = NULL;
	Node *head1 = NULL;
	Node *head2 = NULL;
	
	/* Created linked list will be 12->56->2->11 */
	push(&head, 12);
	push(&head, 56);
	push(&head, 2);
	push(&head, 11);
	
	cout << "Original Circular Linked List";
	printList(head);	
	
	/* Split the list */
	splitList(head, &head1, &head2);
	
	cout << "\nFirst Circular Linked List";
	printList(head1);
	
	cout << "\nSecond Circular Linked List";
	printList(head2);
	return 0;
}

// This code is contributed by rathbhupendra
