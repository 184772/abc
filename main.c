#include <stdio.h>
#include <string.h>
#include <windows.h>


 
int main() {

	/*char a=-1;
	 char b=-1;
	printf("%d\n%u",a,b);
    return 0;*/
    
   int j=0,l=0,r=9,i,arr[12]={0};
   for(i=0;i<10;i++)
   {
   	scanf("%d",&arr[i]);
   }
   while(l<r)
   {
   	j=1;
   while(arr[l]%2!=0)
   {
   	if(l>=r)
   	break;
   		l++;
   	
   }
   while(arr[r]%2==0)
   {
   	if(l>=r)
   	break;
   	r--;
   
   }
   int m;
   m=arr[l];
   arr[l]=arr[r];
   arr[r]=m;
   r--;
   l++;
   
}
   for(i=0;i<10;i++)
   {
   	printf("%d ",arr[i]);
   }
   
   
  return 0;
}


/*10000000 00000000 00000000 00000001  -1
  11111111 11111111 11111111 11111111
  11111111
  10000001
  
  
	000000000 000000000 00000000 11111111
	
*/
