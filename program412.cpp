#include<iostream>
using namespace std;

double AdditionD(double Arr[] , int iSize)
{
    double iSum = 0.0;
    int i = 0;

    for(i = 0 ; i< iSize ; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;

}


int main()
{
    double Brr[] = {10.87f,20.55f,30.36f,40.47f};
    double dRet = 0.0;

    dRet = AdditionD(Brr , 4);

    cout<<"Addition is : "<<dRet<<"\n";

    return 0;
}