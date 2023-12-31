# include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a Number::";
	cin>>num;
	if(num % 3 == 0)
	{
		cout<<num  <<" = Divisible By 3";
	}
	else
	{
		cout<< num  <<" = Not Divisible By 3";
	}
}
