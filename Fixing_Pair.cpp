class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        // your code here
       pair <int,int> count;
        int n = arr.size();
        int even , odd; 
        even=odd=0;
        for(int i =0;i<n;i++)
        {
            if(arr[i]%2 == 0)
            {
                even++;
            }
            else{
                odd++;
            }
           
        }
        count = make_pair(odd,even);
        return count;
    }
};
