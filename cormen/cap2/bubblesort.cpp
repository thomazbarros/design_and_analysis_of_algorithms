#include<iostream>
#include<vector>

using namespace std;
void print_vector(vector<int>numbers);
vector<int> my_sort(vector<int> numbers);
vector<int> swap(vector<int> numbers, int i, int j);

int main(void){
	vector<int> numbers;
	int temp;

	while(cin>>temp){
		numbers.push_back(temp);
	}
	cout<<"Dados recebidos: ";
	print_vector(numbers);
	numbers=my_sort(numbers);
	print_vector(numbers);
	return 0;
}

vector<int> my_sort(vector<int> numbers){
	for(int i=0;i<numbers.size(); i++){
		for(int j=0; j<numbers.size(); j++){
			if(numbers[j]<numbers[j-1])
				numbers=swap(numbers, j, j-1);
		}
	}
	return numbers;
}

vector<int> swap(vector<int> numbers, int i, int j){
	int temp = numbers[i];
	numbers[i]=numbers[j];
	numbers[j]=temp;
	return numbers;
}

void print_vector(vector<int>numbers){
	for(int i =0;i<numbers.size();i++)
		cout<<numbers[i]<<" ";
	cout<<endl;
}
