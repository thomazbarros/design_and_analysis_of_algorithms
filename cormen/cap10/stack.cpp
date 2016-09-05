#include <iostream>
#include <cstdlib>
#include <string>
#include <climits>

#define SIZE 100
using namespace std;

void push (int element, int* stack, int* size);
void pop(int* stack, int* size);
void printStack(int stack[], int size);
void showStack(int stack[], int size);

int main (void){

	/* Stack maximum size = 100. */
	int stack[SIZE];

	/* Counting the number of elements in the stack. */
	int size=0;

	/* This variable receives the commands to be parsed. */
 	string command;
	
	while (1){
		cin>>command;
		/*End of the program. */
		if(command.compare("end")==0)
			return 0;
		
		/*Including an element into the stack.*/
		if(command.compare("add")==0){
			//TODO: I still have to verify if the next input is integer and/or a number
			int input;
			cin>>input;
			push(input, stack, &size);						
		}

		/* Remove an element from stack*/
		if(command.compare("rem")==0)
			pop(stack, &size);
	
		/* Print the stack at that moment. */
		if(command.compare("show")==0)
			printStack(stack, size);
			
	}

	return 0;
}

void printStack(int stack[], int size){
	printf("# Elements of the stack #\n");
	for(int i=0; i<size; i++){
		printf("Position: %d Value: %d\n", i, stack[i]);
	}
}

void showStack(int stack[], int size){
	printf("### Showing Stack ###\n");
	for(int i = size; i<0;i--)
		printf("| %d |\n", stack[i]);
	printf("\n");
}

void push (int element, int* stack, int* size){
	stack[*size]=element;
	*size+=1;
}

void pop(int* stack, int* size){
	if(*size>=1){
		stack[*size-1]=INT_MIN;
		*size-=1;
	}	
}

void printArray(int stack[], int size){
	/*
	  Note to anyone reading this piece of code:
	  I am aware that it is not a valid operation for stacks.
	  I just wrote it out of curiosity.
	*/
	printf("Elements of the array #\n");
	for(int i=0; i<SIZE; i++){
		printf("Position: %d Value: %d\n", i, stack[i]);
	}
}
