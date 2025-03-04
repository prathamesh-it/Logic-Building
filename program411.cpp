#include<iostream>
using namespace std;

float AdditionF(float Arr[] , int iSize)
{
    float iSum = 0.0f;
    int i = 0;

    for(i = 0 ; i< iSize ; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;

}


int main()
{
    float Brr[] = {10.7f,20.5f,30.3f,40.4f};
    float fRet = 0.0f;

    fRet = AdditionF(Brr , 4);

    cout<<"Addition is : "<<fRet<<"\n";

    return 0;
}