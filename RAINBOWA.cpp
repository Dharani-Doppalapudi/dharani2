#include <iostream>
using namespace std;
int main() 
{
int t,n,count,a[100];
cin>>t;
for(int i=0;i<t;i++)
{
cin>>n;
count=0;
for(int j=0;j<n;j++)
{
cin>>a[j];
}
if(a[0]==1 && a[((n+1)/2)-1]==7)
{
for(int j=0;j<(n+1)/2;j++)
{
if(a[j]==a[n-1-j] && a[j]>=a[j-1] && a[j]<a[j-1]+2 && a[j]<=7)
count++;
}
}
if(count==((n+1)/2))
cout<<"yes"<<"\n";
else
cout<<"no"<<"\n";
}
return 0;
} 
