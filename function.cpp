/*
#include<iostream>
using namespace std;
int main()
{
 int a,b;
 cout<<"enter the value of a and b"<<endl;
 cin>>a>>b;
 int ans=1;
 for (int  i = 1; i <=b; i++)
 {
    ans=ans*a;
 }

cout<<"answer is" <<ans<<endl;
 return 0;
}
#include<iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    for (int i = 1; i <=b; i++)
    {
        ans=ans*a ;
    }
    return ans;

}
int main()
{
    int a,b;
    cin>>a>>b;
    int answer=power(a,b);
    cout<<"answer is"<<answer<<endl;

 return 0;
}*/

 /*power of ab by using function

#include <iostream>
using namespace std;
bool isEven(int a)
{   //odd
    if (a & 1)//and 1 true hu ,too odd hai
    {
        return 0;
    }
    else//even
    {
        return 1;
    }
}
int main()
{
    int num;
    cin >> num;
    if (isEven(num))
    {
        cout << "number is even"<<endl;

    }
    else{
        cout<<"number is odd"<<endl;
    }
    return 0;
}

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n ";
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << " factorial " <<  n  << " is:  " <<  fact  << endl;
    return 0;
}
#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 0; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int ncr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);
    return num / denom;
}
int main()
{
    int n, r;
    cout<<"enter the value of n"<<endl;
    cin >> n;
    cout<<"enter the value of r";
    cin >> r;
    cout << "answer is" << ncr(n, r) << endl;

    return 0;
}
