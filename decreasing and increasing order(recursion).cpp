//print decreasing and increasing order
//input=7
//output=7,6,5,4,3,2,1,1,2,3,4,5,6,7


#include<iostream>
using namespace std;

//Recursion function
void print(int n){
    //base case
    if (n==0){
        return;
        
    }
    cout<<n<<" ";
    
    //Recursion call
    print(n-1);

    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    
    cout<<"Printing in decreasing order"<<endl;
    //function call
    print(n);
    cout<<endl;
    
    return 0;
}
