#include<iostream>
using namespace std;
int main()
{
	int n=0;
	int sum=0;
	do
	{
		cout<<"Enter the positive numbers"<<endl;
		cin>>n;
		sum=sum+n;
		cout<<sum;
		n++;
	}
	while(n<=5);
	
	int average=sum/5;
	cout<<"Average of numbers is"<<average;
	
	return 0;
}