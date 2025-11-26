#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of rows:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            cout<<" ";
        }
        int m=1;
        for(int k=i;k>=0;k--){
            cout<<m;
            m++;
          

        }
        if(i!=0){
            for(int l=i;l>=1;l--){
                cout<<l;
                
            }
        }
        cout<<endl;
    }
    return 0;
}