// #include <iostream>
// using namespace std;

// int main() {
//     int start = 2;
//     for (int i = 1; i <= 4; i++) {
//         for (int j = 0; j < i; j++) {
//             cout << start + j;
//         }
//         cout << endl;
//         start += i;
//     }
//     start = 8;// for second half
//     for (int i = 4; i >= 1; i--) {
//         for (int j = 0; j < i; j++) {
//             cout << start + j;
//         }
//         cout << endl;
//         start -= i;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int start = 2;
    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < i; j++) {
            cout << start + j;
        }
        cout << endl;
        start += i;
    }
    start -= 4; // for second half
    for (int i = 4; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << start + j;
        }
        cout << endl;
        start -= (i - 1);
    }
    return 0;
}

