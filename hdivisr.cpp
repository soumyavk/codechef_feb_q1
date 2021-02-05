#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>vi;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0){
            v.push_back(i);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<=10){
            vi.push_back(v[i]);
        }
    }
    sort(vi.rbegin(),vi.rend());
    cout<<vi[0];



    return 0;
}