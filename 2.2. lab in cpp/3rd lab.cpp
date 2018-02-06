#include<iostream>
using namespace std;
int arr[20],num,maxi,mini,maxi1,mini1,mid;
void MaxMin(int i,int j);
max_min()
{
    int i;
    cout<<endl<<"Insert the number of values (1-11): ";
    cin>>num;
    cout<<"Input "<<num<<" numbers: "<<endl;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    MaxMin(0,num-1);
 cout<<"Maximum = "<<maxi<<" and Minimum = "<<mini<<endl;
}
void MaxMin(int i,int j)
{
    if(i==j)
    {
        maxi=arr[i];
        mini=arr[i];
    }
    else if(i==j-1)
    {
        if(arr[i]<arr[j])
        {
            maxi=arr[j];
            mini=arr[i];
        }
        else
        {
            maxi=arr[i];
            mini=arr[j];
        }
    }
    else
    {
        mid=(i+j)/2;
        MaxMin(i,mid);
        maxi1=maxi;
        mini1=mini;
        MaxMin(mid+1,j);
      if(maxi<maxi1)
       {
          maxi=maxi1;
       }
      if(mini>mini1)
       {
          mini=mini1;
       }
    }
}
bin_search()
{
    int i,arr[20],n,item,mid;
    cout<<"Enter the number of values(1-11): ";
    cin>> n;
    cout<<"Enter "<<n<<" numbers in sorted form: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the item to find: ";
    cin>>item;
    int beg=0,ent=n-1;
    mid=(beg+ent)/2;
    while(item!=arr[mid]&&beg<=ent)
    {
        if(item<arr[mid])
        {
            ent=mid-1;
        }
        else
        {
            beg=mid+1;
        }
        mid=(beg+ent)/2;
    }
    if(item==arr[mid])
    {
        cout<<"The item is found in location: "<<mid<<endl;
    }
    else
    {
        cout<<"The item is not found!"<<endl;
    }
}
int main()
{
    int choice;
    cout<<"Enter your choice: "<<endl<<"1. Maximum Minimum"<<endl<<"2. Binary Search"<<endl;
    cin>>choice;
    switch(choice)
    {
case 1:
    max_min();
    break;
case 2:
    bin_search();
    break;
default:
    cout<<"Invalid choice!"<<endl;
    }
    return 0;
}
