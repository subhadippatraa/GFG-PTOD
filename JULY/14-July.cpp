void segregate0and1(vector<int> &arr) {
    // Two approaches to segregate 0s and 1s

    // 1st approach: Count the number of 0's and 1's (TC = O(2N) ~ O(N))
    /*
    int n = arr.size();
    int ze = 0; // Counter for number of 0's
    int one = 0; // Counter for number of 1's

    // Count the number of 0's and 1's
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) 
            ze++;
        else
            one++;
    }

    // Fill the array with 0's first
    int i = 0;
    while(ze--)
        arr[i++] = 0;

    // Then fill the array with 1's
    while(one--)
        arr[i++] = 1;
    */

    // 2nd approach: Two-pointer approach (TC = O(N))

    int n = arr.size();
    int l = 0; 
    int r = n - 1; 

    // Process the array from both ends
    while(l < r) {
        // Increment left pointer if it's already at a 0
        while(l < n && arr[l] == 0)
            l++;
        
        // Decrement right pointer if it's already at a 1
        while(r >= 0 && arr[r] == 1)
            r--;
        
        // If left is still less than right, swap the elements
        if(l < r) {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }
}
