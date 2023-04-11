#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    int i=1;
    
    cout<<endl;
    while(i<=4)
    {
        int j=1;
        while(j<=5)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
}