#include <iostream>
using namespace std;

int main(){
    float a = 10.421;
    int b = (int) a;  // or use static_cast<float>(a)
    cout << b << endl;
    cout << a << endl;
    return 0;
}