#include <iostream>
using namespace std;
int main()
{
    int a=0;
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            if(j<=a)
            {
                cout<<"* ";
            }
            j++;
        }
        cout<<endl;
        i++;a++;
    }
}
