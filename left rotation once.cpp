#include<iostream>
using namespace std;
void Left_Rotate(int arr[],int s){
    int temp=arr[0];
    for(int i=0;i<s;i++){
        arr[i]=arr[i+1];


    }
    arr[s-1]=temp;
    

}
int main(){
    int a,i;
    cin>>a;
    int arr[a];
    for(i=0;i<a;i++){
        cin>>arr[i];

    }
    Left_Rotate(arr,a);
    for(i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }

}
