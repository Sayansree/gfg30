/*
1. Secret Cipher 
Hard Accuracy: 100.0% Submissions: 868 Points: 8
Geek wants to send an encrypted message in the form of string S to his friend Keeg along with instructions on how to decipher the message. To decipher the message, his friend needs to iterate over the message string from left to right, if he finds a '*', he must remove it and add all the letters read so far to the string. He must keep on doing this till he gets rid of all the '*'.
Can you help Geek encrypt his message string S? 

Note: If the string can be encrypted in multiple ways, find the smallest encrypted string. 

Example 1:

Input: S = "ababcababcd"
Output: ab*c*d
Explanation: We can encrypt the string 
in following way : "ababcababcd" -> 
"ababc*d" -> "ab*c*d"
Example 2:

Input: S = "zzzzzzz"
Output: z*z*z
Explanation: The string can be encrypted 
in 2 ways: "z*z*z" and "z**zzz". Out of 
the two "z*z*z" is smaller in length.
Your Task: 
You don't need to read input or print anything. Complete the function secretCipher() which takes the message string S as input parameter and returns the shortest possible encrypted string.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints: 
1 ≤ |S| ≤ 105
*/
// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// return a string formed by compressing string s
// do not print anything

class Solution{
    public:
    string compress(string s)
    {
        int ptr=s.length()-1;
        string str="";
        while(ptr>0)
        {
            if(ptr%2==0)
               str= s.at(ptr--)+str;
            else
               if (s.substr(0,ptr/2+1)==s.substr(ptr/2+1,ptr/2+1)){
                    str="*"+str;
                    ptr=ptr/2;
               }else
                str= s.at(ptr--)+str;
        }
        str=s.at(0)+str;
        return str;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        cout<< obj.compress(s) << "\n";
    }
    return 0;
}
  // } Driver Code Ends
