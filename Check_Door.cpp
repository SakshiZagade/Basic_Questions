class Solution {
  public:
    int* checkDoorStatus(int N) {
        int* doors = new int[N](); // Dynamically allocated array initialized to 0

        // Toggle perfect square doors to open (1)
        for (int i = 1; i * i <= N; i++) {
            doors[i * i - 1] = 1; // Marking perfect square doors as open
        }

        return doors; // Returning dynamically allocated array
    }
};
