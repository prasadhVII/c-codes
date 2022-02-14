



void shellsort(int *sort,int size)
 {
     int gap,i,j,temp;

     for(gap = size/2;gap>0;gap/=2)
         for(i=gap;i<size;i++)
             for(j=i-gap;j>=0&&sort[j]>sort[j+gap];j-=gap)
             {
                 temp = sort[j];
                 sort[j]=sort[j+gap];
                 sort[j+gap]=temp;
             }
}
