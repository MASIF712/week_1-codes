#include <iostream>

using namespace std;

int main()
{
    cout << " Today 2nd of September 2026" << endl;

    ///if else if & errors type & Order of presedence
    cout<<"The calculation is : "<<2/2*(2*2)*2<<endl;
    /* there are three types of errors
     1.Compiler Error i.e :  syntax issue ; , etc
     2.Logical Error i.e : replace + with * , etc
     3.RunTime Error i.e : divide by Zero(0), etc
     */
    if(1)
    {
        cout<<"if 1";

        if(2)
        {
            cout<<"if 2";

            if(3)
            {
                cout<<"if 3";

                if(0)
                {
                    cout<<"if 4";
                }
                else
                {
                    cout<<"else 4";
                }
            }
            else
            {
                cout<<"else 3";
            }
        }
        else
        {
            cout<<"else 2";

        }
    }
    else
    {
        cout<<"else 1";

    }





    return 0;
}
