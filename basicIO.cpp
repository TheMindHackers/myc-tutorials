#include<iostream>
using namespace std;

int main()
{
    /*
    // make a variable
    int age; //.. first step done
    cout<<"Please enter your age: \n";
    cin>>age; // step 2
    
    /// now we have to add / increment by 1
        // first method
    //int newvalue= age+1;
        // second method
        // age =8
        // 8+1=9
    cout<<"\nYour previous entered age is : "<<age;
    age = age+1;

    
    cout<<"\nYour incremented age is : "<<age;
*/
    // calculator ( + , - , / , * )   
    int num1=0;
    int num2=0;

    cout<<"\nEnter Num1: ";
    cin>>num1;
    cout<<"\nEnter Num2: ";
    cin>>num2;
/*
    int divide=0, multiply=0, subs=0, add=0;
    // addition of 2 nums
    add= num1+num2;
    cout<<"\nadded value is : "<<add<<endl;

// subs
    subs= num1-num2;
    cout<<"\nsubtracted value is : "<<subs<<endl;

// multiplication
    multiply= num1 * num2;
    cout<<"\nmultiplied value is : "<<multiply<<endl;

// divide
    divide= num1/num2;
    cout<<"\ndivided value is: "<<divide;
*/
// remainder
    cout<<"\nRemainder is: "<<num1%num2; 

    return 0;
}
