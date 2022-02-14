

int copy(char *to,char *from)
 {
     int i=0;
     if(sizeof(to)>=sizeof(from))
     {
     while((to[i]=from[i])!='\0')
     ++i;
     to[i] = '\0';
     return 0;
     }
     else
     return -1;
 }
