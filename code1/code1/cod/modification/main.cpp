#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    //int x = 5;
    // cout << x++ + ++x<<endl;
    /*
    Practice number 3th, write a cgpa calculator program in which user enter all six dubject marks
    and calculate teh cgpa accordinto siba creteria of CGPA scheme.



    */
    float englihs,ict,pf,disc,isl,pakstd;
    cout<<"Enter English marks :";
    cin>>englihs;
    cout<<"Enter ict marks :";
    cin>>ict;
    cout<<"Enter pf marks :";
    cin>>pf;
    cout<<"Enter disc marks :";
    cin>>disc;
    cout<<"Enter isl marks :";
    cin>>isl;
    cout<<"Enter pakstd marks :";
    cin>>pakstd;

    float sum= ict+englihs+disc+pf+isl+pakstd;
    cout<<"The percentage :"<<sum/6;
    if(sum/6>=92)
    {
        cout<<" CGPA 4";

    }
    else if(sum/6>=87)
    {
        cout<<"CGPA 3.68";
    }
    else if(sum/6>=84)
    {
        cout<<"CGPA 3.48";

    }
    else if(sum/6>=80)
    {
        cout<<"CGPA 3.00";

    }

    cout<<" ended ::"<<endl;
    return 0;
}
