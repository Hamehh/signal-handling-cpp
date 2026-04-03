#include <iostream>
using namespace std;

int main() {
    while (true) {
        cout << "Running..." << endl;
        for (volatile int i = 0; i < 50000000; i++);
    }
    return 0;
}
