#include <stdio.h>
#include <stdlib.h>

int main() {

    const int n = 3, m = 3;
    const int w = 4;
    int ar[3][3] = {1, 3, 2, 5, 7, 6, 4, 3, 8};
    printf("Source array:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    for(int k = 0; k < n; ++k) {
        for(int l = 0; l < m; ++l) {
            for(int i = 0; i < n; ++i) {
                for(int j = 0; j < m; ++j) {
                    if (i + 1 == n && j + 1 ==n) {
                        continue;
                    }
                    else {
                        if (j + 1 == m && ar[i][j] > ar[i + 1][0]){
                            int temp = ar[i][j];
                            ar[i][j] = ar[i + 1][0];
                            ar[i + 1][0] = temp;
                        }
                        else {
                            if (ar[i][j] > ar[i][j + 1]) {
                                int temp = ar[i][j];
                                ar[i][j] = ar[i][j + 1];
                                ar[i][j + 1] = temp;
                            }
                        }
                    }
                }
            }
        }
    }

    printf("New array\n");
for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

double inputs[11], check = 400, result;
  int y;
 
  printf ("\nPlease enter 11 numbers :");
 
  for (y = 0; y < 11; y++)
    {
      scanf ("%lf", &inputs[y]);
    }
 
  printf ("\nEvaluating f(x) = |x|^0.5 + 5x^3 for the given inputs :");
 
  for (y = 10; y >= 0; y--)
    {
      result = sqrt (fabs (inputs[y])) + 5 * pow (inputs[y], 3);
 
      printf ("\nf(%lf) = ");
 
      if (result > check)
        {
          printf ("Overflow!");
        }
 
      else
        {
          printf ("%lf", result);
        }
    }



return 0;
}