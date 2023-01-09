#include<iostream>
using namespace std;
void swapp(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minn=i;
        for(int j=i;j<n-1;j++)
        {

                if(arr[j]<arr[minn])
                {
                    minn=j;

                }


        }
        swapp(&arr[minn],&arr[i]);

    }
}
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapp(&arr[j],&arr[j+1]);
            }
        }
    }

}
void insertionsort(int arr[],int n)
{
    int j,temp;
    for(int i=1;i<=n-1;i++)
    {
        temp=arr[i];
       for(j=i-1;j>=0&&arr[j]>temp;j--)
       {

        {

                arr[j+1]=arr[j];
            }
       }
        arr[j+1]=temp;
    }
}
int main()
{
    int arr[5]={7,4,2,5,9};
    insertionsort(arr,5);
    cout<<arr[2];

}
