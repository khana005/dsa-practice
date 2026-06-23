#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int arr[n];
    int positive =0, negative =0;
    
    for (int i=0; i<n; i++){
        cin >> arr[i];

        if (arr[i] > 0)
            positive++;
        
        else if (arr[i] < 0) 
            negative++;

        }
        cout << "Positive numbers: " << positive << endl;
        cout << "Negative numbers: " << negative << endl;
        return 0;
        

    }
