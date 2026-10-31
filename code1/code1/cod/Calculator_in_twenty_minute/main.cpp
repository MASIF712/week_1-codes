#include <iostream>

using namespace std;
double Addition()
{
    cout<<"Welcome to Addition"<<endl;
    double n1,n2;
    cout<<"Enter you first number: ";
    cin>>n1;
    cout<<"Enter you second number: ";
    cin>>n2;
    cout<<"The sum of "<<n1<<" and "<<n2<<" is "<<n1+n2<<endl;
   return n1+n2;
}
void Subtraction()
{
    cout<<"Welcome to Subtraction"<<endl;
    double n1,n2;
    cout<<"Enter you first number: ";
    cin>>n1;
    cout<<"Enter you second number: ";
    cin>>n2;
    cout<<"The subtraction of "<<n1<<" and "<<n2<<" is "<<n1-n2<<endl;
  //  return n1-n2;
}
void Multiplication()
{
    cout<<"Welcome to Multiplication"<<endl;
    double n1,n2;
    cout<<"Enter you first number: ";
    cin>>n1;
    cout<<"Enter you second number: ";
    cin>>n2;
    cout<<"The Multiplication of "<<n1<<" and "<<n2<<" is "<<n1*n2<<endl;
    //return n1*n2;
}
void Division()
{
    cout<<"Welcome to Division"<<endl;
    double n1,n2;
    cout<<"Enter you first number: ";
    cin>>n1;
    cout<<"Enter you second number: ";
    cin>>n2;
   cout<<"The Division of "<<n1<<" and "<<n2<<" is "<<n1/n2<<endl;
  //  return n1/n2;
}
void Reminder()
{
    cout<<"Welcome to Reminder"<<endl;
    int n1,n2;
    cout<<"Enter you first number: ";
    cin>>n1;
    cout<<"Enter you second number: ";
    cin>>n2;
    cout<<"The Reminder of "<<n1<<" and "<<n2<<" is "<<n1%n2<<endl;
  //  return n1%n2;
}
int main()
{
    cout << "Welcome to Calculator" << endl;
    int k=2;
    int choice;
    do{
    cout<<"1. Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Reminder\n";
    cout<<" choice : ";
    cin>>choice;
        switch(choice)
        {
        case 1:
        {
            Addition();
            break;
        }
        case 2:
        {
            Subtraction();
            break;
        }
        case 3:
        {
            Multiplication();
            break;
        }
        case 4:
        {
            Division();
            break;
        }
        case 5:
        {
            Reminder();
            break;
        }
        }
        cout<<"\n0. exit:"<<endl<<"1. continue\n"<<"chosen: ";
        cin>>k;
    }while(k==1);
    return 0;
}
