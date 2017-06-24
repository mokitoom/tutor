#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int scor;
	cout<<"Enter Scor: "; cin>>scor;
	if(scor >= 80){cout<<"GPA is 4";}
	if(scor >= 75 && scor < 80){cout<<"GPA is 3.5";}
	if(scor >= 70 && scor < 75){cout<<"GPA is 3";}
	if(scor >= 65 && scor < 70){cout<<"GPA is 2.5";}
	if(scor >= 60 && scor < 65){cout<<"GPA is 2";}
	if(scor >= 55 && scor < 60){cout<<"GPA is 1.5";}
	if(scor >= 50 && scor < 55){cout<<"GPA is 1";}
	if(scor < 50){cout<<"GPA is 0";}
	
}
