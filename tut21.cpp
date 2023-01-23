#include<iostream>
using namespace std;

class employee
{
    private:
        int a, b, c;
        public: 
        int d,e;
    void setdata(int a1 ,int b2,int c1);// declaration
    void getdata() /*getdata print kari ga value*/    
     {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
        

    }
};

void employee :: setdata(int a1, int b2, int c1)
{
    a = a1;
    b = b2;
    c = c1;
}
int main()
{
    employee harry;
    harry.d= 1;
    harry.e=2;
    harry.setdata(1,2,3);
    harry.getdata();
    return 0;
}
