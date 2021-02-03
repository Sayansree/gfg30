// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	int n=A.length();
    	if(B.length()!=n)
    	    return -1;
    	int ctr=0,ptr=n-1;
    	int freq[256];
    	memset(freq, 0, sizeof(freq));
    	while(ptr>=ctr)
    	{
    	   if(A.at(ptr-ctr)!=B.at(ptr)){
    	       freq[A.at(ptr-ctr)]++;
    	        ctr++;
    	   }else
    	        ptr--;
    	}
    	
    	for(int i=0;i<ctr;i++)
    	    freq[B.at(i)]--;
    	for(int i=0;i<256;i++)
    	    if(freq[i]!=0)
    	        return -1; 
    	return ctr;
    }
};

// { Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  // } Driver Code Ends
