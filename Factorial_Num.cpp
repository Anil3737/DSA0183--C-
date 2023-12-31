# include <iostream>
using namespace std;
int main()
{
	cout<<"Factorial Of Number:---------------"<<endl;
	int fact=1,num,i;
	cout<<"Enter Number::";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	cout<<"Factorial Of Number::"<<fact;
}
