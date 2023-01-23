#include<iostream>
using namespace std;
class empolyee{
    int id;
    int count;

public:
void setdata(void){
    cout<<"enter the id"<<endl;
    cin>>id;

} 
void getdata (void){
    cout<<"the id of this empolyee is"<<id;
}
};
int main (){
    empolyee harry, rohan, lovish;
    harry.setdata();
    harry.getdata();

    rohan.setdata();
    rohan.getdata();

    lovish.setdata();
    lovish.getdata();
    return 0;
}