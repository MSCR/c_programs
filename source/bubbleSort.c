#include <stdio.h>

enum {FALSE, TRUE};

void bubbleSort(long k[], int n);
void printList(long k[], int n);

void main(void){

	long k[] = {50, 20, 40, 80, 30};
	int e = sizeof(k)/sizeof(long);

	printList(k, e);

	bubbleSort(k, e);

	printf("Sorted list using Bubble Sort algorithm\n");
	printList(k, e);

	return;
}

void printList(long k[], int n){
	int i;

	printf("List of %d elements: ", n);
	for (i = 0; i < n; ++i!=n ? printf(", "):printf("\n"))
		printf("%ld", k[i]);
}

void bubbleSort(long a[], int n){
	int sw = TRUE;
	int pass, j;

	for(pass = 0; (pass < n-1) && sw; pass++){
		sw = FALSE;
		for(j = 0;j < n-pass; j++)
			if (a[j] > a[j+1])
			{
				long aux;
				sw = TRUE;
				aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux;
			}
	}

	return;
}

void bubbleSort2(long a[], int n){
	int i,j;
	int index;

	i = n-1;

	while(i>0){
		index = 0;

		for(j = 0; j < i; j++){
			if (a[j+1] < a[j]){
				long aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux;
				index = j;
			}
		}
		i = index;
	}
}
