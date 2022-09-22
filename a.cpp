vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j,k;
        vector<int> a;
        vector<vector<int>> b;
        for(int i = 0;i<nums.size() - 2;i++){
            j = i + 1;  k = j + 1;
            while(j < nums.size() - 1){
              
                if(k < nums.size()){
                    if(nums[i] + nums[j] + nums[k] == 0){
                    a.push_back(nums[i]);
                    a.push_back(nums[j]);
                    a.push_back(nums[k]);
                        
                    }
                      if(b.empty() && !a.empty()) b.push_back(a);
            
                   else if(!a.empty() && find(b.begin(), b.end(), a)==b.end()){
                    b.push_back(a);
                       cout<<(find(b.begin(), b.end(), a)==b.end());
                   }
            
            a.clear();
                    
                }
                else{
                    j++;
                    k = j + 1;
                }
                k++;
            }
            if(b.empty() && !a.empty()) b.push_back(a);
            
            else if(!a.empty() && find(b.begin(), b.end(), a)==b.end()){
                b.push_back(a);
            }
            //cout<<(find(b.begin(), b.end(), a)!=b.end());
            a.clear();
        }
        return b;
