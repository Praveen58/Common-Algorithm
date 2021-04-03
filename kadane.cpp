#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(a)/sizeof(a[0]);
    int msf=-999,meh=0;
    int start,end;
    for(int i=0;i<n;i++)
    {
        meh+=a[i];
        if(meh<a[i]){
             meh=a[i];
             start=i;
        }
      
        if(msf<meh)
        {
            end=i;
            msf=meh;
        }
            
    }
    cout<<msf<<endl;
    cout<<start<<" "<<end<<endl;
}