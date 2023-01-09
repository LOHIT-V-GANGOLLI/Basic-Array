#include<iostream>
using namespace std;
void gen_subarray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
    }
}
int main()
{
    int arr[5]={3,7,4,8,5};
    gen_subarray(arr,5);
}
