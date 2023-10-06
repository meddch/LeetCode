class Solution {
public:
    bool isRobotBounded(string s) {
        int x = 0;
        int y = 0;
        char dir = 'N';
        int n = s.size();
        for(int i=0; i<n; i++){
            if(s[i] == 'G'){
                switch(dir){
                    case 'N': y += 1; break;
                    case 'S': y -= 1; break;
                    case 'E': x += 1; break;
                    case 'W': x -= 1;
                }
            }
            else if(s[i] == 'L'){
                switch(dir){
                    case 'N': dir = 'W'; break;
                    case 'S': dir = 'E'; break;
                    case 'E': dir = 'N'; break;
                    case 'W': dir = 'S';
                }
            }
            else{
                switch(dir){
                    case 'N': dir = 'E'; break;
                    case 'S': dir = 'W'; break;
                    case 'E': dir = 'S'; break;
                    case 'W': dir = 'N';
                }
            }
        }
        if(x == 0 && y == 0) return true;
        if(dir == 'N') return false;
        return true;
    }
};