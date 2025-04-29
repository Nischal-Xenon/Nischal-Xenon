#include <iostream>
using namespace std;
bool check(int num)
{
	int n=num-1;
	
	while(n!=1)
	{
		if(num % n==0)
			return true;
		n--;
	}
	return false;
}
int main()
{
	int num;
	cout<<"Enter a positive number:";
	cin>>num;
	if( num>1 )
	{
		if(check(num))
			cout<<"Number is composite";
		else
			cout<<"Number is prime";
	}
	else
		cout<<"Number is neither composite nor prime";
	return 0;
}
