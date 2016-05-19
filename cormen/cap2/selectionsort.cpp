#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<int> numbers);
vector<int> selectionSort(vector<int> numbers);
int main(void){

	vector<int>numbers;
	int input;
	while(cin>>input){
		numbers.push_back(input);
	}
	printVector(numbers);
	printVector(selectionSort(numbers));
	return 0;
}

vector<int> selectionSort(vector<int> numbers){
	int minpos;

	for(int i=0; i<numbers.size();i++){
		minpos=i;
		for (int j=i+1;j<numbers.size();j++){
			if(numbers[j]<numbers[minpos])
				minpos=j;	
		}
		if(i!=minpos){
			int temp;
			temp=numbers[i];
			numbers[i]=numbers[minpos];
			numbers[minpos]=temp;
		}
	}

	return numbers;
}

void printVector(vector<int> numbers){
	for(int i=0;i<numbers.size();i++){
		cout<<numbers[i]<<" ";		
	}
	cout<<endl;
}

