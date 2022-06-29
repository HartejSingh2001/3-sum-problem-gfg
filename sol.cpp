class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        vector<int> v;
        bool found=false;
        int i=0,j=0;
        for(i=0;i<n;i++)
        {
            v.push_back(A[i]);
        }
        sort(v.begin(),v.end());
        
        for(i=0;i<n;i++)
        {
            int low=i+1,high=n-1;
            while(low<high)
            {
                int curr=v[i]+v[low]+v[high];
                if(curr == X)
                {
                    found=true;
                    return found;
                }
                if(curr<X)
                {
                    low++;
                }
                if(curr>X)
                {
                    high--;
                }
            }
        }
        return found;
    }

};
