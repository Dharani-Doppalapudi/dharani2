#include<string>
#include<iostream>
using namespace std;
int main()
{
int t,n,count;
string s;
cin>>t;
for(int i=0;i<t;i++)
{
cin>>n;
cin>>s;
count=0;
for(int j=0;j<n;j++)
{
if(s[j] =='1')
{
count++;
}
}
cout <<(count*(count+1)/2);  
}
return 0;	
}
