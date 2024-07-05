#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(2 * n);

    for (int i = 0; i < n; i++) {
        result[i] = result[i + n] = nums[i];
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> concatenatedArray = getConcatenation(nums);

    for (int num : concatenatedArray) {
        cout << num << " ";
    }

    return 0;
}
