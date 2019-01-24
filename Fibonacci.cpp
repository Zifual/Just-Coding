#include <iostream>
using namespace std;

int fibonacci(int a);
int main(int argc, char** argv) {
	
	int n;
	while(n!=-1)
	{
		int a=0,b=1,c;
	
		cout<<"Term: ";
		cin>>n;
		cout<<endl;
		
		if(n==0)
			cout<<"0"<<endl;
		if(n==1)
			cout<<"0 1"<<endl;
		if(n>1)
		{	
			cout<<"0 1";
			for(int i=1; i<n; i++)		// Beginning of Fibonacci calculation
			{
				c=a+b;
				a=b;
				b=c;
				
			cout<<" "<<c;	
			}
			cout<<endl;	
		}
		
		cout<<"Fibonacci("<<n<<")= "<<fibonacci(n)<<endl<<endl;		// Call for recursive Fibonacci function
	}
	return 0;
}

int fibonacci(int a)	// Recursive Fibonacci function
{	
	if(a==0)
		return 0;
	else if(a==1)
		return 1;
	else
	return fibonacci(a-1)+fibonacci(a-2);	
}
