#include<iostream>
using namespace std;
void Tower(int n,string BEG,string AUX, string END);
Euclid_AL()
{
    int m,n,r;
    cout<<"Enter the value of M: ";
    cin>>m;
    cout<<"Enter the value of N: ";
    cin>>n;
    do
    {
        if(m%n==0)
        {
            r=n;
        }
        else
        {
            r=m%n;
            m=n;
            n=r;
        }
    }while(m%n!=0);
cout<<"The GCD is= "<<r<<endl<<"Last value of M = "<<m<<endl<<"Last value of N= "<<n<<".";
}
Tower_Hanoi()
{
    int n;
    cout<<"Enter the number of discs: ";
    cin>>n;
    Tower(n,"Tower 1","Tower 2","Tower 3");
}
void Tower(int n,string BEG,string AUX, string END)
{
   if(n==1)
   {
       cout<<"Move the disc from "<<BEG<<" to "<<END<<endl;
   }
   else
   {
   Tower(n-1,BEG,END,AUX);
   cout<<"Move the disc from "<<BEG<<" to "<<END<<endl;
   Tower(n-1,AUX,BEG,END);
   }
}
int main()
{
    int choice;
    cout<<"Enter your choice: "<<endl<<"1. Euclid's Algorithm"<<endl<<"2. Tower of Hanoi"<<endl;
    cin>>choice;
    switch(choice)
    {
case 1:
    Euclid_AL();
    break;
case 2:
    Tower_Hanoi();
    break;
default:
    cout<<"Invalid choice!"<<endl;
    }
    return 0;
}
