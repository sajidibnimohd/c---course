/*#include<iostream>
using namespace std;
class Employee
{
    private:
     int a,b,c;
     public:
     int d,e;
     void setdata(int a1,int b1,int c1);
     void getdata(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;

     }
};
void Employee :: setdata(int a1,int b1 ,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    Employee harry;
    harry.d=12234;
    harry.e=78253;
    harry.setdata(1,2,4);
    harry.getdata();
    return 0;
}*/
/*
#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout << " the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};
void employee :: setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee khan;
    khan.d=64897;
    khan.e=75231;
    khan.setdata(1,44,33);
    khan.getdata();
    return 0;


}
*/
#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};
void shop ::setprice(void)
{
    cout << "enter id of ur item no " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter the price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of item with id"<< itemid[i]<<"is"<<itemprice[i]<<endl;

    }
    
}

int main()
{
shop dukaan;
dukaan.initcounter();
dukaan.setprice();
dukaan.setprice();
dukaan.setprice();
dukaan.setprice();
dukaan.displayprice();

    return 0;
}