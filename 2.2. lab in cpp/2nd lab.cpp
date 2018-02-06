#include<iostream>
using namespace std;
void MergeSort(int arr[20], int arrs[20],int low,int high);
void merges(int arr[20],int arrs[20], int low, int mid, int high);
merge_sort()
{
   int arr[20],arrs[20],i,num;
   cout<<endl<<"Insert the number of values (1-11): ";
    cin>>num;
    cout<<"Input "<<num<<" numbers: "<<endl;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<"Entered values are: "<<endl;
    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
    MergeSort(arr,arrs,0,num-1);
    cout<<endl<<"The sorted array is: "<<endl;
   for(i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void MergeSort(int arr[20], int arrs[20],int low,int high)
   {
     int mid;
     if(low<high)
     {
         mid=(low+high)/2;
         MergeSort(arr,arrs,low,mid);
         MergeSort(arr,arrs,mid+1,high);
         merges(arr,arrs,low,mid,high);
     }
   }
void merges(int arr[20],int arrs[20], int low, int mid, int high)
{
    int h,i,j,k;
    h=low;
    i=low;
    j=mid+1;
    while((h<=mid)&&(j<=high))
    {
        if (arr[h]<=arr[j])
        {
            arrs[i]=arr[h];
            h++;
        }
        else
        {
            arrs[i]=arr[j];
            j++;
        }
        i++;
    }
    if(h>mid)
    {
        for(k=j;k<=high;k++)
        {
            arrs[i]=arr[k];
            i++;
        }
    }
    else
    {
        for(k=h;k<=mid;k++)
        {
            arrs[i]=arr[k];
            i++;
        }
    }
    for(k=low;k<=high;k++)
    {
        arr[k]=arrs[k];
    }
}
ins_sort()
{
    int arr[20],i,n,mini,loc;
    cout<<"Enter the number of values (1-11): ";
    cin>>n;
    cout<<"Input "<<n<<" numbers:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Entered values are: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=1;i<n;i++)
    {
        loc=i-1;
        mini=arr[i];
        while(mini<arr[loc]&&loc>=0)
        {
            arr[loc+1]=arr[loc];
            loc--;
        }
        arr[loc+1]=mini;

    }
    cout<<endl<<"Sorted values are: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int choice;
    cout<<"Enter your choice: "<<endl<<"1. Merge Sort"<<endl<<"2. Insertion Sort"<<endl;
    cin>>choice;
    switch(choice)
    {
case 1:
    merge_sort();
    break;
case 2:
    ins_sort();
    break;
default:
    cout<<"Invalid choice!"<<endl;
    }
    return 0;
}
