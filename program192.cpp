#include<iostream>
using namespace std;

class Array
{
    public: 
        int *ptr;
        int iSize;

        Array(int A)
        {
            iSize = A;
            ptr = new int[iSize];
        }

        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter the values \n";
            for(iCnt = 0 ;iCnt < iSize ; iCnt++)  
            {      
                cin>>ptr[iCnt];
            }
        }
        void Display()
        {
            int iCnt = 0;
            cout<<"Values from the array are : \n";
            for(iCnt = 0 ;iCnt < iSize ; iCnt++)       
            {
                cout<<ptr[iCnt]<<"\n";
            }
        }

        ~Array()
        {
            delete[]ptr;     
        }

};

int main()
{
    int iLength = 0;     //Local variable       

    cout<<"Enter number of elements that you want to store : \n";
    cin>>iLength;

    Array aobj(iLength);   //Local variable

    aobj.Accept();
    aobj.Display();
    

    return 0;
}