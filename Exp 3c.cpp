#include <iostream>
using namespace std;
int main() {
    bool a, b;
    cout << "Enter the value for a (1 for true, 0 for false): ";
    cin >> a;
    cout << "Enter the value for b (1 for true, 0 for false): ";
    cin >> b;
    cout << "\nResults of logical operations:\n";
    cout << "a AND b (a && b): " << (a && b) << endl;
    cout << "a OR b (a || b): " << (a || b) << endl;
    cout << "NOT a (!a): " << (!a) << endl;
    cout << "NOT b (!b): " << (!b) << endl;
    return 0;
}
