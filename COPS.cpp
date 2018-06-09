#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,x,y,z,count=0,min,max,a[100];
cin>>t;
for(int i=0;i<t;i++)
{
cin>>x>>y>>z;
for(int j=0;j<x;j++)
{
cin>>a[j];
}
sort(a,a+x);
min=a[0]-(y*z);
max=a[x-1]+(y*z);
if(min>0)
{
count+=min-1;
}
if(max<100)
{
count+=100-max;
}
for(int j=1;j<x;j++)
{
min=a[j]-(y*z);
max=a[j-1]+(y*z);
if(max<min)
{
count=count+min-max-1;
}
}
cout<<count;
count=0;
}
return 0;
} 
