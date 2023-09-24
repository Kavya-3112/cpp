#include<iostream>
#include<vector>
using namespace std;
pair<int,int>find(vector<int>arr)
{
    int n=arr.size();
    long long sn=(n*(n+1))/2;
    long long sn2=(n*(n+1)*(2*n+1))/6;
    long long s=0;
    long long s1=0;
    for(int i=0;i<n;i++)
    {
        s+=arr[i];
        s1+=arr[i]*arr[i];
        
    }
    long long sum=s-sn;
    long long sum1=(s1-sn2)/sum;
    long long x=(sum+sum1)/2;
    long long y=x-sum;
    return {x,y};

}
int main()
{
    int c;
    cin>>c;
    vector<int>v(c);
    
    for(int i=0;i<c;i++)
    {
        cin>>v[i];
        
    }
    pair<int,int>p=find(v);
        
    cout<<p.first<<endl;
    cout<<p.second;
}
