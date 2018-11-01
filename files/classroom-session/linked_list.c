#include <stdio.h>
#include <stdlib.h>

// Define structure (abstract data type) for our nodes
struct Node {
	int data;
	struct Node * next;
};

// Initialize head pointer to NULL
struct Node * head = NULL;

// Insert new node to the end of the linked list
void insert(int data){
	// If linked list is empty
	if(head == NULL){
		head = (struct Node *)malloc(sizeof(struct Node));
		head->data = data;
		head->next = NULL;
	}else{
	// If linked list has nodes
		struct Node * temp = NULL;
		struct Node * new_node = NULL;
		temp = head;
		// Traverse to the last node
		while(temp->next != NULL){
			temp = temp->next;
		}
		// Create a new node
		new_node = (struct Node *)malloc(sizeof(struct Node));
		new_node->data = data;
		new_node->next = NULL;
		// Link it to the last node of the linked list
		temp->next = new_node;
	}
	printf("NODE CREATED\n");
}

// Display all elements of the linked list sequentially
void display(){
	// If linked list is empty
	if(head == NULL){
		printf("LINKED LIST IS EMPTY\n");
	}else{
	// If linked list is not empty
		struct Node * temp;
		temp = head;
		// Traverse until last node
		while(temp != NULL){
			// Display data of each node
			printf("%d\t", temp->data);
			temp = temp->next;
		}
		printf("\n");
	}
}

// Delete node from beginning of linked list
void delBeg(){
	struct Node* temp;
	// If linked list is empty
	if(head == NULL){
		printf("\nLIST IS EMPTY\n");
	}else{
	// Id linked list is not empty
		// Point temp to first node
		temp = head;
		// Point head to second node
		head = head->next;
		// Remove first node(pointed by temp) from memory
		printf("\nNODE DELETED : %d\n", temp->data);
		free(temp);

	}

}

// Delete node from end of linked list
void delRear(){
	struct Node* temp = head;
	struct Node* q;
	// If linked list is empty
	if(temp == NULL){
		printf("\nLIST IS EMPTY\n");
	}else{
	// Id linked list is not empty
		// Traverse to the last node using temp
		while(temp->next != NULL){
			// Always keep a pointer to the second last node
			q = temp;
			temp = temp->next;
		}
		// Point the second last node to NULL
		q->next = NULL;
		// Remove last node from memory
		printf("\nNODE DELETED : %d\n", temp->data);
		free(temp);
	}

}


int main(){

	display();	// LINKED LSIT IS EMPTY
	insert(1);	// NODE CREATED
	display();	// 1
	insert(2);	// NODE CREATED
	display();	// 1 2
	insert(3);	// NODE CREATED
	display();	// 1 2 3

	delRear();	// NODE DELETED : 3
	display();	// 1 2
	delBeg();	// NODE DELETED : 1
	display();	// 2
	delBeg();	// NODE DELETED : 2
	display();	// LINKED LIST IS EMPTY

	return 0;
}