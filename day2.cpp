// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++


class Solution{
	public:
    	long long findNth(long long N)
    {
        long long mult=1;
        long long result=0;
        while(N>0){
            result+=(N%9)*mult;
            mult*=10;
            N/=9;
        }// code here.
        return result;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n , ans;
		cin>>n;
		Solution obj;
		ans = obj.findNth(n);
		cout<<ans<<endl;
	}
}

  // } Driver Code Ends
