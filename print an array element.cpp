//print an array element
//input=>{1,3,5,7}
//outpot=>1 3 5 7

#include<iostream>
#include<vector>
using namespace std;

void print(int arr[], int size, int index){
    //Base case
    if(index==size){
        return;
        
    }
    cout<<arr[index]<<" ";
    print(arr,size,index+1);
}

int main(){
    
    int arr[]={1,3,5,7};
    int size=4;
    
    print(arr,size,0);
    cout<<endl;
    
    return 0;
}
