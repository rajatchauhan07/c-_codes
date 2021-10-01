#include<iostream>

using namespace std;

int main(){
int n,k;

cout<<"\n enter the size of array ";
cin>>n;
int arr[n], temp[2*n];
cout<<"\n enter the array "<<endl;
for(int i=0,j=n;i<n;i++,j++){
    cin>>arr[i];
    temp[i]=arr[i];
    temp[j]=arr[i];
}

cout<<"\n when you don't want to continue please enter k=-1";
while(1){
    cout<<"\n plese enter k(the no. of rotation you want) "<<endl;
    cin>>k;
    cout<<endl;
    if(k==-1)
    break;
    k=k%n;
    for(int i=0; i<n;i++)
    cout<<temp[k+i]<<endl;
    cout<<endl;
}

    return 0;
}