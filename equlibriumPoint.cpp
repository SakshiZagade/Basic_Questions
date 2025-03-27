class Solution {
  public:
    // Function to find equilibrium point in the array.
      int findEquilibrium(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return -1; // Edge case: Empty array
        if (n == 1) return 0;  // Single element is always an equilibrium point

        int totalSum = accumulate(arr.begin(), arr.end(), 0); // Calculate total sum
        int leftSum = 0;

        for (int i = 0; i < n; i++) {
            totalSum -= arr[i]; // Right sum = totalSum - arr[i]
            
            if (leftSum == totalSum) {
                return i; // Return 0-based index
            }

            leftSum += arr[i]; // Update left sum
        }
        return -1; // No equilibrium point found
    }

};
