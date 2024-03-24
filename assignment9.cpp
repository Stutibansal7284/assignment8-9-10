#include <iostream>
using namespace std;

class myClass {
private:
    int num;
public:
    myClass() {}
    myClass(int N) { num = N; }
    void show() { cout<<num<<endl; }

    friend myClass operator+(myClass obj1, myClass obj2){
    myClass result;
    result.num=obj1.num+obj2.num;
    return result;
	}
    friend myClass operator-(myClass obj1, myClass obj2){
    myClass result;
    result.num=obj1.num-obj2.num;
    return result;
	}
};

int main() {
    myClass obj1(20), obj2(10);
    myClass obj3=obj1+obj2; 
    myClass obj4=obj1-obj2; 
    
    cout<<"obj1: ";
    obj1.show();
    cout<<"obj2: ";
    obj2.show();
    cout<<"obj1+obj2: ";
    obj3.show();
	cout<<"obj1-obj2: ";
    obj4.show();
    return 0;
}
