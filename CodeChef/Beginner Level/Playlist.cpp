#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >>n;
    int x,y;
    int z;
    for(int i=0; i<n;i++)
    {
        cin>>x;
        cin>>y;
        z= x/(y*3);
        cout<<z<<endl;

    }


    return 0;
}