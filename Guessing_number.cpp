#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
	
	string choice="yes";
	while(choice=="yes")	
	{
		srand(time(NULL));
		int n= rand()%100 + 1;
		int guess;
		
		while(guess!=-1)
		{
			cout<<"Guess the Number (If you give up, enter '-1'): ";
			cin>>guess;
			if(guess==n)
			{
				cout<<"\nYOU HIT IT! \nIt is "<<n<<endl;
				break;
			}
			if(guess>n)
			{
				cout<<"Not so high"<<endl;
			}
			if(guess<n)
			{
				cout<<"Think Big"<<endl;
			}
		}
		if(guess==-1)
			cout<<"\nYou've Given Up! The number is "<<n<<endl;
		cout<<"\nDo you want to play again (yes/no): ";
		cin>>choice;
	}
	return 0;
}
