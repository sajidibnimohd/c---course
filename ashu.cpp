/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n";
    cin >> n;
    int i = 2;
    int sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout << "value of sum is" << sum << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the valu of n";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n){
            cout << " * ";
        j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }


    return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n";
    cin >> n;
    int i = 1;
    int count = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count= count + 1;
            j = j + 1;
        }

    cout << endl;
    i = i + 1;
    }
    return 0;
}

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

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j = j + 1;
        }
        int start = i - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j=j+1;
        }
        int start=i-1;
        while(start)
        {
            cout<<start;
            start=start-1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}

*/

/*12344321
  123**4321
  12****21
  1******1


#include<iostream>
using namespace std;

int main()
{
   int n ;
   cin>>n ;

   int row = 1;

   while(row<=n)
   {


       int col = 1;
       while( col<=n-row+1 ){
           cout << col;
           col = col +1 ;

       }

    int star = row -1 ;
    while( star ){
        cout <<"*";
    star = star -1 ;

    }

    int star2 = row -1;
    while(star2){
        cout<<"*";
        star2 = star2 -1 ;
    }

    int col2 = n - row +1 ;

    while( col2){

           cout << col2;
           col2 = col2 - 1  ;

    }
       cout<<endl;
       row = row +1 ;
   }
}

#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int b = 2;
    cout << "a&b" << (a & b) << endl;
    cout << "a|b " << (a | b) << endl;
    cout << "~a" << (~a) << endl;
    cout << "a^b " << (a ^ b) << endl;
    return 0;
}*/

/*                              FOR LOOP  TOPICS ..........



#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the value of n";
cin>>n;
int sum=1
for (int i = 1; i <=n; i++)
{
cout<<i;
}

}
*/

/*-------- SUM OF N NO'S------
#include <iostream>
using namespace std;
int main()
{
int n;
cout << "enter the value of n";
cin >> n;
int sum = 1;
for (int i = 0; i <= n; i++)
{
sum = sum + i;
}
cout << sum<<endl;
}*/

/* fabico series
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n";
    cin >> n;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i <= n; i++)
    {
        int nextno = a + b;
        cout << nextno << " ";
        a = b;
        b = nextno;
    }

    return 0;
}*/
/*prime no are not 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"enter the of n";
    cin>>n;
    bool isprime=1;
    for (int  i = 2; i < n; i++)
    {
        if(n%i==0);{

            //cout<<"not prime";
            isprime=0;
            break;
        }
    }
        if(isprime==0){
            cout<<"not a prime"<<endl;
        }
        else
        {
            cout<<"is a prime "<<endl;
        }
    
    
 return 0;
}
#include<iostream>
using namespace std;
bool isEven(int a){
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
    int num;
    cin>>num;
    if (isEven(num))
    {
        cout<<"no is even"<<endl;
    }
    else{
        cout<<"no is odd"<<endl;
    }
 return 0;

}
*/
#include <iostream>  
using namespace std;  
int main()  
{  
   int i,fact=1,number;    
  cout<<"Enter any Number: ";    
 cin>>number;    
  for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  cout<<"Factorial of " <<number<<" is: "<<fact<<endl;  
  return 0;  
}  