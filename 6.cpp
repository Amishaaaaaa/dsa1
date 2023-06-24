#include <iostream>
#include <vector>
#include <unordered_set>

bool containsDuplicate(const std::vector<int>& nums) {
    std::unordered_set<int> numSet;

    for (int num : nums) {
        if (numSet.count(num) > 0) {
            // Duplicate element found
            return true;
        }
        numSet.insert(num);
    }

    // No duplicate elements found
    return false;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 1};
    bool result = containsDuplicate(nums);

    std::cout << "Output: " << std::boolalpha << result << std::endl;

    return 0;
}
