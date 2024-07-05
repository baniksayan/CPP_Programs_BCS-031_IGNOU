#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        if (x == INT_MIN) {
            return 0; // Handle the special case where x is INT_MIN to prevent overflow
        }
        int n = abs(x); // Take the absolute value of x to work with positive integers
        int r = 0; // Initialize the result variable to store the reversed number

        while (n != 0) {
            // Check for overflow before multiplying r by 10
            if (r > (INT_MAX / 10)) {
                return 0;
            }
            r *= 10; // Shift the result one place to the left
            // Check for overflow before adding the next digit
            if (r > (INT_MAX - (n % 10))) {
                return 0;
            }
            r += (n % 10); // Add the last digit of n to the result
            n /= 10; // Remove the last digit from n
        }
        
        if (x < 0) {
            r = -r; // If x was originally negative, make the result negative
        }
        
        return r; // Return the reversed integer
    }
};

int main() {
    // Test the reverse function
    Solution solution;
    int x = 123; // Replace with your input
    int result = solution.reverse(x);
    cout << "Reversed: " << result << endl;

    return 0;
}
