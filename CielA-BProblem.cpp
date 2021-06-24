#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout<<"Enter two numbers:\n";
	cin>>a>>b;
	c=a-b;
	int d=c+1;
	if(d%10==0)
		c=c-1;
	else
		c=c+1;
	cout<<c;
	return 0;
}
