#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> values = {1, 2, 4, 4, 6, 7, 9};
    int target = 4; // The value to find

    // Use lower_bound to find the first position where target could be inserted
    auto lower = std::lower_bound(values.begin(), values.end(), target);
    if (lower != values.end() && *lower == target) {
        int index = std::distance(values.begin(), lower); // Calculate the index
        std::cout << "Found " << target << " at index " << index << std::endl;
    } else {
        std::cout << target << " not found" << std::endl;
    }

    // Use upper_bound to find the first position where target could be inserted
    auto upper = std::upper_bound(values.begin(), values.end(), target);
    if (upper != values.end() && *upper == target) {
        int index = std::distance(values.begin(), upper); // Calculate the index
        std::cout << "Found " << target << " at index " << index << std::endl;
    } else {
        std::cout << target << " not found" << std::endl;
    }

    return 0;
}
