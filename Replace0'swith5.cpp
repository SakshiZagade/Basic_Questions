class Solution {
  public:
    int convertFive(int n) {
        int result = 0, place = 1;
        
        if (n == 0) return 5; // Special case: If n is 0, return 5
        
        while (n > 0) {
            int digit = n % 10;
            if (digit == 0) {
                digit = 5; // Replace 0 with 5
            }
            result = digit * place + result;
            place *= 10;
            n /= 10;
        }
        
        return result;
    }
};
