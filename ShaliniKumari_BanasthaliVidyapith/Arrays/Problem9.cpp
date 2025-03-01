#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int left = 0;           
    int right = n - 1;     
    int curr = 0;          
    
    while (curr <= right) {
        if (nums[curr] == 0) {
            swap(nums[curr], nums[left]);
            curr++;
            left++;
        }
        else if (nums[curr] == 2) {
            swap(nums[curr], nums[right]);
            right--;
        }
        else {
            curr++;
        }
    }
}
int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);
    
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
