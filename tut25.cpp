#include <iostream>
using namespace std;
class Employee {
int id;
int salary;

public:
void setId(void)
{
    salary = 122;
    cout<<"enter the id of employee" << endl;
    cin>>id;
}
void getid(void)
{
    cout<<"the id of this employee is" << id << endl;
    cin>>id;
};
int main()
{
    Employee harry, rohan, lovish;
    harry.setId();
    harry.getId();
    return 0;
}