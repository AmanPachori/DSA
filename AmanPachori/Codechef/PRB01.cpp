#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    int i;
    if(n==1)
    return false;
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            return false;
        }
        
        return true;
}
int main() {
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       if(prime(a))
       cout<<"yes"<<endl;
       else cout<<"no"<<endl;
   }
}