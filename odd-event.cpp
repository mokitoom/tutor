#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int number;
	cout<<"enter number: ";
	cin>>number;
	if(number%2==1)//คี่
	{
		cout<<"เลข "<<number<<" คือเลขคี่";
	}
	if(number%2==0)//คู่
	{
		cout<<"เลข "<<number<<" คือเลขคู่";
	}
}