# include <iostream>
using namespace std;
int main()
{
	int num,rem,sum=0;
	cout<<"SUM OF DIGITS---------"<<endl;
	cout<<"Enter Number::";
	cin>>num;
	while(num != 0)
	{
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
		
	}
	cout<<"Sum Of Digits::"<<sum;
}
