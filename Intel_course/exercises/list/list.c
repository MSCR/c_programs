#include "list.h"
#define LIST_SIZE 10

// Variable definition area
struct node{
	int data;
	struct node *next;
	struct node *prev;
};

void print_node(struct node *temp){
	printf("Element %d\n", temp->data);
	printf("Address is %p\n", temp);
	printf("Next element is %p\n", temp->next);
	printf("Prev element is %p\n\n", temp->prev);
}

struct node* create_node(int data){
	struct node *temp = NULL;

	temp = (struct node *)malloc(sizeof(struct node));
	temp->next = NULL;
	temp->prev = NULL;
	temp->data = data;
	return temp;
}

void print_list(struct node *head){

	printf("\nThis is your list:\n");
	while(head){
		print_node(head);
		head = head->next;
	}

}

struct node* n_insert(struct node *head, int data){

	struct node *bkp = head;

	// head is the first elemnt?
	if (head){
		// If not, go thru the list
		while(head->next)
			head = head->next;
		head->next = create_node(data);
		(head->next)->prev = head;
		return bkp;
	}else{ // if yes, create it and pass the pointer
		return create_node(data);
	}

}

struct node* n_remove(struct node *head, int data){
	/* 
	This function remove an element based on the
	the first occurrence of the data given a list 
	*/
	struct node *last, *current;
	last = current = head;

	if (!head) return head;

	if (head->data == data){
		head = current->next;
		free(current);
		return head;
	}
	current = current->next;

	while(current){
		if(current->data == data){
			last->next = current->next;
			free(current);
			return head;
		}
		last = current;
		current =current->next;
	}
	printf("ERROR: node not fount");
	return head;

}

struct node* n_reverse(struct node *head){
	/*
	This function reverse the order of a given list
	*/
	
	struct node* prev = NULL;
	struct node* next;

	// Check if the list is not empty
	if (!head) return NULL;

	while (head){
		next = head->next;
		head->next = prev;
		prev = head;
		head = next;
	}
	
	print_list(prev);
	return prev;
}

int main(){
	// Variable initialization area
	char i = 0;
	int elements;
	struct node *ptr_node_h = NULL;

	//printf("How much elements do you want in your list:\n");
	//scanf("%d", &elements);
	elements = 5;
	// Code section	

	// Create list
	for (i = 0; i < elements; i++)
		ptr_node_h = n_insert(ptr_node_h, i);

	// Print list
	print_list(ptr_node_h);

	//ptr_node_h = n_remove(ptr_node_h, 5);

	//print_list(ptr_node_h);

	// Reverse list
	//ptr_node_h = n_reverse(ptr_node_h);

	return 0;
}
