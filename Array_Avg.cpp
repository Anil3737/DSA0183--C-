# include <iostream>
using namespace std;
int main()
{
	int a[100],i,s,sum=0;
	float avg;
	cout<<"Enter Number::";
	cin>>s;
	cout<<"Enter Array Elements::";
	for(i=0;i<s;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<s;i++)
	{
		sum = sum + a[i];
	}
	cout<<"Sum Of Array Elements::"<<sum<<endl;
	avg = sum / s;
	cout<<"Average Of Array Ele::"<<avg;
}
