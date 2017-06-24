#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int num,result=1;
	cout<<"Enter number: "; cin>>num;
	for(int i=num; i>=1; i--)
	{
		result = result*i;
		if(i>1){cout<<i<<"*";}
		else{cout<<i<<"="<<result;}
	}
}
