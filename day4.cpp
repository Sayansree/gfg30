// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{

	public:
	int find_min(int a[], int n, int k) {
        // Your code geos here
        int sum=0,sum2=0;
        for(int i=0;i<n;i++)
            sum+=a[i]/2;
        if(sum<k)return -1;
        for(int i=0;i<n;i++)
            sum2+=(a[i]-1)/2;
        if(sum2>=k)
            return 2*(k-1)+n+1;
        else
            return 2*sum2+n+(k-sum2);
    }

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cin >> k;
        Solution obj;
        cout << obj.find_min(a, n, k) << endl;
    }
    return 1;
}
  // } Driver Code Ends
