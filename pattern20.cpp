#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            if(j>=a)
            {
                cout<<i;
            }
            else
            {
                cout<<" ";
            }
            j++;
        }
        i++;a--;
        cout<<endl;
    }
}
