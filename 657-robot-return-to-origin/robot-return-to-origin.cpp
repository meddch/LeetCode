class Solution {
public:
    bool judgeCircle(string moves) {
            int stp1=0;
    int stp2=0;

    for(int i=0; i<moves.size(); i++){

        if(moves[i]=='U'){
        stp1=stp1+1;
        }

        if(moves[i]=='D'){
        stp1=stp1-1;
        }

        if(moves[i]=='L'){
        stp2=stp2+1;
        }

        if(moves[i]=='R'){
        stp2=stp2-1;
        }



    }
    if(stp1==0 && stp2==0)
    return true;

    else return false;
    
    
    
}

};