


unsigned getbits(unsigned short x,int p,int n)
 {
     return (x>>(p-n))&~(~0<<n);
 }
