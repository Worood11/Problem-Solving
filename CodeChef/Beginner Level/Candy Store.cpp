#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin >>n;
int x, y,z;

for(int i=0;i<n;i++)
{
    cin>>x;
    cin>>y;

    if(x>y|| x==y)
    {
        cout<<y<<endl;
    } else if(x<y)
    {
        z=(y-x)*2;
        cout << x+z<<endl;
    }


}
    return 0;
}
