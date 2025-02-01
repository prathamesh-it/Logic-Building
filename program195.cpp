//Count even elements in the array

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
            for(iCnt = 1 ;iCnt<iSize; iCnt++)       
            {
                cout<<ptr[iCnt]<<"\n";
            }
        }
        void DisplayR()
        {
            int iCnt = 0;
            cout<<"Values from the array are : \n";
            for(iCnt = iSize-1 ;iCnt >=0; iCnt--)       
            {
                cout<<ptr[iCnt]<<"\n";
            }
        }

        int CountEven()
        {
            int iCnt=0,iCount=0;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                if(ptr[iCnt] %2 == 0)
                {
                    iCount++;
                }
            }
            return iCount;
        }

        ~Array()
        {
            delete[]ptr;     
        }

};

int main()
{
    int iLength = 0, iRet = 0 ;         

    cout<<"Enter number of elements that you want to store : \n";
    cin>>iLength;

    Array aobj(iLength);   

    aobj.Accept();
    aobj.Display();
    aobj.DisplayR();

    iRet = aobj.CountEven();

    cout<<"Number of even elements are:"<<iRet<<"\n";
    

    return 0;
}