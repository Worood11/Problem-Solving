#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double a, b, c,d;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b>>c;
        d = (a/2)+(b/2);

        if(d>c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }



    return 0;
}