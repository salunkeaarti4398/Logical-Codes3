#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int i)
        {
            cout<<"Allocating the memory of resources...."<<"\n";
            iSize = i;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Deallocating the memory of resources...."<<"\n";
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the elements of the array :"<<"\n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<" elements of the array are :"<<"\n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        int Minimum()
        {
            int iMin = Arr[0];

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] < iMin)
                {
                    iMin = Arr[iCnt];
                }
            }
            return iMin;
        }
};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the size of array :"<<"\n";
    cin>>iLength;

    ArrayX * obj = new ArrayX(iLength);

    obj->Accept();
    obj->Display();
    iRet = obj->Minimum();

    cout<<"Smallest Elements is :"<<iRet<<"\n";

    delete obj;
    
    return 0;
}