#include <iostream>
using namespace std;
class student
{
    public:
    int id;
    string name;
    int m1,m2,m3;


};
int main()
{
    student s;
    cin>>s.m1>>s.m2>>s.m3;
    cin>>s.id>>s.name;
    cout<<s.id<<endl<<s.name<<endl;
    cout<<"the total marks are:"<<s.m1+s.m2+s.m3<<endl;
    cout<<"the average of the marks:"<<(s.m1+s.m2+s.m3)/3;
}
