class Solution {
public:
    // Function to Reverse the array
    void Reverse(vector<int>&arr, int start, int end)
    {
        while (start <= end)
        {
           swap(arr[start++], arr[end--]);
        }
}
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k%n;
        // Reverse first n-k elements
        Reverse(arr, 0, n - k - 1);
        // Reverse last k elements
        Reverse(arr, n - k, n - 1);
        // Reverse whole array
        Reverse(arr, 0, n - 1);
    }
};