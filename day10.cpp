/*
1. Repeated String Match 
Medium Accuracy: 99.48% Submissions: 170 Points: 4
Given two strings A and B, find the minimum number of times A has to be repeated such that B becomes a substring of the repeated A. If B cannot be a substring of A no matter how many times it is repeated, return -1.

Example 1:

Input: A = "abcd", B = "cdabcdab"
Output: 3
Explanation: After repeating A three times, 
we get "abcdabcdabcd".
Example 2:

Input: A = "aa", B = "a"
Output: 1
Explanation: B is already a substring of A.
Your Task:  
You don't need to read input or print anything. Complete the function repeatedStringMatch() which takes strings A and B as input parameters and returns the minimum number of operations to complete the task. If it is not possible then return -1.

Expected Time Complexity: O(|A| * |B|)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ |A|, |B| ≤ 103
*/
// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{

    public:
    int repeatedStringMatch(string A, string B) 
    {
        int nA=A.length(),nB=B.length();
        for(int i =0; i <nA;i++)
        {
            if(A.at(i)!=B.at(0))continue;
            int ptrA= i +1 ,ptrB=1;
            while(ptrB<nB)
            {
                if(B.at(ptrB)==A.at(ptrA%nA))
                {
                    ptrA++;
                    ptrB++;
                }else if(ptrA>=nA)return -1;
                else break;
            }
            if (ptrB==nB)return ceil(1.0*ptrA/nA);
        }
        return -1;
    }
  
};

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution obj;
        cout<<obj.repeatedStringMatch(A,B)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends
