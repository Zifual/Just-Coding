#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int a[100];
	int x,counter,max=0;
	
	while(x!=-1)
	{
		cout<<counter+1<<". term: ";
		cin>>x;
		a[counter]=x;
		counter++;
	}
	cout<<endl;
	for(int i=0; i<counter-1; i++)		// Find the greatest number in the array
	{
		cout<<a[i]<<" ";
		if(max<a[i])
			max=a[i];
	}
	cout<<"\nThe greatest number in the array is "<<max<<endl;
	return 0;
}


