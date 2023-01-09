#include<iostream>
using namespace std;
int main()
{
    int arr[5]={3,4,5,7,8};
    //find 2 element whose sum=12
    int i=0;
    int j=4;
    int key=12;
    int sum=0;
    while(i<j)
    {
        sum=arr[i]+arr[j];
        if(sum==key)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(sum>key)
        {
            j--;
        }
        else if(sum<key)
        {
            i++;
        }

    }
}


