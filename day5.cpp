
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
       int r=n-1,c=m,x=0,y=-1;
       while(true){
           if(k<=c)return a[x][y+k];
           k-=c;y+=c;c--;
           if(k<=r)return a[x+k][y];
           k-=r;x+=r;r--;
           if(k<=c)return a[x][y-k];
           k-=c;y-=c;c--;
           if(k<=r)return a[x-k][y];
           k-=r;x-=r;r--;
       }
    }

};

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}  // } Driver Code Ends
