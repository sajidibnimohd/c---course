

/*#include<iostream>
using namespace std;
int main()
{
char ch ;
cin>>ch;
if(ch>='a' && ch<='z' )
{
    cout<<"this is lowercase"<<endl;

}
else
if(ch>='A' && ch<='b')
{
    cout<<"this is uper case"<<endl;
}
else
if(ch>='0' && ch<='9')
{
    cout<<"this is numeric"<<endl;
}
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    int sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }

    cout << "value of sum is  " << sum << endl;

    return 0;
}
// Q-----> GIVEN NO IS PRIME OR NOT
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=2;
    while(i<n)
    {
        if (n%i==0)
        {
            cout<<"not prime"<<i<<endl;
        }
        else
        {
            cout<<"prime"<<i<<endl;
        }


    i=i+1;
    }
    return 0;

}*/

// PATTERN QUESTIONS...
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while(j<=n){
        cout<<"*"<<" ";
        j=j+1;

        }
          cout<<endl;
        i=i+1;


    }

        return 0;
}



#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the no" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {

            cout << j;
            j=j+1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the no";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)

        {
            cout <<n- j+1;
            j = j+1;

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
    int n;
    cout << "enter the value of n";
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;

        i = i + 1;
    }
    return 0;
}

/*
#include<iostream>
using namespace std;
int main ()
{
  int n;
  cout<<"Enter the value of n "<<endl;
  cin>>n;
  int row=1;
  while (row<=n)
  {
    int col=1;
    while(col<=row){
        cout<<" * " ;
        col=col+1;

    }
    cout<<endl;
    row=row+1;
  }

    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main ()
{
int n;
cout<<"enter the value of n ";
cin>>n;
int i=1;
while (i<=n)
{
    int j=1;
    while(j<=i){
    cout<<i;
    j=j+1;
    }
cout<<endl;
i=i+1;
}
 return 0;




}*/
/*print A A A
     B B B
     C C C*/
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n)
        {
            char ch='A'+row-1;
            cout<<ch;
            col=col+1;
        }
    cout<<endl;
    row=row+1;
    }
    return 0;
}*/

/*  Print A B C
          A B C
          A B C*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n){
            char ch='A'+j-1;
            cout<<" ";
            cout<<ch;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
    return 0;




}*/
/* print A B C D
        E F G H I
        ......

        #include<iostream>
        using namespace std;
        int main()
        {
            int n;
            cout<<"enter the value of n";
            char star='A';
            cin>>n;
            int i=1;
            while (i<=n)
            {
                int j=1;
                while(j<=n)
                {cout<<star<<" ";

                  star=star+1;
                  j=j+1;
                }
                cout<<endl;
                i=i+1;
            }
            return 0;
        }
        */

/*    PRINT  A
             B B
             C C C*/
/*
    #include<iostream>
    using namespace std;
    int main()
    {
        int n;
        cout<<"enter the value of n"<<endl;
        cin>>n;
        int i=1;
        while(i<=n)
        {
            int j=1;
            while(j<=i)
            {
                char ch='A'+i-1;
                cout<<ch;
                j=j+1;

            }
            cout<<endl;
            i=i+1;
        }
        return 0;
        }
*/


/*
PRINT       *
         *  *
    *  *    **/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " enter the value of n" << endl;
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
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}*/
/*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
       int space =n-i;
        while(space){
            cout<<" ";
            space=space-1;

        }
        int j=1;
        while(j<=i){

            cout<<"*";
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=i;
        while(j<=i)
        {
            char ch='A'+i-1;
            cout<<ch;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}*/
/*
#include<iostream>
    using namespace std;
    int main()
    {
        int n;
        cout<<"enter the value of n"<<endl;
        cin>>n;
        int i=1;
        while(i<=n)
        {
            int j=1;
            while(j<=i)
            {
                char ch='A'+i-1;
                cout<<ch;
                j=j+1;

            }
            cout<<endl;
            i=i+1;
        }
        return 0;
        }*/
        /*
    #include<iostream>
    using namespace std;
    int main()
    {
        int n;
        cout<<"enter a value of n"<<endl;
        cin>>n;
        int i=1;
        while(i<=n)
        {
         int j=1;
         while (j<=i)
         {
            char ch='A'+i-1;
            cout<<ch;
            j=j+1;
         }
         cout<<endl;
         i=i+1;
        }
        return 0;
        }
    
    
  #include<iostream>
  using namespace std;
  int main()
  {
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
        char ch ='A'+i+j-2;
        cout<<ch;
    
        j=j+1;
    }
    cout<<endl;
    i=i+1;
    }
    return 0;
  } 
*/    
/*
print this
    1
   121
  12321
 1234321   


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
    
  /*
  
  12344321
  123**4321
  12****21
  1******1
  */

/*
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
  */