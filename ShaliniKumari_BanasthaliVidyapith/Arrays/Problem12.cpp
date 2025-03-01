#include <iostream>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();
    int total = m + n;
    int i = 0, j = 0;
    vector<int> merged;
    
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged.push_back(nums1[i]);
            i++;
        } else {
            merged.push_back(nums2[j]);
            j++;
        }
    }
    while (i < m) {
        merged.push_back(nums1[i]);
        i++;
    }
    while (j < n) {
        merged.push_back(nums2[j]);
        j++;
    }
    if (total % 2 == 0) {
        int mid = total / 2;
        return (merged[mid - 1] + merged[mid]) / 2.0;
    } else {
        int mid = total / 2;
        return merged[mid];
    }
}
int main() {
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    double median = findMedianSortedArrays(nums1, nums2);
    cout << "Median: " << median << endl;
    
    return 0;
}
