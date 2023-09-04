#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x,y,z;

    for(int i=0; i<n;i++)
    {
        cin>>x;
        cin>>y;
        cin>>z;
     if(x+y<=z&& x<=z)
     {
        cout<<2<<endl;
     }
     else if(x+y>z&& x<=z){
         cout<<1<<endl;
     }
     else
     {
         cout<<0<<endl;
     }
    }





    return 0;

}
