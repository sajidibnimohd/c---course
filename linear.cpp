#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {

            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[6] = {36, 43, 56, 34, 53};
    cout << "enter the key element" << endl;
    int key;
    cin >> key;
    bool found = search(arr, 6, key);
    if (found)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is absent" << endl;
    }
    return 0;
}