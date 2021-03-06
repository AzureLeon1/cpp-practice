#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char str[80];
    memset(str, '@', sizeof(str));

    // int 用 memset 只能填充0和-1
    int arr[80];
    memset(arr, 0, sizeof(arr));

    int arr1[10][10];
    memset(arr1, -1, sizeof(arr1));
    cout << arr1[5][5];

    // init 用 fill 填充任意值
    int arr2[80];
    fill(arr2, arr2+80, 7);

    return 0;
}