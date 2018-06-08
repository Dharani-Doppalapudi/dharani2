#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,x,y,n,k,p,c,count=0;
cin>>t;
while(t--)
{
cin>>x>>y>>n>>k;
for(int i=0;i<n;++i)
{
cin>>p>>c;
if(c<=k && p>=(x-y))
count=count+1;
}
if(count==0)
{
cout<<"UnLuckyChef\n";
}
else
{
cout<<"luckyChef\n";
}
}
} 
