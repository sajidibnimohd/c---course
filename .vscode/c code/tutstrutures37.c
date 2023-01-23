#include<stdio.h>
#include<string.h>
struct student 
{
    int id;
    int marks ;
    char fav_char;
    char name[34];
};
int main ()
{
 struct student harry ,ravi ,shuba;
 harry.id=1;
 ravi.id=2;
 shuba.id=3;
 
 harry.marks=66;
ravi.marks=43;
shuba.marks=453;
harry.fav_char='p';
ravi.fav_char='y';
shuba.fav_char='t';
strcpy(harry.name,"harry potter student of the year");
printf("harry got %d marks\n",harry .marks);
printf("shuba's name is %s\n ",shuba .name);
strcpy(ravi.name,"ravi kumar ia topper of month" );

strcpy(ravi.name,"ravi potter student of the year");


    return 0;
}
/*
#include<stdio.h>
struct employee
{
    int id ;
    char fav_char;
    float salary;


};
int main()
{
struct employee sartaj;
sartaj.id=2;
printf(" the id of sartaj is %d\n",sartaj id);
return 0;


}*/
