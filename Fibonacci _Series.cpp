# include <iostream>
using namespace std;
int main()
{
	cout<<"Fibonacci Series-----------"<<endl;
	int num,i,a=0,b=1,temp;
	cout<<"Enter Number::";
	cin>>num;
	cout<<" "<<a<<endl;
	for(i=3; i<=num;i++)
	{
    	a = b;
	    b = temp;
	    temp = a + b;
	    cout<<" "<<temp<<endl;
	}
	
}
