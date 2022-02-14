

int search_arr(int *arr,int val,int size)
{
   for(int i=0;i<size;i++)
	if(arr[i]==val)
	    return 0;

   return -1;
}
