#include<iostream>
#include<vector>

using namespace std;

vector<int> sort(vector<int> numbers);
int main(void){
	int input;
	vector<int> numbers;
	while(cin>>input){
		numbers.push_back(input);	
	}

	cout<<"Input numbers: ";
	for(int i =0; i<numbers.size();i++){
		cout<<numbers[i]<<" ";
	}
	cout<<endl;
	numbers = sort(numbers);		
	
	cout<<"Output numbers:";
	for(int i =0; i<numbers.size();i++){
		cout<<" "<< numbers[i];
	}
	cout<<endl;
	return 0;
}

vector<int> sort(vector<int> numbers){
	for (int i=1; i<numbers.size();i++){
		int temp = numbers[i];
		int j = i-1;
		while ((j>=0)&&(numbers[j]>temp)){
			numbers[j+1]=numbers[j];
		j--;
		}
		numbers[j+1]=temp; 
	}
	return numbers;
}
