#include<iostream>

using namespace std;
int main()
{
   int i, arr[10], large, slarge,n;
   cout<<"Enter Number::";
   cin>>n;
   cout<<"Enter Array Elements: ";
   for(i=0; i<n; i++)
      cin>>arr[i];
   large = arr[0];
   for(i=0; i<n; i++)
   {
      if(large<arr[i])
         large = arr[i];
   }
   slarge = arr[0];
   for(i=0; i<n; i++)
   {
      if(slarge<arr[i])
      {
         if(arr[i]!=large)
            slarge = arr[i];
      }
   }
   cout<<"\nSecond Largest Element = "<<slarge;
   cout<<endl;
   return 0;
}
