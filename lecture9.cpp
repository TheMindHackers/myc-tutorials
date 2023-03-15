#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // int age;
    // cout<<"Please Input your age: ";
    // cin>>age;

    // ------------------------if else
        // if(age>=18) // 14>=18
        // {   
        //     cout<<"\nyour are eligible for pakistani CNIC";
        // }
        // else if(age<18) // 14<18
        // {
        //     cout<<"\nYou are not eligible";
        // }

    // ex 2: input from user a integer and tell whether integer is even or odd   
    // int num;
    // cin>>num;
    // if(num%2==0)// agar to even ha 
    // {
    //     cout<<"even";

    // }
    // else 
    // {
    //     cout<<"odd";
    // }
    

    //--------------------- Switch case
    // 1-- hello world    2-- bye world
    int num2;
    cout<<"Enter: ";
    cin>>num2;

    switch(num2)
    {
        case (1):
            cout<<"Hello World";
            break;

        case (2):
            cout<<"Bye world";
            break;
        
        default:
            cout<<"Wrong input, ma naraz hu BYEE";
            break;

        
    }

    return 0;
}
