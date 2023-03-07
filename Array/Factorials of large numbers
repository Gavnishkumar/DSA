//  problem is to find factorial of large number and store in vector every block contain one digit 
//  Time complexity O(N2) and space complexity O(n)
//************************CODE*******************************//
vector<int> factorial(int n){
        
        vector<int>res;
        res.push_back(1);
        
        for(int j =2;j<=n;j++){
            int carr =0;
            for(int i =0; i<res.size();i++){
                int val = res[i]*j+carr;
                res[i] = val%10;
                carr = val/10;
            }
            
            while(carr!=0){
                res.push_back(carr%10);
                carr/=10;
            }
        }
        reverse(res.begin(),res.end());
        return res;   
    }
