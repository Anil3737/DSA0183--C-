# include <iostream>
using namespace std;
int main()
{
	int a[100];
	int s,i,sum=0;
	cout<<"Enter Array Size::";
	cin>>s;
	cout<<"Enter Array Elements::"<<endl;
	for(i=0;i<s;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<s;i++)
	{
		sum = sum + a[i];
	}
	cout<<"Sum Of Elements::"<<sum;
}
	
