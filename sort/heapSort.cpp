#include <iostream>
using namespace std;
int main(){
    int a = 100;
    int b = 200;
    auto f = [=](){
        return a + b;
    };
    cout << f();
}