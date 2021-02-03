/*
1. Transfiguration 
Easy Accuracy: 100.0% Submissions: 356 Points: 2
Professor McGonagall teaches transfiguration at Hogwarts. She has given Harry the task of changing himself into a cat. She explains that the trick is to analyze your own DNA and change it into the DNA of a cat. The transfigure spell can be used to pick any one character from the DNA string, remove it and insert it in the beginning. 
Help Harry calculates minimum number of times he needs to use the spell to change himself into a cat.

Example 1:

Input: 
A = "GEEKSFORGEEKS" 
B = "FORGEEKSGEEKS"
Output: 3
Explanation:The conversion can take place 
in 3 operations:
1. Pick 'R' and place it at the front, 
   A="RGEEKSFOGEEKS"
2. Pick 'O' and place it at the front, 
   A="ORGEEKSFGEEKS"
3. Pick 'F' and place it at the front, 
   A="FORGEEKSGEEKS"
Example 2:

Input: 
A = "ABC" 
B = "BCA"
Output: 2
Explanation: The conversion can take place 
in 2 operations:
1. Pick 'C' and place it at the front, 
   A = "CAB"
2. Pick 'B' and place it at the front, 
   A = "BCA"
Your Task:  
You don't need to read input or print anything. Complete the function transfigure() which takes strings A and B as input parameters and returns the minimum number of spells needed. If it is not possible to convert A to B then return -1.

Expected Time Complexity: O(max(|A|, |B|))
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ |A|, |B| ≤ 105
A and B consists of lowercase and uppercase letters of english alphabet only.
*/
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
