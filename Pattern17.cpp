#include <iostream>
using namespace std;
int main() 
{
  int i=1;
  int n;
  int a=0;
  cin>>n;
  while(i<=n)
    {
      int j=1;
      while(j<=n)
        {
          if(j<=a)
          {
            cout<<"* ";
          }
          else
          {
              cout<<" ";
          }
              
          j++;
        }
      i++;a=a+1;
      cout<<endl;
    }

}
