#include <iostream>
using namespace std;
int main()
{
    //declare
    int array[15];
    cout << "vlaue at 11 index " << array[11] << endl;
    //initilising an array
    int second[3] = {5, 7, 11};
    //access
    cout << "vlaue of 2 index " << second[2] << endl;


    int third[15]={2,7};
    int n=3;
    cout<<"printing the array"<<endl;
    for (int  i = 0; i < n; i++)
    {
        cout<<third[i]<<" ";
    }
    return 0;
}