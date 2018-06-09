#include <iostream>
using namespace std;
int main()
{
int t,n,k,count=0,a;
cin>>t;
while(t--)
{
count=0;
cin>>n>>k;
while (n--)
{
cin>>a;
if((a+k)%7 ==  0)
count++;
}
cout<<count;
}
return 0;
}
