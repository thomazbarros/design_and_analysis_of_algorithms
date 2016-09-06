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
	int top=0;

	/* This variable receives the commands to be parsed. */
 	string command;
	
	while (1){
		cin>>command;
		/*End of the program. */
		if(command.compare("end")==0)
			return 0;
		
		/*Including an element onto the stack.*/
		if(command.compare("add")==0){
			//TODO: I still have to verify if the next input is integer and/or a number
			int input;
			cin>>input;
			push(input, stack, &top);						
		}

		/* Remove an element from stack*/
		if(command.compare("rem")==0)
			pop(stack, &top);
	
		/* Print the stack at that moment. */
		if(command.compare("show")==0)
			printStack(stack, top);
			
	}

	return 0;
}

void printStack(int stack[], int top){
	printf("# Elements of the stack #\n");
	for(int i=0; i<top; i++){
		printf("Position: %d Value: %d\n", i, stack[i]);
	}
}

void showStack(int stack[], int top){
	printf("### Showing Stack ###\n");
	for(int i = top; i<0;i--)
		printf("| %d |\n", stack[i]);
	printf("\n");
}

void push (int element, int* stack, int* top){
	if(*top<100){
		stack[*top]=element;
		*top+=1;
	}
}

void pop(int* stack, int* top){
	if(*top > 0){
		stack[*top-1]=INT_MIN;
		*top-=1;
	}	
}

void printArray(int stack[], int top){
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
