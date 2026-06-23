// #include <iostream>
// using namespace std;

// int main() {
//     int num = 10;

//     cout << "Value of num = " << num << endl;
//     cout << "Address of num = " << &num << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;

    cout << "num = " << num << endl;
    cout << "address = " << &num << endl;
    cout << "ptr = " << ptr << endl;

    return 0;
}