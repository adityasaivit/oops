#include <iostream>
using namespace std;
class courier
{
    public:
    int id;
    string name;
    int base;
    int wt;
};
int main()
{
    courier c;
    cin>>c.id>>c.name>>c.base>>c.wt;
    cout<<c.id<<endl<<c.name<<endl<<c.base*c.wt<<endl<<c.base+30;
}
