#include<stdio.h>
#define N 4

int findingPath(int maze[N][N],int X,int Y,char path[],int index){
    if(X==N-1&&Y==N-1){
        printf("%s\n",path);
    }
    if(X>=N||Y>=N||maze[X][Y]==0){
        return 0;
    }
maze[X][Y]=0;
//down
path[index]='D';
if(findingPath(maze,X+1,Y,path,index+1)){
    return 1;
}
//right
path[index]='R';
if(findingPath(maze,X,Y+1,path,index+1)){
    return 1;
}
//backtrack
maze[X][Y]=1;

return 0;
}
int main(){
    int maze[N][N]={{1,0,0,0},
               {1,1,0,1},
               {0,1,0,0},
               {1,1,1,1} };

    char path[N*N];
    findingPath(maze,0,0,path,0);
    //printf("%s",result);
      return 0;        

}