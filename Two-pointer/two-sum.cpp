vector<int> twoSum(vector<int>& numbers, int target) {
       vector<int> ans;
       int n=numbers.size();
       int i=0,j=n-1,sum=0;
       while(i<j){
        sum=numbers[i]+numbers[j];
        if(sum==target){
            ans.push_back(i+1);
            ans.push_back(j+1);
            break;
        }
        else if(sum<target){i++;}
        else{j--;}
       }
       return ans;
    }