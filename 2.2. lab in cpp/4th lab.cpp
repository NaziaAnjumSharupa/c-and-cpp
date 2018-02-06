#include<iostream>
using namespace std;
void QuickSort(int arr[20],int low,int high);
void knapsack(int n, float weight[],float profit[],float capacity[]);
Quick_Sort()
{
    int arr[20],num,i;
    cout<<endl<<"Insert the number of values (1-11): ";
    cin>>num;
    cout<<"Input "<<num<<" numbers: "<<endl;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"Entered values are: "<<endl;
    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
    QuickSort(arr,0,num-1);
    cout<<endl<<endl<<"The sorted array is: "<<endl;
   for(i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void QuickSort(int arr[20],int low,int high)
{
    int pivot,i,j,temp;
    if(low<high)
    {
        pivot=low;
        i=low;
        j=high;
        while(i<j)
        {
            while(arr[i]<=arr[pivot]&&i<high)
            {
                i++;
            }
            while(arr[j]>arr[pivot]&&j>=low)
            {
                j--;
            }
            if(i<j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        temp=arr[j];
        arr[j]=arr[pivot];
        arr[pivot]=temp;
        QuickSort(arr,low,j-1);
        QuickSort(arr,j+1,high);
    }
}
void knapsack(int n, float weight[],float profit[],float capacity)
{
    float x[20],tp=0;
    int i,j,u;
    u=capacity;
    for(i=0;i<n;i++)
    {
        x[i]=0.0;
    }
    for(i=0;i<n;i++)
    {
        if(weight[i]>u)
        {
            break;
        }
        else
        {
            x[i]=1.0;
            tp=tp+profit[i];
            u=u-weight[i];
        }
    }
    if(i<n)
    {
        x[i]=u/weight[i];
    }
    tp=tp+(x[i]*profit[i]);
    cout<<endl<<"The result vector is: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<x[i]<<endl;
    }
    cout<<endl<<"Maximum profit is: "<<tp;
}
KnpSck()
{
    float weight[20],ratio1[20],profit[20],temp,capacity;
    int num,i,j;
    cout<<"Enter the number of objects: "<<endl;
    cin>>num;
    cout<<"Enter the weights and profits of "<<num<<" objects: "<<endl;
    for(i=0;i<num;i++)
    {
        cin>>weight[i]>>profit[i];
    }
    cout<<"Enter the capacity of knapsack: "<<endl;
    cin>>capacity;
    for(i=0;i<num;i++)
    {
        ratio1[i]=profit[i]/weight[i];
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(ratio1[i]<ratio1[j])
            {
                temp=ratio1[j];
                ratio1[j]=ratio1[i];
                ratio1[i]=temp;
                temp=weight[j];
                weight[j]=weight[i];
                weight[i]=temp;
                temp=profit[j];
                profit[j]=profit[i];
                profit[i]=temp;
            }
        }
    }
    knapsack(num,weight,profit,capacity);
}
int main()
{
    int choice;
    cout<<"Enter your choice: "<<endl<<"1. Quick Sort"<<endl<<"2. Knapsack Problem"<<endl;
    cin>>choice;
    switch(choice)
    {
case 1:
    Quick_Sort();
    break;
case 2:
    KnpSck();
    break;
default:
    cout<<"Invalid choice!"<<endl;
    }
    return 0;
}

