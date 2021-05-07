class Solution {

public:

    bool isMonotonic(vector<int>& A) {
        int i=0 , j=0;

        //when array is in incresing order..
        while(i+1<A.size() && A[i]<=A[i+1]) {
            i++;
        }
        //when array is in decresing order..
        while(j+1<A.size() && A[j]>=A[j+1]) {
            j++;
        }
        return (i==A.size()-1)||(j==A.size()-1);

    }
};
