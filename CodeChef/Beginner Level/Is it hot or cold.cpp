#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int t;
    for(int i=0; i<n;i++)
    {
        cin>>t;
        if(t>20)
        {
            cout<<"HOT"<<endl;
        } else
        {
            cout<<"COLD"<<endl;
        }


    }




    return 0;
}

