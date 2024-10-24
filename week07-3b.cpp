//LC1041
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dx[4]={1,0,-1,0};
        int dy[4]={0,1,0,-1};
        int x=0,y=0,dir=0;//��Vdir 0->�S 1->�U 2->�� 3->�W
        for(char c:instructions){
            if(c=='G') {
                x+=dx[dir];
                y+=dy[dir];
            }
            if(c=='L')  dir=(dir+3)%4;//-1 �˹L����A�|���t�ơA+4
            if(c=='R')  dir=(dir+1)%4;//+1�S�B�U�B"���B�W
        }
        if(x==0&&y==0)  return true;
        else if(dir==0) return false;
        else return true;
    }
};
