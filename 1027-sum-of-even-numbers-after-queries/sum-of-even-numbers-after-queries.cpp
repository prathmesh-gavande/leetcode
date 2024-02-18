class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int evensum=0;
        vector<int>result;
        for(int &num : nums){
            if(num%2==0){
                evensum+=num;
            }
        }
        for(auto &query :queries){
            int prevnum=nums[query[1]];
            if(prevnum%2==0 && (prevnum+query[0])%2==0){
                evensum+=query[0];
                nums[query[1]]+=query[0];
            }else if(prevnum%2!=0 && (prevnum+query[0])%2==0){
                evensum+=query[0]+ nums[query[1]];
                nums[query[1]]+=query[0];
            }else if(prevnum%2==0 && (prevnum+query[0])%2!=0){
                evensum-=nums[query[1]];
                nums[query[1]]+=query[0];
            }else{
                nums[query[1]]+=query[0];
            }
            result.push_back(evensum);
        }
        return result;
    }
};