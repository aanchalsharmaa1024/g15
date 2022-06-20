
//find the first non-repeating element in an array

// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends

class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        unordered_map<int,int> umap;
        for(int i=0; i<n; i++)
        umap[arr[i]]++;
        
        for(int i=0; i<n; i++)
        {
            int key=arr[i];
            
            auto temp=umap.find(key);
            int val=temp->second;
            if(val==1)
            return key;
        }
        return -1;
        
    } 
  
};


// { Driver Code Starts.

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.firstNonRepeating(arr,n)<<endl;
    }
}
  // } Driver Code Ends
  
//subarrays with equal 1's and 0's
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here

        long long count=0, ans=0;
        unordered_map<long long , long long>mp;
        mp[0]=1;
        for(int i=0; i<n; i++){
            count += (arr[i]==1 ? 1:-1);
            ans += mp[count];
            mp[count]++;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
  // } Driver Code Ends

//finding length of largest subarray with equal no. of 1's and 0's
#include <iostream>
#include<unordered_map>
using namespace std;
int maxlen(int arr[], int n){
    unordered_map<int,int>hM;

    int sum=0;
    int max_len=0;
    int ending_index=-1;

    for(int i=0; i<n; i++)
        arr[i] = (arr[i]==0) ? -1 : 1;
        for(int i=0; i<n; i++){
            sum+=arr[i];

            if(sum==0){
                max_len=i+1;
                ending_index=i;
            }

            if(hM.find(sum)!=hM.end()){
                if(max_len<i-hM[sum]){
                    max_len=i-hM[sum];
                    ending_index=i;
                }
            }
            else
            hM[sum]=i;
        }
        return max_len;

}

int main(){
    int arr[]={1,0,0,1,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxlen(arr,n);

    return 0;
}



//find if there is a subarray with 0 sum
// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_map<int,bool>sumMap;
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            
            if(sum==0 || sumMap[sum]==true)
            return true;
            
            sumMap[sum]=true;
        }
        return false;
    }
};

// { Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}  // } Driver Code Ends




//minimum platform problem
// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int pt_no=1;
    	int j=0; 
    	int i=1;
    	while(i<n){
    	    if(arr[i]<=dep[j])
    	    pt_no++;
    	    
    	    else
    	    j++;
    	    
    	    i++;
    	}
    	return pt_no;
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends



//mimimize the heights II
// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        if(n==1)
        return 0;
        
        sort(arr,arr+n);
        
        int diff=arr[n-1]-arr[0];
       
        for(int i=1; i<n;i++){
            if(arr[i]-k<0)
            continue;
           int maxa=max(arr[i-1]+k,arr[n-1]-k);
            int mini=min(arr[0]+k,arr[i]-k);
            diff=min(diff,maxa-mini);
        }
        return diff;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends





