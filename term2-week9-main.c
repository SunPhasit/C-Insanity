#include <stdio.h>
#include <stdlib.h>
/*
float submat(int i, int order, float *matrix)
{
    int j, k=0;
    float *smol;
    smol = calloc((order - 1) * (order - 1), sizeof(float));
    for (j = 0; j < (order)*(order); j++)
    {
        if(!((j-i)%order)||!(0<j&&j<order))
        {
            smol[k]=matrix[j];
            k++;
        }
    }
    return *smol;
}
*/
float det(int order, float *matrix)
{
  int i,j,k;
  float *smol, ans;
  if (order == 1)
    return matrix[0];
  else
    {
        for (i = 0; i < order; i++)
	    {
	        k=0;
	        smol = calloc((order - 1) * (order - 1), sizeof(float));
            for (j = 0; j < (order)*(order); j++)
            {
                if(!((j-i)%order)||!(0<j&&j<order))
                {
                    smol[k]=matrix[j];
                    k++;
                }
            }
	        if (i % 2)
	            ans -= matrix[i] * det(order-1,smol);
	        else
	            ans += matrix[i] * det(order-1,smol);
	       printf("%f ",ans);
	       free(smol);
	    }
      return ans;
    }
}

int main()
  {
    float *matrix;
    int i, order;
    printf ("The order of the matrix: ");
    scanf ("%d", &order);
    matrix = calloc (order * order, sizeof(float));
    for (i = 0; i < order * order; i++)
    {
	    scanf ("%f", &matrix[i]);
    }
    printf("%f",det(order, matrix));
    return 0;
  }
