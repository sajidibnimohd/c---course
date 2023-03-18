/*#include<iostream>
using namespace std;
int glo = 5;
void sum(){
    int a;
    cout<< glo;
}





int main (){
    int glo =22;
    glo=56;

    int a=4,b=5;
    float pi=3.14;
    char c ='d';
    cout<<"the value of a is "<<a<<" and the value of b is" <<b;
    cout<<"the value of pi is:"<<pi;
    cout<<"the value of pi is "<<c;

    sum();
    cout<<glo;

    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main ()
{
int num1,num2;
cout<<"enter the value of num1:\n";
cin>>num1;
cout<<"enter the of num2:\n ";
cin>>num2;

cout<<"the multipcation of num1 and num2 is "<<num1*num2;
    return 0;
}/*
#include<iostream>
using namespace std;
int main ()
{
    cout<<"hello world ";
    return 0;
}
#include<iostream>// preprocerrsor command
using namespace std;
int main() //function
 {
cout<<"hello world";// string
}

#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int arr[5] = {3, 5, 7, 11, 51};
    int arrindex = binarysearch(arr, 5, 11);
    cout << "index of 11 is" << arrindex << endl;
    return 0;
}*/
#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {6, 44, 66, 77, 78, 86};
    int evenindex = binarysearch(even, 6, 66);
    cout << "index of 66 is " << evenindex << endl;
    return 0;
}