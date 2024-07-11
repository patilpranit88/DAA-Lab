#include<iostream>
using namespace std;
bool binary(int arr[],int s,int e,int k){
    

   //Base case
   // Element is not found
   if(s>e)
   return false;

    int mid=s+(e-s)/2;
   //Element is found
   if(arr[mid]==k){
    return true;
   }


  

  if(arr[mid]<k){
   return  binary(arr,mid+1,e,k);
  }
  else{
    return binary(arr,s,mid-1,k);
  }

}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int k=0;
    cout<<"Present or not "<<binary(arr,0,5,k);
    return 0;
}