//2nd approach
//print a reverse array element
//input=>{1,3,5,7}
//outpot=>7 5 3 1
#include<iostream>
#include<vector>
using namespace std;

void print(int arr[],int index){
    //Base case
    if(index < 0){
        return;
        
    }
    cout<<arr[index]<<" ";
    print(arr,index-1);
    
}

int main(){
    
    int arr[]={1,3,5,7};
    int size=4;
    
    print(arr,size-1);
    cout<<endl;
    
    return 0;
}
