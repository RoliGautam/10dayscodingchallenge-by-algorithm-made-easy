class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i = left; i <= right; i++){
            bool selfDividing = true;
            int workNum = i;
            while(workNum){
                //n-th digit is 0 or n-th digit of "num" cannot divide "num"
                if(workNum%10==0 || i%(workNum%10)!=0){
                    selfDividing = false;
                    break;
                }
                //if workNum<10, there won't be next iteration
                workNum/=10;
            }
            if(selfDividing) res.push_back(i);
        }
        return res;
    }
};
