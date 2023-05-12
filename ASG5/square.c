//#include <stdio.h>
//
//int main()
//{
//    int i, j, N;
//
//    /* Input number of rows from user */
//    printf("Enter number of rows: ");
//    scanf("%d", &N);
//
//    /* Iterate over each row */
//    for(i=1; i<=N; i++)
//    {
//        /* Iterate over each column */
//        for(j=1; j<=N; j++)
//        {
//            if(i==1 || i==N || j==1 || j==N)
//            {
//                /* Print star for 1st, Nth row and column */
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//
//        /* Move to the next line/row */
//        printf("\n");
//    }
//
//    return 0;
//}



#include <stdio.h>

//Print X star pattern of given height

int main()
{
	int height;
	scanf("%d", &height);
	 if (height <= 2)
  {
    return;
  }
  
  int i = 0, j = 0;
  //Loop, which is control the printing row operations
  for (i = 0; i < height; ++i)
  {
    //Loop, which is control the printing column operations
    for (j = 0; j < height; ++j)
    {
      //Condition which is printing a star element
      if (i == 0 || j == i || i == height - 1 || height - 1 - i == j || j == 0 || j == height - 1)
      {
        printf("* ");
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }

  
  return 0;
}
