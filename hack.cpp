#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ele=a[n-1],ind=n-2;
    while(ind>=0 && a[ind]%ele==0) ind--;
    if(ind<0)
        cout<<"0"<<endl;
    else
        cout<<ind+1<<endl;
    return 0;
}