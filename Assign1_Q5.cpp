#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin >> n;
    int count=0;
    while (n>0){
        n=n/10;
        count=count+1;
    }
    cout<<"number of digits:"<<count;
    return 0;
}
