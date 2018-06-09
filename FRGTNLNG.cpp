int main()
{
int t,n,m,k;
cin>> t;
while(t--)
{
cin>>n>>k;
string a[n];
int flag[n]={0};
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int b=0;b<k;b++)
{
 for(int i=0;i<k;i++)
 {
 cin>>m;
string p[m];
for(int o=0;o<m;o++)
{
cin>>p[o];
}
for(int j=0;j<n;j++)
{
for(i=0;i<m;i++)
{
if(p[i]==a[j])
{
flag[j]=1;
break;
}
}
}
}	
}
for(int i=0;i<n;i++)
{
if(flag[i]==0)
cout<<"NO";
else
cout<<"YES";
}
cout<<"\n";
}
} 
