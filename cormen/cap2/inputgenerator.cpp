#include<iostream>
#include<ctime>
#include<fstream>
#include<string>

using namespace std;

int main(void){

	int min, max, size;
	string filename;
	ofstream myfile;
	
	cin>>min>>max>>size;
	cin>>filename;

	cout<<"Range:["<<min<<" - "<<max<<"]."<<endl;
	cout<<"Vector size: "<<size<<endl;
	cout<<"Filename: "<<filename<<endl;

	srand(time(NULL));

	myfile.open(filename);

	max = max-min;
	max++;

	for(int i=0; i<size;i++){
		myfile<<rand()%max + min<<" ";
	}
	myfile.close();

	return 0;
}
