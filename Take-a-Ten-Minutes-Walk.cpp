#include<vector>
using namespace std;

bool isValidWalk(std::vector<char> walk) {
    int totalNs=0;
    int totalEw=0;
    if(walk.size()==10){
        
        for(char x : walk){
            
            switch(x){
                case 'n':
                    totalNs += 1;
                break;
                case 's':
                    totalNs -= 1;
                break;
                case 'e':
                    totalEw -= 1;
                break;
                case 'w':
                    totalEw += 1;
                break;
            }
            
        }
        
        if(totalNs==0 && totalEw ==0){
            return true;
        }
        
    }
    
    return false;
        
    
}
