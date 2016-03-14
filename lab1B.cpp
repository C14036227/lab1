#include <iostream>
using namespace std;

int main()
{
	int input;
	cout << "Enter an integer:  ";
	cin >> input;
	while(input!=1){
		cout << input <<" ";
		if(input%2==1)input=input*3+1;
		else if(input%2==0)input=input/2;
		}
	cout << input << endl;
	return 0;
}
