#include<stdio.h>
int matrix[100][100];
int n,m;
bool juge(int aim){
    int i,j;
    i=0;
    j=m-1;
    while(j>=0&&i<=n-1){
        if(aim==matrix[i][j]){
            return true;
         }else if(aim<matrix[i][j]){
            j--;
         }else{
            i++;
         }
    }
    return false;
}
int main(){
    int i,j;
    int aim;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    while(scanf("%d",&aim)!=EOF){
        if(juge(aim)){
            printf("find the aim number\n!");
        }else{
            printf("can not find the aim number!\n");
        }
    }
    return 0;
}
