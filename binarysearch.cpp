 #include<iostream>
 using namespace std;

 int binarysearch(int arr[], int f, int l, int x){

if(f<=l){
     int mid = (f+l)/2;

     if(arr[mid]==x)
      return mid;

     if(arr[mid]<x)
     return binarysearch(arr, mid+1, l,x);
     
     return binarysearch(arr, f,mid-1,x);
     
 } 
    
    return -1;
 }

 int main(){

  int x,n,ind;

  cout<<"\n enter the size of array "<<endl;
  cin>>n;

  int arr[n];

  cout<<"\n enter the elements in sorted manner"<<endl;
  for(int i=0; i<n;i++)
  cin>>arr[i];

  cout<<"\n enter the element you want to search "<<endl;
  cin>>x;
  ind=binarysearch(arr,0,n-1 ,x);

  cout<<"\n index where we found the element "<<ind<<endl;
  // -1 means we are unable to find your element

     return 0;
 }
