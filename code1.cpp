#include <iostream>
using namespace std;
int sum(int n1, int n2);
int main()
{

    int number1, number2;
    cout << " athry your intizar lis ";
    cout << " YE YAR SITEMGAR \n TERA PYAR SITEMGAR SETAMGAR \n your intizar lis ";
    cout << "Enter number 1 : ";
    cin >> number1;
    cout << "Enter number 2 : ";
    cin >> number2;
    int Sum = sum(number1, number2);
    cout << "\nThe Sum of " << number1 << " and " << number2 << " is : sum :==:" << Sum;
    return 0;
}
int sum(int n1, int n2)
{
    int Total;
    Total = n1 + n2;
    return Total;
}
