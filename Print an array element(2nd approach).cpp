//2nd approach
//print an array element
//input=>{1,3,5,7}
//outpot=>1 3 5 7
#include<iostream>
#include<vector>
using namespace std;

void print(int arr[],int size){
    //Base case
    if(size==0){
        return;
        
    }
    cout<<arr[0]<<" ";
    print(arr+1,size-1);
    
}

int main(){
    
    int arr[]={1,3,5,7};
    int size=4;
    
    print(arr,size);
    cout<<endl;
    
    return 0;
}
