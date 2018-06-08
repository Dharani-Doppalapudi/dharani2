#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int t,n,c,a[40],sum=0;
cin>>t;
while(t--)
{
cin>>n>>c;
for(int i=0;i<n;i++)
{
cin>>a[i];
sum=sum+a[i];
}
if(sum<=c)
cout<<"Yes\n";
else
cout<<"No";	
}
return 0;
} 
