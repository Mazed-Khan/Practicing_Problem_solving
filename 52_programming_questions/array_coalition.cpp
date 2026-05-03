#include <iostream>

using namespace std;

void merge_arrays(int arr1[], int n1, int arr2[], int n2) {
    int merged_arr[n1 + n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            merged_arr[k++] = arr1[i++];
        } else {
            merged_arr[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        merged_arr[k++] = arr1[i++];
    }

    while (j < n2) {
        merged_arr[k++] = arr2[j++];
    }

    for (int l = 0; l < n1 + n2; ++l) {
        cout << merged_arr[l] << (l == n1 + n2 - 1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n1, n2;
        cin >> n1;
        int arr1[n1];
        for (int i = 0; i < n1; ++i) {
            cin >> arr1[i];
        }

        cin >> n2;
        int arr2[n2];
        for (int i = 0; i < n2; ++i) {
            cin >> arr2[i];
        }

        merge_arrays(arr1, n1, arr2, n2);
    }
    return 0;
}