# include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter First Number::";
	cin>>num1;
	cout<<"Enter Second Number::";
	cin>>num2;
	num1 = (num1 > 0) ? num1 : -num1;
	num2 = (num2 > 0) ? num2 : -num2;
	while(num1 != num2)
	{
		if(num1 > num2)
		num1 -= num2;
		else
		num2 -= num1;
	}
	cout<<"GCD ::"<<num1;
}
