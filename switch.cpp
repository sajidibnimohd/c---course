/*#include<iostream>
using namespace std;
int main ()
{
    char ch ='7';
    cout<<endl;
    switch(ch)
    {
case 'r':cout<<"  rehalla"<<endl;
break;
case 'e':cout<<"character is m"<<endl;
break;
case 5:cout<<"love "<<endl;
break;
default:
cout<<"nothing";



    }
    cout<<endl;
    return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the value of a" << endl;
    cin >> a;
    cout << "enter the value of b" << endl;
    cin >> b;
    cout << "enter the value of c" << endl;
    cin >> c;
    char op;
    cout << "enter the op" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;

    default:
        cout << "opration is not present" << endl;
        break;
    }
    return 0;
}
