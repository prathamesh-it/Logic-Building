#include<iostream>
using namespace std;

class Array
{
    public:
        float *Arr;
        int iSize;
        
        Array(int length);    //Constructor Declaration

        ~Array();           //Destructor Declaration

        void Accept();      //Declaration
  
        void Display();     //Declaration

        float Addition();       //Declaration

};
Array :: Array(int length)      //Constructor Definition
{
    iSize = length;
    Arr = new float[iSize];
}

Array :: ~Array()               //  Destructor Definition
{
    delete []Arr;
}

void Array:: Accept()
{
    int i = 0;

        cout<<"Please enter the value\n";
        for(i = 0 ; i<iSize ; i++)
        {
            cin>>Arr[i];
        }
}

void Array :: Display()
{
    int i = 0;
    cout<<"Elements of the array are :\n";

    for(i = 0 ; i<iSize ; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

float Array :: Addition()
{
    int i = 0;
    float iSum = 0.0f;

    for(i = 0 ; i<iSize ; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}
        


int main()
{
    Array aobj(5);
    float fRet = 0.0f;

    aobj.Accept();
    aobj.Display();

    fRet = aobj.Addition();
    cout<<"Addition is :"<<fRet<<"\n";

    return 0;
}