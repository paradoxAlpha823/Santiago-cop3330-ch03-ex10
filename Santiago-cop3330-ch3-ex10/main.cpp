#include <iostream>
using namespace std;

int main() {
        string operation;
        double n1=0;
        double n2=0;
        cout << "Enter an operation (+,-,*,/,plus,minus,mul,div) followed by two double values separated by a space: ";
        cin >> operation >> n1 >> n2;
        double out;
        if(operation=="plus" || operation=="+") out=n1+n2;
        else if(operation=="minus" || operation=="-") out=n1-n2;
        else if(operation=="mul" || operation=="*") out=n1*n2;
        else if(operation=="div" || operation=="/") out=n1/n2;
        cout << n1 << " " << operation << " " << n2 << " = " << out;

    return 0;
}
