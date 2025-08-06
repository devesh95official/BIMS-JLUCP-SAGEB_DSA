// just a glimpse of quick and merge sort in c++
#include <iostream>
#include <vector>
#include <algorithm>

// This code provides a glimpse of quick sort and merge sort algorithms in C++
// It sorts a vector of integers in ascending order and prints the sorted numbers.
//complexity: O(n log n) for both quick sort and merge sort
//worst case: O(n^2) for quick sort if the pivot is always the smallest or largest element
//merge sort has a stable O(n log n) complexity in all cases

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; ++j) {
            if (arr[j] < pivot) {
                ++i;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[high]);
        quickSort(arr, low, i);
        quickSort(arr, i + 2, high);
    }
}

void merge(std::vector<int>& arr, int left, int mid, int right) {
    std::vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;
    while (i <= mid && j <= right) {
        if (arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];
    for (int i = left; i <= right; ++i) {
        arr[i] = temp[i - left];
    }
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};
    // quickSort(numbers, 0, numbers.size() - 1);
    mergeSort(numbers, 0, numbers.size() - 1);
    std::cout << "Sorted numbers: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}