# include <iostream>
using namespace std;
int main()
{
	int year,i,rem,p_y,n_y;
	cout<<"Enter Year::";
	cin>>year;
    rem = year % 4;
    if(rem == 0)
    cout<<"Leap year::"<<year<<endl;
    else
    {
    	p_y = year - rem;
    	n_y = year + (4-rem);
    	cout<<"Previous year::"<<p_y<<endl;
	    cout<<"Next Year::"<<n_y<<endl;
    }
	
}
