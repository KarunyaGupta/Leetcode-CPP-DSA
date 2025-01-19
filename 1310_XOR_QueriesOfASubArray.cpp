class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> xorArray(n + 1, 0);
        for (int i = 0; i < n; i++) {
            xorArray[i + 1] = xorArray[i] ^ arr[i];
        }
        
        vector<int> answer;
        for (auto query : queries) {
            int left = query[0];
            int right = query[1];
            answer.push_back(xorArray[right + 1] ^ xorArray[left]);
        }
        
        return answer;
    }
};
