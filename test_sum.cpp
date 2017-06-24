//โปรแกรมบวกเลข 21-06-2017
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int sum=0, begin, finish, step;
	cout<<"Enter Begin : "; cin>>begin;
	cout<<"Enter Finish : "; cin>>finish;
	cout<<"Enter Step : "; cin>>step;
	for(int i=begin; i<(begin+step); i+=step)
	{
		cout<<i;
		for(i=(begin+step); i<=finish; i+=step){cout<<"+"<<i; sum+=i;}
		cout<<" = "<<sum+begin;
	}
}