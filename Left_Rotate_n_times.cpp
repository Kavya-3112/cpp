#include<iostream>
using namespace std;
void Left_Rotate_n_times(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    


    
    

}
int main(){
    int size,n;
    cin>>size>>n;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    if(n!=0){
        Left_Rotate_n_times(arr,0,n-1);
        Left_Rotate_n_times(arr,n,size-1);
        Left_Rotate_n_times(arr,0,size-1);

    }
    
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }

}
