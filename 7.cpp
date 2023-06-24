#include <iostream>
#include <vector>

void moveZeroes(std::vector<int>& nums) {
    int n = nums.size();
    int nextNonZeroIndex = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[nextNonZeroIndex] = nums[i];
            nextNonZeroIndex++;
        }
    }

    // Fill the remaining elements with zeros
    for (int i = nextNonZeroIndex; i < n; i++) {
        nums[i] = 0;
    }
}

int main() {
    std::vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    std::cout << "Output: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
