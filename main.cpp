#include <iostream>
using namespace std;

// Prime Number
int main(int argc, char** argv) {

	int n;
	while(n != -1)
	{
		cout<<"\nEnter a test number (Enter '-1' to exit): ";
		cin>>n;	
		
		int status=0;
		if(n>2)
		{
			for(int j=2; j<n; j++)
			{
				if(n%j ==0)
				{
					status=1;
					break;
				}
			}	
			
			if(status==1)
				cout<<"The number is NOT prime"<<endl;
			else
				cout<<"the Number is prime"<<endl;
		}		
		
		else if(n==2)
			cout<<"The number is prime"<<endl;
		else if(n!=-1)
			cout<<"Invalid number!"<<endl;
	}	
		
	return 0;
}
