#include <iostream>
#include <cstdlib>

using namespace std;

void push (int ** stack, int val);
void pop (int ** stack);
int resize (int ** stack, size);
int main(void){
	int * stack;
	int add_capacity = 10, size = 0;
	int input;

	stack = (int *) malloc (add_capacity * sizeof(int));

	if (!stack)
		return 1;

	while (cin>>input){
		cout<<input<<endl;
		if(size%add_capacity == 0){
			size = resize(&stack, size);
		}
	}
	cout<<endl;	 
	return 0;
}



