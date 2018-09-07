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
cout<<"*"<<endl;
for (int i=0; i<a-2; i++){
	cout<<"*";
	for (int j=0; j<i;j++){
		cout << " ";
		}
	cout<<"*";
	cout <<endl;		
	}
for (int j=0; j<a;j++){
	cout << "*";
	}
cout <<endl;		

return 0;
}
