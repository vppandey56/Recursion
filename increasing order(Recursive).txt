//print in increasing order
//input=7
//output=1,2,3,4,5,6,7


#include<iostream>
using namespace std;

//Recursion function
void print(int n){
    //base case
    if (n==0){
        return;
        
    }
    
    
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
