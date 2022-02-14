#undef SQUARE
#define SQUARE 3
#undef ROW
#define ROW 3
#undef COL
#define COL 3

//transpose of A(m*n)=B(n*m)

void transpose(int (*A)[COL],int (*B)[ROW])
{
	//copying elements in temp
	for(int i=0;i<ROW;i++)
		for(int j=0;j<COL;j++)
			B[j][i]=A[i][j];

}


void matrice_sum(int (*A)[SQUARE],int (*B)[SQUARE],int (*C)[SQUARE])
{
	for(int i=0;i<SQUARE;i++)
		for(int j=0;j<SQUARE;j++)
			C[i][j]=B[i][j]+A[i][j];
	
}


void matrice_sub(int (*A)[SQUARE],int (*B)[SQUARE],int (*C)[SQUARE])
{
	for(int i=0;i<SQUARE;i++)
		for(int j=0;j<SQUARE;j++)
			C[i][j]=A[i][j]-B[i][j];
	
}


void matrice_mul(int (*A)[SQUARE],int (*B)[SQUARE],int (*C)[SQUARE])
{
	for(int i=0;i<SQUARE;i++){
		for(int j=0;j<SQUARE;j++){
			C[i][j]=0;
			for(int k=0;k<SQUARE;k++)
			C[i][j]+=A[i][k]*B[k][j];
		}
	}
}
