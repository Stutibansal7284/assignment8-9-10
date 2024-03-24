#include <iostream>
using namespace std;

int sum(int n){
    int total=0;
    for (int i=1;i<=n;i++) {
        int term=(i*(i+1))/2;
        total=total+term;
    }
    return total;
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<=0){
        cout <<"Invalid input. Please enter a positive number."<<endl;
    }else{
        int result=sum(n);
        cout<<"The sum of the series is: "<<result<<endl;
    }
    return 0;
}
