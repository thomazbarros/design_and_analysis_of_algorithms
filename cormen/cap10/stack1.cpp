#include <iostream>
#include <cstdlib>
#include <cstring>

#define SIZE 100
using namespace std;

void addNumber (int element, int* stack, int* size);
//void addNumber(int** vector, int input, int* quantity);
void printStack(int stack[], int size);
int isANumber(strin)
int main (void){
	//int input;
	int stack[SIZE];
	int size=0;
 	string input;
/*	while (cin>>input){
		addNumber(input, stack, &size);
	}*/
//	printStack(stack, size);
	while (1){
		cin>>input;
		if(input.compare("end"))
			return 0;
		if(input.compare("add")){
			cin>>input;
			char* temp = new char[input.length()+1];
			strcpy (temp, input.c_str());
			
					
		}
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
	for(int=size; i<0;i--)
		printf("| %d |", stack[i]);
	printf("\n");
}

void push (int element, int* stack, int* size){
	stack[*size]=element;
	*size+=1;
}

void pop(int* stack, int* size){
}
