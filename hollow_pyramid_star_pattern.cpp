//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
int a;
// asking for input
cout << "enter the size"<< endl;
cin >> a;
// printing the stars and spaces
for (int j=0; j<a;j++){
		cout << " ";
}
cout<<"*"<<endl;
for (int i=0; i<a-2; i++){
	for (int j=0; j<a-(i+2);j++){
		cout << " ";
		}
	cout<<"*";
	for(int j=0; j<2*(i+1);j++){
		cout<<" ";
		}
	cout<<"*";
	cout <<endl;	
	}	
for (int j=0; j<2*a;j++){
	cout << "*";
	}
return 0;
}
