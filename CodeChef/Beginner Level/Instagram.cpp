#include <ostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int x, y;


  for(int i=0;i<n;i++)
  {
      cin>>x;
      cin>>y;

      if(x>y*10)
      {
          cout<<"YES"<<endl;
      } else
      {
          cout<<"NO"<<endl;
      }
  }


       return 0;

}
