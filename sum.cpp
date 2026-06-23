#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int i = 0;
    int sum = 0;

    while (i < 5) {
        sum = sum + arr[i];
        i++;
    }

    cout << sum;

    return 0;
}