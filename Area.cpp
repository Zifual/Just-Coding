#include <iostream>
using namespace std;

float square(float a)
{
	return a*a;
}

float rect(float a, float b)
{
	return a*b;
}

double circle(float r)
{
	return 3.14*r*r;
}

int main(int argc, char** argv) {
	char choice;
	float a,b;
	
	cout<<"Which shape do you want to calculate area of? \nSquare=s \nRectangular=r \nCircle=c"<<endl;
	cin>>choice;
	if(choice=='s')
	{
		cout<<"Define edge length for a square: ";
		cin>>a;
		cout<<"Area="<<square(a)<<endl;
	}
	else if(choice=='r')
	{
		cout<<"Define TWO edge lengthes for a rectangular:"<<endl;
		cin>>a>>b;
		cout<<"Area="<<rect(a,b)<<endl;
	}
	else if(choice=='c')
	{
		cout<<"Define radius length for a circle: ";
		cin>>a;
		cout<<"Area="<<circle(a)<<endl;
	}
	
	return 0;
}

