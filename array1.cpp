#include <iostream>>
using namespace std;
 int main() {
    int arr[] = {3,6,7,10,19};
    int n = 5;

    int min = arr[0];
    for (int i = 1; i< n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }

    }
    cout << min;

  


 }
