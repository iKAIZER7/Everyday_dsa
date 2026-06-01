class Solution {
public:
    void sortColors(vector<int>& arr) {
    // sort(arr.begin(),arr.end());
        int n=arr.size();
        int low = 0; // Pointer for 0
        int mid = 0; // Pointer for 1
        int high = n - 1; // Pointer for 2

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
        
    }
};