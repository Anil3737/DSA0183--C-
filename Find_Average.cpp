# include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    float avg;
    cout<<"Enter a Value::";
    cin>>a;
    cout<<"Enter b Value::";
    cin>>b;
    cout<<"Enter c Value::";
    cin>>c;
    int t_s;
    t_s = a+b+c;
    avg = t_s/3;
    cout<<"Sum:: "<<t_s<<endl;
    cout<<"Average:: "<<avg;
}
