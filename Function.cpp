#include <iostream>
#include "FunctionOther.cpp"
using namespace std;

extern int funcOutside();     //extern은 지워도 된다

int i = 5;
int subfunc() {
    int i = funcOutside();
    cout << "return value : " << i << endl;
    
    return 0;
}

int main() {
    int i = subfunc();
    cout << "Scope resolution operator : " << ::i << endl;   //::은 해댱 영역 밖의 변수,펑션을 참조한다.
    return 0;
}

