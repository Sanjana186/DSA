#include<iostream>
using namespace std;

void printdigits(int n){
   
    while(n!=0){
        int digits=n%10;
        cout<<digits<<endl;
        n=n/10;
    }
}
void sumofdigits(int n){
    int sum=0;
    while(n!=0){
        int digits=n%10;
        sum=sum+digits;
        n=n/10;
    }
    cout<<"Sum of digits is: "<<sum<<endl;
}
void count(int n){
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    cout<<"Count of digits is: "<<count<<endl;
}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    sumofdigits(n);
    count(n);
    printdigits(n);
    return 0;
}