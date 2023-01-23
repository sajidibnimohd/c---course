#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
    void setnumber(int n1, int n2){
        a = n1;
        b = n2;

    }
    //below linre means that  non memeber - sumcomplex funtion is allowed to do anything with my private part(memebers)
    friend complex sumcomplex(complex o1, complex o2);
    void printnumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;

    }
};
complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setnumber((o1.a + o2.a),(o1.b+o2.b));
    return o3;
}


int main (){
    complex c1,c2 , sum;
    c1.setnumber(1,4);
    c2.setnumber(5,8);
    c1.printnumber();
    c2.printnumber();


    sum = sumcomplex(c1,c2);
    sum.printnumber();

    
    return 0;
}


 
/*


properties of friend functions
1. not in the scope of class 
*/