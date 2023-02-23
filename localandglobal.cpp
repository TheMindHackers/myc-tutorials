#include<iostream>
using namespace std;
// local and global variables
// global
int global=10;

void func1(){
    //local variable
    int num=15;
    cout<<num;
   
   //global
    cout<<global<<endl;
}

void func2()
{
   cout<<global<<endl;
}
int main (){
        func1();
        func2();
        cout<<global<<endl;
    return 0;
}