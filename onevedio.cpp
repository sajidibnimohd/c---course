#include <iostream>
#include <string>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
class employee
{
public:
    string name;
    int salary;

    employee(string name, int salary, int sp)
    {
        this->name = name;
        this->salary = salary;
        this->secretpassword = sp;
    }

    void printDetails()
    {
        cout << "the name of our first employee is " << this->name << "and his salary is" << this->salary << "dollars" << endl;
    }
    void getsecretpassword()
    {
        cout << "the secret password of empolyee is" << this->secretpassword;
    }

private:
    int secretpassword;
};
class programmer : public employee
{
public:
    int errors;
};

int main()
{
    /*  int a,b;
      cout<<"enter the first no"<<endl;
      cin>>a;
      cout<<"enter the second no"<<endl;
      cin>>b;
      cout<<"the a+b is "<<a+b<<endl;
      cout<<"the a-b is "<<a-b<<endl;
      cout<<"the a*b is "<<a*b<<endl;
      cout<<"the a/b is "<<(float)a/b<<endl;  //typecasting
  */
    /*int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    if(age>200 || age<1)
    {
        cout<<"invalid age";
    }
    else if(age>=18)
    {
        cout<<"you can vote";
    }
    else
    {
        cout<<"you cannot vote";
    }*/
    //****** SWITCH CASE********//

    /* int age;
     cout << "enter your age" << endl;
     cin >> age;

     switch (age)
     {
     case 12:
         cout << "you are 12 years old" << endl;
         cout << "you are good" << endl;
         break;
     case 18:
         cout << "you are 18 years old";
         break;
     default:
         cout << "you are neither 12 years nor 18 years old" << endl;
     }*/
    //***loops****
    /* int index = 0;
     while (index < 15)
     {
         cout << "we are at index number " << index << endl;
         index = index + 1;
     }*/
    /* int index=0;
     do
     {
         cout<<"we are at index number "<<index <<endl;
         index=index+1;

     } while (index>12);*/

    /* for (int i = 1; i < 23; i++)
     {
         cout << "the value of i is " << i << endl;
     }*/
    /*int a, b;
    cout << "enter first number" << endl;
    cin >> a;
    cout << "enter second number" << endl;
    cin >> b;
    cout<<"the function returned "<<add(a,b);*/
    // int arr[]={3,4,5};
    // cout<<arr[1];
    /* int marks[6];
     for (int i=0;i<6;i++)
     {
         cout<<"enter the marks of"<<i<<"marks[i] student is"<<endl;
         cin>>marks[i];
     }*/
    /*  int arr2d[2][3]={
          {1,2,3},
          {4,5,6}
      };
  for(int i=0;i<2;i++)
  {
      for(int j=0;j<3;j++)
      {
          cout<<"the value at"<<i<<","<<j<<"is"<<arr2d[i][j]<<endl;
      }
  }
  */
    //**********typecasting******
    /*int a=343;
    float b=87.34;
    cout<<(float)a/34<<endl;
    cout<<(int)b;*/
    //****STRING*****
    /*string name ="harry";
    cout<<"the name is "<<name;
    cout<<"the length of name is"<<name.length()<<endl;
    cout<<"the name is "<<name.substr(0,3)<<endl;
    cout<<"the name is "<<name.substr(2,3);*/
    //******POINTERS******
    /*  int a = 34;
      int *ptra;
      ptra = &a;
      cout <<"the value of a is"<<a<<endl;
      cout<<"the value of a is "<<*ptra<<endl;
      cout<<"the address of a is "<<&a<<endl;
      cout<<"the address of a is"<<ptra<<endl;*/
    //****CLASSES AND OBJECTS*******
    employee har("harry costructor", 344, 32346);
    // har.name="harry";
    // har.salary=100;
    har.printDetails();
    har.getsecretpassword();
    // cout<<"the name of our first employee is "<<har.name <<"and his salary is"<<har.salary<<"dollars"<<endl;

    return 0;
}