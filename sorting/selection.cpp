#include <bits/stdc++.h>
using namespace std;

void selection_sort() {
    int arr[] = {12, 5, 8, 3, 15, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        int min_index = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        swap(arr[i], arr[min_index]);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void bubble_sort() {
    int arr[] = {5, 3, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool swapped = false;


    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped== false){
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void insertion_sort(){
    int arr[] = {10, 5, 10, 3, 8, 3,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++){

            int j=i;
            while(j>0 && arr[j-1]>arr[j] && arr[j-1]!=arr[j]){
                swap(arr[j-1],arr[j]);
                j--;
            }
        }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
}

void quick_sort(int arr[], int low, int high) {
    if (low >= high) {
        return;
    }

    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    int pivot_index = i + 1;
    swap(arr[pivot_index], arr[high]);

    quick_sort(arr, low, pivot_index - 1);
    quick_sort(arr, pivot_index + 1, high);
}



int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}