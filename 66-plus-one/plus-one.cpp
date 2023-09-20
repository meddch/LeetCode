class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for(int i=digits.size()-1;i>=0;i--){
           digits[i]++;         
           if(digits[i] != 10){ 
               return digits;  
           } 
            digits[i] = 0;    
        }
        
       
        std::vector<int> result={1}; 
        result.reserve(digits.size());
        result.insert(result.end(),digits.begin(),digits.end());
        return result;
    }
};