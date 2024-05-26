#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
   int t;
   cin>>t;
   for(int i = 0;i<n;i++)
   {
    unordered_set<int>st;
    for(int j = i+1;j<n;j++)
    {
        int s = -((a[i]+a[j])-t);
        if(st.find(s) != st.end())
        {
            printf("%d %d %d\n",a[i],a[j],s);
        }
        else st.insert(a[j]);
    }
   }
    return 0;
}
