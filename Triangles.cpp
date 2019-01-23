#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
// Star Triangle

	int n;
	cout<<"Determine edge length for an isosceles triangle: ";
	cin>>n;
	cout<<"\n";
	
	for(int i=n; i>0; i--)
	{
		for(int j=0; j<i; j++)
			cout<<"* ";
		cout<<endl;
	}
	
// Star Triangle inverse

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<i; j++)
			cout<<"  ";
		for(int k=0; k<n-i; k++)
			cout<<"* ";
		cout<<endl;	
	}
	
//	for(int i=n; i>0; i--)
//	{
//		for(int j=n-i; j>0; j--)
//			cout<<"  ";
//		for(int k=0; k<i; k++)
//			cout<<"* ";
//		cout<<endl;
//		}

// Star Triangle upside down	

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
			cout<<"* ";
		cout<<endl;
	}
	
// Inverse

	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<n-i; j++)
			cout<<"  ";
		for(int k=0; k<i; k++)
			cout<<"* ";
		cout<<endl;
	}
	
//	for(int i=0; i<n; i++)
//	{
//		for(int j=n-1; j>i; j--)
//			cout<<"  ";
//		for(int k=0; k<=i; k++)
//			cout<<"* ";
//		cout<<endl;
//	}

	return 0;
}
