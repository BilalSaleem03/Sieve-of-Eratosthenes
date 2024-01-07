#include<iostream>
using namespace std;
int main()
{
    int n ; 
    cout<<"Enter the number upto which you want prime numbers"<<endl;
    cin>>n;

    int arr[100]={0};
    for(int i = 2 ; i<=n ; i++)
    {
        if(arr[i]==0)
        {
            for(int j = (i*i); j<=n ; j+=i)
            {
                arr[j]=1;
            }
        }
    }

    for(int a = 2 ; a<=n;a++)
    {
        if(arr[a]==0)
        {
            cout<<a<<" ";
        }
    }
}