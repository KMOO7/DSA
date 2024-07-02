#include<iostream>
using namespace std;

bool linear_search(int arr[], int size, int key)
{

    for(int i=0;i<size;i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }
     
    }
     return 0;
}

int main()
{
    int arr[]={11,12,13,-2,781,9,244,444,93773,2};

    int key;
    while(true){
    cout<<endl<<"Enter element to be found: ";
    cin>>key;

    bool found=linear_search(arr,10,key);

    if(found)
    {
        cout<<"Key found"<<endl;
    }
    else
    {
        cout<<"Key not found"<<endl;
    }
    }
    return 1;
}
