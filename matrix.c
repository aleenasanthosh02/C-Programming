#include<stdio.h>

int main()
{
int row1,row2,col1,col2,arr1[10][10],arr2[10][10],i,j,sum[10][10];

printf("Enter the Number of Rows and Columns of first Matrix:");
scanf("%d,%d",&row1,&col1);
printf("Enter the Elements of first Matrix: ");
for(i=0;i<row1;i++) {
for(j=0;j<col1;j++) {
scanf("%d",&arr1[i][j]); } }
for(i=0;i<row1;i++) {
for(j=0;j<col1;j++) {
printf("%d ",arr1[i][j]); }
printf("\n");
}

printf("Enter the Number of Rows and Columns of second Matrix:");
scanf("%d,%d",&row2,&col2);
printf("Enter the Elements of second Matrix: ");
for(i=0;i<row2;i++) {
for(j=0;j<col2;j++) {
scanf("%d",&arr2[i][j]); } }
for(i=0;i<row2;i++) {
for(j=0;j<col2;j++) {
printf("%d ",arr2[i][j]); }
printf("\n");
}
if(row1 != row2 || col1 != col2) {
printf("Addition is not possible");
return 1;
}
for(i=0;i<row1;i++) {
for(j=0;j<col1;j++) {
sum[i][j] = arr1[i][j] + arr2[i][j] ;  } }

printf("Sum of the matrices:\n");
for(i=0;i<row2;i++){
for(j=0;j<col2;j++){
printf("%d ",sum[i][j]);  }
printf("\n"); 
} 
return 0;
}
