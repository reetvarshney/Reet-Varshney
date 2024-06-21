#include <stdio.h>

// Function to count the number of ways to divide the bar
int countSegments(int* candy, int n, int day, int month) {
    int count = 0; // Initialize the count of valid segments to 0

    // Iterate over each possible starting point of a segment of length 'month'
    for (int i = 0; i <= n - month; i++) {
        int sum = 0; // Initialize the sum of the current segment to 0

        // Calculate the sum of the current segment of length 'month'
        for (int j = 0; j < month; j++) {
            sum += candy[i + j]; // Add the element to the sum
        }

        // Check if the sum of the segment matches the 'day'
        if (sum == day) {
            count++; // Increment the count if the sum matches
        }
    }
    
    return count; // Return the total count of valid segments
}

int main() {
    int candy[] = {2, 2, 1, 3, 2}; // Array representing the candy bar
    int day = 4; // Raju's birth day
    int month = 2; // Raju's birth month
    int n = sizeof(candy) / sizeof(candy[0]); // Calculate the size of the candy array
    
    // Call the function to count the valid segments and store the result
    int result = countSegments(candy, n, day, month);
    
    // Print the result
    printf("Number of ways to divide the bar: %d\n", result);
    
    return 0; // Return 0 to indicate successful execution
}
