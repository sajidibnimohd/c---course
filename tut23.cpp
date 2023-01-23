#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void Shop ::setprice(void)
{
    cout << "Enter id of your item no  : " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item   : " << endl;
    cin >> itemprice[counter];
    counter++;
}

void Shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id  : " << itemId[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}