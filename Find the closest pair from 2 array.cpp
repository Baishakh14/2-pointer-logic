#include<bits/stdc++.h>
using namespace std;
void solve (int a[],int sa,int b[],int sb,int t)  /// a first and b is 2nd array
{
   int i = 0; ///for 1st array pointer
   int j = sb-1;
   int min = INT_MAX;
   int ind1,ind2; ///to hold two number from those array by index number
   while(i<sa && j>=0)
   {
    int s = a[i]+b[j];
    int ba = abs(s-t);
    if(ba<min)
    {
        min = ba;
        ind1 = a[i];
        ind2 = b[j];
    }
    if(s>t) j--;
    else i++;
   }
   cout<<"the pair is :";
   cout<<"("<<ind1<<","<<ind2<<") = "<<"minimum diference is from target "<<t<<" is :"<<min<<endl;
}
int main()
{
int n; ///first array size;
cin>>n;
int ab[n]; ///first arry
for(int i = 0;i<n;i++)
{
    cin>>ab[i];
}
sort(ab,ab+n);
int m; ///2nd array size;
cin>>m;
int ba[m]; ///2nd arry
for(int i = 0;i<m;i++)
{
    cin>>ba[i];
}
sort(ba,ba+m);
int t; ///target element to find which two is number is closest to x from 2 array?
cin>>t;
solve(ab,n,ba,m,t);
    return 0;
}
