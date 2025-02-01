#include<iostream>
using namespace std;

void Swap(int *p , int *q)
{
    int temp = 0;

    temp = *p;     //temp = 11
    *p = *q;       // 11 cross = 21
    *q = temp;      // 21 cross = temp(11)
}
int main()
{
    int No1= 0 , No2=0;

    cout<<"Enter first number: \n";
    cin>>No1;

    cout<<"Enter second number: \n";
    cin>>No2;

    Swap(&No1 ,&No2);

    cout<<"Value of No1 after swapping :"<< No1<<"\n";
    cout<<"Value of No2 after swapping :"<< No2<<"\n";

    return 0;
}