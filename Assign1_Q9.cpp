#include <iostream>
using namespace std;

int main(){
    int n1, n2, i;
    int gcd = 1;
    cout<<"Enter the two numbers you want to find the GCD and LCM of :";
    cin>>n1>>n2;
    //FOR GCD
    for (i=1;i<max(n1,n2); i++){
        if((n1%i==0) && (n2%i==0)){
            gcd = i;          
        }
    }
    cout<< "The GCD of the two numbers :" << gcd;
    //FOR LCM 
    int greater= max(n1,n2);
    int smallest = min(n1,n2);
    for (int i = greater; ; i += greater) {
        if (i % smallest  == 0)
            cout<< "The LCM of the two numbers :" << i;
            break;
            
    }
    
    return 0;
}
