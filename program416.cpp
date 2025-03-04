#include<iostream>
using namespace std;

class Array
{
    public:
        int *Arr;
        int iSize;
        
        Array(int length);    //Constructor Declaration

        ~Array();               //Destructor Declaration

        void Accept();          //Function Declaration

        void Display();         //Function Declaration

        int Addition();         //Function Declaration
        

};
Array :: Array(int length)          //Definition
{
    iSize = length;
    Arr = new int[iSize];
}

Array :: ~Array()
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

int Array :: Addition()
{
    int i = 0;
    int iSum = 0;

    for(i = 0 ; i<iSize ; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}
        


int main()
{
    Array aobj(5);
    int iRet = 0;

    aobj.Accept();
    aobj.Display();

    iRet = aobj.Addition();
    cout<<"Addition is :"<<iRet<<"\n";

    return 0;
}