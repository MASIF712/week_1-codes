#include <iostream>
using namespace std;
int main()
{
    int n = 1,endvalue;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5-i; j >= 1; j--)
        {
            cout << " ";
        }
        for (int k = n; k <= i*2-1;k++)
        {
            cout <<k;
            endvalue = k;
        }
        for (int l = endvalue-1; l >= n;l--)
        {
            cout <<l;
        }

            cout << "\n";
            n++;
    }

    return 0;
}
