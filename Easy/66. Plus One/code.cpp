class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1]!=9){
           digits[digits.size()-1]+=1;
        }
        else{
        for(int i=digits.size()-1;i>=0;i--){
        if(i==0 && digits[i]==9){
            digits[i]=1;
            digits.emplace_back(0);
        }
        else{
            digits[i]=0;
            if(digits[i-1]!=9){
                digits[i-1]++;
                break;
            }
        }
        }
        }
        return digits;
    }
};
