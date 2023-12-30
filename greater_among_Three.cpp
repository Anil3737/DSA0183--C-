# include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter a Value::";
	cin>>a;
	cout<<"Enter b Value::";
	cin>>b;
	cout<<"Enter c Value::";
	cin>>c;
	if( a>b && a>c)
	{
		cout<<"A is Greater::"<<a<<endl;
	}
	else if( b>c )
	cout<<"B is Greater::"<<b<<endl;
	else
	cout<<"C is Greater::"<<c<<endl;
	
	if( a<b && a<c)
		cout<<"A is Smaller::"<<a<<endl;
	else if( b<c )
	    cout<<"B is Smaller::"<<b<<endl;
	else
    	cout<<"C is Smaller::"<<c<<endl;
}
