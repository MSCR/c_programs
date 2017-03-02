#include "list.h"
#define LIST_SIZE 10

// Variable definition area
struct s_tree_node{
	int data;
	struct s_tree_node *right_node;
	struct s_tree_node *left_node;
};

/*
void print_node(struct node *temp){
	printf("Element %d\n", temp->data);
	printf("Address is %p\n", temp);
	printf("Next element is %p\n", temp->next);
	printf("Prev element is %p\n\n", temp->prev);
}
*/
struct node* create_node(int data){
	struct node *temp = NULL;

	temp = (struct node *)malloc(sizeof(struct node));
	temp->right_node = NULL;
	temp->left_node = NULL;
	temp->data = data;
	return temp;
}
/*
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
*/

// Level 3
struct s_tree_node node_2_0 = {4, NULL, NULL};
struct s_tree_node node_2_1 = {1, NULL, NULL};
struct s_tree_node node_2_2 = {7, NULL, NULL};
struct s_tree_node node_2_3 = {6, NULL, NULL};

// Level 2
struct s_tree_node node_1_0 = {3, &node_2_0, &node_2_1};
struct s_tree_node node_1_1 = {11, &node_2_2, &node_2_3};

// Level 3
struct s_tree_node node_tree = {5, &node_1_0, &node_1_1};

void print_data_below_node(struct s_tree_node *ptr_node);
struct s_tree_node * insert_node(struct s_tree_node *tree, int data){

int main(){
	// Variable initialization area
	char i = 0;
	//int elements;
	struct node *ptr_root = &node_tree;

	//printf("How much elements do you want in your list:\n");
	//scanf("%d", &elements);
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

struct s_tree_node * print_data_below_node(struct s_tree_node *tree){
	
	struct s_tree_node current = tree;
	printf("%d\n", tree->data);
	// Print left side
	if(tree->left_node) print_data_below_node(tree->left_node);

	// Print right side
	if(tree->right_node) print_data_below_node(tree->right_node);
}

struct s_tree_node * insert_node(struct s_tree_node *tree, int data){

	struct s_tree_node *temp = tree;

	if (tree != NULL)
		if (temp->data > data)
			
		else

	else
		return create_node(data);

}


