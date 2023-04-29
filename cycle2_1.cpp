#include <iostream>
using namespace std;
class student
{
    public:
    char name[100];
    int id;
    int m1;
    int m2;
    int m3;
};
int main()
{
    student s;
    cin>>s.id;
    cin>>s.name;
    cin>>s.m1;
    cin>>s.m2;
    cin>>s.m3;
    int avg=s.m1+s.m2+s.m3;
    avg=avg/3;
    cout<<s.id<<endl<<s.name<<endl<<"mark1"<< s.m1 <<" mark2 "<< s.m2 <<" mark3 "<< "average "<<avg <<endl;
}
