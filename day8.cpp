/*

*/
// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution{
    
    public:
    int maxCandy(int height[], int n) 
    { 
        int i=0,j=n-1;
        if (n==1)return 0;
        int area=min(height[0],height[n-1])*(n-2);
        while(i<j){
            int newArea=   min(height[i],height[j])*(j-i-1);
            if(newArea>area)
               area=newArea;
            else if(height[i]<height[j])
                    i++;
                    else
                    j--;
                
        } 
        return area;
    }   
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int height[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>height[i];
    	}
    	
    	Solution obj;
    	
    	cout << obj.maxCandy(height,n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
