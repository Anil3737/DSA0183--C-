# include <iostream>
using namespace std;
int main()
{
	int a[100];
	int s,n,i;
	cout<<"Enter Number::";
    cin>>s;
    for(i=0;i<s;i++)
    {
    	cin>>a[i];
	}
	cout<<"Array Elements::"<<endl;
	for(i=0;i<s;i++)
	{
		cout<<" "<<a[i];
	}
	cout<<endl;
	cout<<"Reversed Array Elements::"<<endl;
	for(i=s-1;i>=0;i--)
	{
		cout<<" "<<a[i];
	}
}
