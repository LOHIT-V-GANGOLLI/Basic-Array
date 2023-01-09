#include<iostream>
using namespace std;
/*
void gen_subarray(int *arr,int n)
{
 int msum=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<",";
                sum=sum+arr[k];

            }
            if(msum<sum)
            {
                msum=sum;
            }
            cout<<endl;




        }
    }
    cout<<"maximum sum is "<<msum<<endl;

}*/
//method 2
int main()
{
    int arr[5]={3,7,4,8,5};
    int sum=0;
    int msum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
        if(sum<0)
        {
            sum=0;
        }
        msum=max(sum,msum);
    }
    cout<<msum;
}

