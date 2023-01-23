#include <iostream>
using namespace std;
int main()

 {
    for(int i=0;i<8;i++)
    {
       for(int j=0;j<=i;j++)
       {
         cout<<"*";//j//j+1

       }
       cout<<"\n";
    }
    return 0;
 }

/*
{
    for (int i = 5; i >=1; --i)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<"*";
        }
        cout << "\n";
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    cout << "enter the value of num1" << endl;
    cin >> num1;
    cout << "enter the value of num2" << endl;
    cin >> num2;

    cout << "sum of num1 and num2 " << num1 + num2 << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    float var1 = 4.62;
    int var2=5;
    int var3=8;
    int var4=9;

    float* c = &var1;
    int *a=&var2;
    int* b=&var3;
    int* d=&var4;
    cout<<"the address of d is"<<&var4<<endl;
    cout <<"the adrress of c is"<<&var1<<endl;
    cout<<"the adderss of &var2 is"<<&var2<<endl;
    cout<<"the address of b is"<<&var3<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main ()
{
    int a;
    int b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"subtract of a and b"<<a-b<<endl;
    cout<<"sum  of a and b"<<a+b<<endl;
    return 0;
}*/
/*
#include <iostream>
using namespace std;
int main()
{
    int marks[] = {54, 87, 978, 43};
    int mathmarks[5] = {45, 98, 87, 76, 23};
    /* cout << "these are the mathmarks" << endl;
     cout<<mathmarks[1]<<endl;
      mathmarks[2]=432;
      cout<<mathmarks[2]<<endl;
     for (int j = 0; j < 5; j++)
         cout << mathmarks[j] << endl;
     cout << "these are the marks" << endl;
     /*marks[0]=45;
      cout<<marks[0]<<endl;
      cout <<  marks [1] << endl;

      cout<<marks[2]<<endl;
      cout<<marks[3]<<endl;
     for (int i = 0; i < 4; i++)
     {
         cout << marks[i] << endl;
     }*/

/*int i;
    while(i<5)
    {
          cout<<"The marks of "<<i<<" is "<<marks[i]<<endl;
          i++;
     }
   /* int i;
     while (i<5)
     {
      cout<<"the marks of <<i<< is"<<mathmarks[i]<<endl;
     i++;
     }*/
/*   int j;
   do
   {
    cout<<"the mathmarks of <<j<< is"<<mathmarks[j]<<endl;
    j++;
   } while (j<4);


return 0;
}
*/

// PONTERS AND ARRAY
/*#include <iostream>
using namespace std;
int main()
{
int marks[]={43,54,89,62};
int *p=marks;
marks[1]=49;
cout<<"the value of marks[0] is "<<*p<<endl;
cout<<"the value of *p+1 is "<<*(p+1)<<endl;
cout<<"the value of *p+2 is "<<*(p+3)<<endl;
return 0;
}*/

// STRUCTRE//
/*#include<iostream>
using namespace std;
struct student//typedef struct student
{
    int sId;
    char name;
    float marks;

};
int main ()
{
struct student asif;
asif.sId=11;
asif.name='n';
asif.marks=56;
cout<<" the value is "<<asif.sId<<endl;
cout<<" the value is "<<asif.name<<endl;
return 0;
}*/

// RECURSIONS//
//#include <iostream>
//using namespace std;

/*int factorial(int n)
{
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
int main ()
{int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    cout<<"the factorail of " <<a<<" is "<<factorial(a)<<endl;
    return 0;
}*/
/*
int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}
int main()
{
    int a;
    cout << "enter the number" << endl;
    cin >> a;
    cout << "the term in fibonacci sequence at position " << a << " is " << fib(a) << endl;
    return 0;
}
// STRUCTURE//
/*
#include <iostream>
using namespace std;
typedef struct employee
{
    int eid;
    int ename;
    char echacter;
    float esalary;

} ep;
int main()
{
    ep khan;
    khan.eid = 1001;
    khan.ename = 5436;
    khan.echacter = 'w';
    cout << "the value of khan.eid is " << khan.eid << endl;
    return 0;
}*/

// CLASS//
/*#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);//declaration     aaga banii na walaoo hu

    void getdata()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    } 
};
void Employee :: setdata(int a1, int b1, int c1)// define here
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee harry;
    //harry.a=132;// a is private   become error

    harry.d=34;
    harry.e=453;
    harry.setdata(1,2,4);
    harry.getdata();
    

    return 0;
}*/
// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// NESTING OF MEMBER FUNCTIONS
/*
#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}
*/




// ARRAYS USE IN CLASSES
/*#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}

*/