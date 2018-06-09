#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int t,n,i,count=0,arr[100],max=101,min=0;
cin>>t;
while(t!=0)
{
cin>>n;
for(i=0;i<n;i++)
cin>>arr[i];
while(max!=min)
{
sort(arr,arr+n);
min=arr[0];
max=arr[n-1];
count=count+max-min;
for(i=0;i<n-1;i++)
{
arr[i]=arr[i]+(max-min);
}
}
cout<<count<<"\n";
t--;
}
return 0;
} 
