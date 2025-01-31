//display factors of given number using Class & TIME COMPLEXITY

#include<iostream>
using namespace std;

class Number
{
    public:
        int iNo;

        Number(int A)
        {
            iNo = A;
        }
        void DisplayFactors()       //O(N/2)  
        {
            int iCnt=0;
            for(iCnt=1;iCnt<=iNo/2;iCnt++)
            {
                if(iNo%iCnt==0)
                {
                 cout<<iCnt<<"\n";
                }
            }
        }
};


int main()
{
    int iValue;
   
    cout<<"Enter number: \n";
    cin>>iValue;

    Number nobj(iValue);

    nobj.DisplayFactors();

    return 0;
}