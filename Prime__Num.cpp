# include <iostream>
using namespace std;
int main()
{
	cout<<"Prime Number----------"<<endl;
	int num,i,count=0;
	cout<<"Enter Number::";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		if(num % i == 0)
		{
			count++;
		}
	}
	if(count == 2 && num != 1)
		{
			cout<<"Prime Number::"<<num<<endl;
		}
		else
		{
			cout<<"NOT Prime::"<<num<<endl;
		}
	
	
}

