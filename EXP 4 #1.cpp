#include<iostream>
using namespace std;
int main()
{
    int c,first,second,sum=0,diff=0,prod=1,mod=0,quo=1;
    char choice;
    bool run = true; 
    while(run)
    {
    cout<<"MENU:"<<endl<<"\t1. Add\n\t2. Subtract\n\t3. Multiply\n\t4. Divide\n\t5. Modulus\n";
    cout<<"Enter your choice: ";
    cin>>c;
    cout<<"Enter your two numbers: ";
    cin>>first>>second;
    switch(c)
    {
    case 1:
        {
            sum=first+second;
            cout<<"Result: "<<sum<<endl<<endl;
            break;
        }
    case 2:
        {
            diff=first-second;
            cout<<"Result: "<<diff<<endl<<endl;
            break;
        }
    case 3:
        {
            prod=first*second;
            cout<<"Result: "<<prod<<endl<<endl;
            break;
        }
    case 4:
        {
            quo=(first)/(second);
            cout<<"Result: "<<quo<<endl<<endl;
            break;
        }
    case 5:
        {
            mod=first%second;
            cout<<"Result: "<<mod<<endl<<endl;
            break;
        }
    default:
        {
            cout<<"Invalid Number"<<endl<<endl;
        }
    }
        cout<<"Would you like to perform other calculation?(Y/N)"<<endl;
        cin >> choice;
        if(choice =='N'||choice =='n'){
            run = false;
        }
    }
    system("pause");
    return 0;
}


