#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

int n=4;
int w;
int count=0;
while(n-->0)
{
    cin>>w;
    if(w>=10)
    {
        count++;
    }
}
cout<<count;
    return 0;
}