
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "Lower case" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "Upper case" << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "Numeric" << endl;
    }
    else {
        cout << "Not a letter or a digit" << endl;
    }

    return 0;
}
