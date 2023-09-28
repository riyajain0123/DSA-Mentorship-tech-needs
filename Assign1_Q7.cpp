#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number";
    cin >> num;
    int place = 1;
    int ans = 0;
    while(num != 0){
        int last = num % 10;
        int power=1;
        for(int i=1;i<=last-1;i++){
            power=power*10;
        }
        ans = ans + place * power;
        num = num / 10;
        place++;
    }
    cout<<ans;
    return 0;
}
 
