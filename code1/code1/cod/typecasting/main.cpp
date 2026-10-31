#include <iostream>
#include<iomanip>
#include<string.h>
#include<math.h>
namespace a
{
int x=10;
}
namespace b
{
int x=20;
}
using namespace std;
int main()
{
    cout<<"Namespace:"<<endl;
    cout<<"a="<<a::x<<endl;
    cout<<"b="<<b::x<<endl;

    cout << "Type casting!" << endl;
    //implicit typecasting
    int int1=65.9898;
    int int2=2;
    int int3=3;
    float float1=97.111;
    float float2=2.210;
    float float3=3.3210;
    double double1=1.1242352463473;
    double double2=2.1242352463473;
    double double3=3.1242352463473;
    char char1='a';
    char char2='b';
    char char3='c';
    char char4='d';
    string string1="Muzammil";
    string string2="-ul-";
    string string3="qamar";
    string string4=" asif";
    string string5=" lahari ";
    bool booltrue= true;
    bool boolfalse=false;
    cout << "int to float:" << fixed << setprecision(5)<< static_cast<float>(int1) << endl;
    cout<<"int to float:"<<fixed<<setprecision(5)<<static_cast<float>(int1)<<endl;
    cout<<"int to char:"<<static_cast<char>(int1)<<endl;
    cout<<"int to double:"<<static_cast<double>(int1)<<endl;
    //cout<<"int to string:"<<static_cast<string>(int1)<<endl;
    cout<<"int to bool:"<<static_cast<bool>(int1)<<endl;
    cout<<"float to int:"<<static_cast<int>(float1)<<endl;
    cout<<"float to char:"<<static_cast<char>(float1)<<endl;
    cout<<"float to double:"<<static_cast<double>(float1)<<endl;
    //cout<<"float to string :"<<static_cast<stirng>(float1)<<endl;
    int length=string1.length();
    cout<<" the lenght of string 1 is : "<<length<<endl;
    string sumofstring=string1+string2+string3+string4+string5;
    cout<<"sum of strin as concatenation : "<<sumofstring<<endl;
    string firstname,secondname;
    cout<<"Enter you first name: ";
    cin>>firstname;
    cout<<"Enter your second name:";
    cin.ignore();
    getline(cin,secondname);
    cout<<"\nyour name:"<<firstname+secondname<<endl;
    cout<<"you first name is : "<<firstname<<endl;
    cout<<"you second name is : "<<secondname<<endl;







    return 0;
}
