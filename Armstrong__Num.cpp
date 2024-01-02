# include <iostream>
using namespace std;
int main()
{
	int num,rem=0,sum=0,cub=0,temp;
	cout<<"Enter Number::";
	cin>>num;
    temp = num;
	while(num != 0)
	{
		rem = num % 10;
		cub = (rem*rem*rem);
		sum = sum + cub;
		num = num / 10;
	}
	if(sum == temp)
	{
		cout<<"Armstrong number::";
	}
	else
	cout<<" NOT Armstrong number::";
}
