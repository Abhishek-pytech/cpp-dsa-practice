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

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } 
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergesort(vector<int>& arr, int low, int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr,low, mid, high);

}

void callingmergesort(){
    vector<int> arr = {10, 7, 8, 9, 1, 5};

    int n = arr.size();

    mergesort(arr, 0, n - 1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}






int partition(vector<int>& arr, int low, int high) {

    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j) {

        while(arr[i] <= pivot && i < high) {
            i++;
        }

        while(arr[j] > pivot && j > low) {
            j--;
        }

        if(i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);

    return j;
}

void quickSort(vector<int>& arr, int low, int high) {

    if(low < high) {

        int pIndex = partition(arr, low, high);

        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

// Only one function call inside main
void callingquicksort() {

    vector<int> arr = {10, 7, 8, 9, 1, 5};

    int n = arr.size();

    quickSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    callingmergesort();

    return 0;
}
