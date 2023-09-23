#include<iostream>
using namespace std;

void subsequence(string pro, string unpro, int ind, int size)
{
    if(ind==size)
    {
        cout<<"("<<pro<<")"<<"\n";
    }
    else
    {
    subsequence(pro+unpro[ind],unpro,ind+1,size);
    subsequence(pro,unpro,ind+1,size);
    }
    

}
int main()
{
    string s;
    cin>>s;
    subsequence("",s,0,s.size());
}
/*
output
abc
(abc)
(ab)
(ac)
(a)
(bc)
(b)
(c)
()*/
