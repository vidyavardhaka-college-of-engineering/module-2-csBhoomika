//INPUT - 3 1 2 3
//OUTPUT- 3 2 1

//INSERT THE MISSING CODE 
#include<stdio.h>
	int main()
	{
	  int a[10],i,n;
	  printf("Enter size of the array and the array elements\n");
	  scanf("%d\n",&n);
	  
	  for(i=1;i<=n;i++)
	  scanf("%d",&a[i]);//missing code
	  //printf("Array elements in reverse order\n : ");
	  for(i=3;i>0;i--) //missing code
	  printf("%d ",a[i]);
	  return 0;
	}
