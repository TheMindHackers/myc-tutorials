#include<iostream>
using namespace std;

// global variable
//int global =10;

int main(int argc, char const *argv[])
{   

    // int global =20;
    //     // 10 + 20
    // cout<<( ::global  + global);

    // ******************** reference variable
    // int x=2;
    // int &y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    ///**********    TYPECASTING

    float num1= 2.4f;

    // implicit typecasting
   // int num2= num1;

   // cout<<num2;


    // explicit
    int num3=1;
    num3=int(num1);
    ///cout<<num3;

    cout<<int(num1)+ 6;

    return 0;
}
