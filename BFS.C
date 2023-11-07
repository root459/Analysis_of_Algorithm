#include<stdio.h>
int a[20][20] , q[20] , visited[20] ,n,i,j,f=-1,r=0;

void bfs(int v){
 q[++r]=v;
 visited[v]=1;
 while(f<=r){
 for(i=1;i<=n;i++){
 if(a[v][i]&& !visited[i]){
 visited[i]=1;
 q[++r]=i;
 } //for loop close
 } //if close
 f++;
 v=q[f];     
 } //while loop
 } //func close

 void main(){
 int v;
 printf("\n enter the no. oif vertices:");
 scanf("%d", &n);
 for(i=1;i<=n;i++){
 q[i]=0;
 visited[i]=0;
 }//for loop

 printf("\Enter Graph data in matrix:");
 for(i=1;i<=n;i++){
 for(j=1;j<=n;j++){
 scanf("%d" ,&a[i][j]);
 }
 }
 printf("Enter the starting vertex:");
 scanf("%d" ,&v);
 bfs(v);
 printf("\n the node which are reachable are:");
 for(i=1;i<=n;i++){
 if(visited[i]){
 printf("%d\t" ,q[i]);
 }
 else{
 printf("\n BFS is not Possible");
}
}
getch();
 }//main close
