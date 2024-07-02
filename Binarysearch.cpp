#include<iostream>
using namespace std;
int binary_search(int arr[], int size, int key)
{
    int start=0;
    int end=(size-1);
    int mid=(start+end)/2;

    while(start<=end)
    {
        if(key==arr[mid])
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }

        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int arr[10]={12,15,17,19,21,23,25,29,39,90};
    int arr1[11]={12,15,17,19,21,23,25,29,39,87,90};
    int key;
    while(true)
    {
        cout<<"Enter element to be found: ";
        cin>>key;
    
        int atindex=binary_search(arr,11,key);

        if(atindex>=0)
        {
            cout<<"The element "<<key<<" you entered is found at index position: "<<atindex<<endl<<endl;
        }
        else
        {
            cout<<"The element "<<key<<" you entered is not found in array:"<<endl<<endl;
        }
    }
return 1;
}