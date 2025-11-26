#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows:";
    int n;
    cin>>n;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
}
return 0;
}