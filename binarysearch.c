


int binarysearch(int val,int *vector,int size)
 {
     int low,high,mid;
     low =0;
     high = size-1;
     while(low <= high)
     {
         mid =(low+high)/2;
         if(val<vector[mid])
             high = mid-1;
         else if(val>vector[mid])
             low = mid+1;
         else
             return mid;

     }
     return -1;
}
