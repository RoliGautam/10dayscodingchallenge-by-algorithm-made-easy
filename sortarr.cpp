class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {

           vector<int> even;

           vector<int> odd;

        for(int i=0;i<A.size();i++) {

            if(A[i]%2==0)
                even.push_back(A[i]);
            else
                odd.push_back(A[i]);
        }
        A.clear();

        A.insert(A.end(),even.begin(),even.end());

        A.insert(A.end(),odd.begin(),odd.end());

        return A;
    }
};
