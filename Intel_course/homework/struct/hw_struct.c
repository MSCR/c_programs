#include <stdio.h>
// Variable definition area
struct person{
	char name[30];
	int age;
	char phone_number[11];
}buddy;

int i;

int main(){

	// Code section	
	printf("Register your personal profile\n");

	printf("Which is your name?\n");
	scanf("%s", buddy.name);
	printf("How old are you?\n");
	scanf("%d", &buddy.age);
	printf("Which is your phone number?\n");
	scanf("%s", buddy.phone_number);

	printf("\n\nName: %s\n", buddy.name);
	printf("Age: %d\n", buddy.age);
	printf("Phone Number: %s\n", buddy.phone_number);	

	return 0;

}
