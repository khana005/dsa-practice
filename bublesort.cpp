#include <iostream>
using namespace std;
// int main(){
//     int arr[4] = {40, 10, 30, 20};
//     for(int i=0; i<3; i++){
//         for (int j=0; j<3-i; j++){
//             if(arr[j] > arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
            
//             }
//         }
//     }
//     for(int i=0; i<4; i++){
//         cout << arr[i] <<" ";

//     }
//     return 0;
// }
int main(){
    int arr[4]= {30,15,25,10};
    for (int i=0; i<3; i++){
        for (int j=0; j<3-i; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }
    for(int i=0; i<4; i++){
        cout << arr[i] << " ";
    }
    return 0;
}