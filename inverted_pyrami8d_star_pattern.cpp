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
for (int i=0; i<a; i++){
	for (int j=0; j<=i;j++){
		cout << " ";
		}
	for(int j=0; j<=2*a-2*(i+1);j++){
		cout<<"*";
		}
cout <<endl;		
}
return 0;
}
