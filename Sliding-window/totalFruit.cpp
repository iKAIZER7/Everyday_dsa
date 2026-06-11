class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> count;
        int n=fruits.size();
        int l=0,h=0,res=INT_MIN;
        while(h<n){
	count[fruits[h]]++;
	while(count.size()>2){
		count[fruits[l]]--;
		if(count[fruits[l]]==0){
			count.erase(fruits[l]);
}
l++;
}
res=max(res, h-l+1);   
h++;

}return res;
    }
};