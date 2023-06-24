#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> findErrorNums(const std::vector<int>& nums) {
    std::unordered_set<int> numSet;
    int duplicate = -1;
    int missing = -1;

    // Find the duplicate and missing numbers
    for (int num : nums) {
        if (numSet.count(num) > 0) {
            duplicate = num;
        }
        numSet.insert(num);
    }

    for (int i = 1; i <= nums.size(); i++) {
        if (numSet.count(i) == 0) {
            missing = i;
            break;
        }
    }

    return {duplicate, missing};
}

int main() {
    std::vector<int> nums = {1, 2, 2, 4};

    std::vector<int> result = findErrorNums(nums);

    std::cout << "Output: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
