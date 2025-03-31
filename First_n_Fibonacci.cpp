class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    int findFibo(int n)
    {
        if(n==0)
        {
            return 0;
        }
        else if(n==1)
        {
            return 1;
        }
        else{
            return findFibo(n-2)+findFibo(n-1);
        }
    }
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(findFibo(i));
        }
        return ans;
    }
};
