#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int i, j, rows;

    /* Input number of rows from user */
    printf("Enter rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<=rows - i; j++)
        {
            printf(" ");
        }

        /* Print stars after spaces */
        for(j=1; j<=rows; j++)
        {
            printf("*");
        }

        /* Move to the next line */
        printf("\n");
    }

    return 0;
}
//    *****
//   *****
//  *****
// *****
//*****


int main()
{
    int i, j, N;

    /* Input number of rows from user */
    printf("Enter rows: ");
    scanf("%d", &N);


    for(i=1; i<=N; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=N; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
//*****
// *****
//  *****
//   *****
//    *****
int main()
{
    int i, j, N;
 
    /* Input number of rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        /* Print hollow rhombus */
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==N  || j==1|| j==N)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
//*****
// *   *
//  *   *
//   *   *
//    *****

int main()
{
    int i, j, N;
 
    /* Input number of rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        /* Print hollow rhombus */
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==N  || j==1|| j==N)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
//*****
// *   *
//  *   *
//   *   *
//    *****


int main()
{
    int i, j, n;

    /* Input number of rows from user */
    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        /* Print i number of stars */
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}

//*
//**
//***
//****
//*****

int main()
{
    int i, j, rows;

    /* Input rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        { 
            /* 
             * Print star for first column(j==1), 
             * last column(j==i) or last row(i==rows).
             */
            if(j==1 || j==i || i==rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}

//*
//**
//* *
//*  *
//*****


int main()
{
    int i, j, rows;

    /* Input rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /* Print spaces in decreasing order of row */
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        /* Print star in increasing order or row */
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }
    
    return 0;
}
//    *
//   **
//  ***
// ****
//*****

  int main()
{
    int i, j, rows;

    /* Input rows from user */
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        /* Print hollow right triangle */
        for(j=1; j<=i; j++)
        {
            /*
             * Print star for last row(i==row),
             * first column(j==1) and
             * last column(j==i).
             */
            if(i==rows || j==1 || j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
//    *
//   **
//  * *
// *  *
//*****

int main()
{
    int i, j, rows;

    /* Input number of rows from user */
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /* Iterate through columns */
        for(j=i; j<=rows; j++)
        {
            printf("*");
        }
       
        /* Move to the next line */
        printf("\n");
    }

    return 0;
}

//*****
//****
//***
//**
//*

int main()
{
    int i, j, rows;

    /* Input number of rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /* Iterate through columns */
        for(j=i; j<=rows; j++)
        {
            /* 
             * Print stars for first row(i==1), 
             * first column(j==1) and 
             * last column(j=rows).
             */
            if(i==1 || j==i || j==rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}

//*****
//*  *
//* *
//**
//*

int main()
{
    int i, j, rows;

    /* Input rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /* Print leading spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        /* Iterate through columns to print star */
        for(j=i; j<=rows; j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}

// **** 
//  ***
//   **
//    *

int main()
{
    int i, j, rows;

    /* Input rows to print from user */
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        /* Print leading spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        /* Print hollow inverted right triangle */
        for(j=i; j<=rows; j++)
        {
            /*
             * Print star for ith column(j==i),
             * last column(j==rows) and for
             * first row(i==1).
             */ 
            if(j==i || j==rows || i==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}

//*****
// *  *
//  * *
//   **
//    *


int main()
{
    int i, j, rows;

    /* Input number of rows to print */
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    { 
        /* Print leading spaces */
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        /* Print star */
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}

//    *
//   ***
//  *****
// *******
//*********

int main()
{
    int i, j, rows;

    /* Input rows to print from user */
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        /* Print hollow pyramid */
        for(j=1; j<=(2*i-1); j++)
        {
            /*
             * Print star for last row (i==rows),
             * first column(j==1) and for
             * last column (j==(2*i-1)).
             */ 
            if(i==rows || j==1 || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}


//    *
//   * *
//  *   *
// *     *
//*********




int main()
{
    int i, j, rows;

    /* Input rows to print from user */
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        /* Print leading spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        /* Print stars */
        for(j=1; j<=(rows*2 -(2*i-1)); j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}


//*********
// *******
//  *****
//   ***
//    *


int main()
{
    int i, j, rows;

    /* Input rows to print from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /* Print leading spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        /* Print hollow pyramid */
        for(j=1; j<=(rows*2 - (2*i-1)); j++)
        {
            /*
             * Print star for first row(i==1),
             * ith column (j==1) and for
             * last column (rows*2-(2*i-1))
             */ 
            if(i==1 || j==1 || j==(rows*2 - (2*i - 1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}


//*********
// *     *
//  *   *
//   * *
//    *

int main()
{
    int i, j, N, columns;

    /* Input number of columns from user */
    printf("Enter number of columns:");
    scanf("%d",&N);

    columns=1;

    for(i=1;i<N*2;i++)
    {
        for(j=1; j<=columns; j++)
        {
            printf("*");
        }

        if(i < N)
        {
            /* Increment number of columns per row for upper part */
            columns++;
        }
        else
        {
            /* Decrement number of columns per row for lower part */
            columns--;
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}

//*
//**
//***
//****
//*****
//****
//***
//**
//*


int main()
{
    int i, j, N;
    int star, spaces;
    
    /* Input number of columns to print from user */
    printf("Enter number of columns : ");
    scanf("%d", &N);

    
    spaces = N-1;
    star = 1;
    
    /* Iterate through rows */
    for(i=1; i<N*2; i++)
    {
        /* Print leading spaces */
        for(j=1; j<=spaces; j++)
            printf(" ");
        
        /* Print stars */
        for(j=1; j<=star; j++)
            printf("*");
        
        /* Move to next line */
        printf("\n");
        
        if(i < N) 
        {
            star++;
            spaces--;
        }
        else
        {
            star--;
            spaces++;
        }
    }

    return 0;
}

//    *
//   **
//  ***
// ****
//*****
// ****
//  ***
//   **
//    *


int main()
{
    int i, j, rows;
    int stars, spaces;
   
    printf("Enter rows to print : ");
    scanf("%d", &rows);
    
    
    stars = 1;
    spaces = rows - 1;
    
    /* Iterate through rows */
    for(i=1; i<rows*2; i++)
    {
        /* Print spaces */
        for(j=1; j<=spaces; j++)
            printf(" ");
        
        /* Print stars */
        for(j=1; j<stars*2; j++)
            printf("*");
        
        /* Move to next line */
        printf("\n");
        
        if(i<rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }
    
    return 0;
}

//
//    *
//   ***
//  *****
// *******
//*********
// *******
//  *****
//   ***
//    *



int main()
{
    int i, j, n;

    printf("Enter value of n : ");
    scanf("%d", &n);

    // Loop to print upper half of the pattern
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf("*");
        }

        for(j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }

        for(j=i; j<=n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Loop to print lower half of the pattern
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=(2*i-2); j<(2*n-2); j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}


//**********
//****  ****
//***    ***
//**      **
//*        *
//*        *
//**      **
//***    ***
//****  ****
//**********


int main()
{
    int i, j, n;

    // Input number of rows from user
    printf("Enter value of n : ");
    scanf("%d", &n);

    // Print the upper part of the arrow
    for(i=1; i<n; i++)
    {
        // Print trailing (2*rownumber-2) spaces
        for(j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }

        // Print inverted right triangle star pattern
        for(j=i; j<=n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Print lower part of the arrow
    for(i=1; i<=n; i++)
    {
        // Print trailing (2*n - 2*rownumber) spaces
        for(j=1; j<=(2*n - 2*i); j++)
        {
            printf(" ");
        }

        // Print simple right triangle star pattern
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}


//*****
//  ****
//    ***
//      **
//        *
//      **
//    ***
//  ****
//*****



int main()
{
    int i, j, n;

    // Input number of rows from user
    printf("Enter value of n : ");
    scanf("%d", &n);

    // Print upper part of the arrow
    for(i=1; i<n; i++)
    {
        // Print trailing (n-rownumber) spaces
        for(j=1; j<=(n-i); j++)
        {
            printf(" ");
        }

        // Print inverted right triangle
        for(j=i; j<=n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Print bottom part of the arrow
    for(i=1; i<=n; i++)
    {
        // Print trailing (rownumber-1) spaces
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        // Print the right triangle
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}


//    *****
//   ****
//  ***
// **
//*
// **
//  ***
//   ****
//    *****

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    // Run an outer loop from 1 to N*2-1
    for(i=1; i<=(N * 2 - 1); i++)
    {
        // For the center horizontal plus
        if(i == N)
        {
            for(j=1; j<=(N * 2 - 1); j++)
            {
                printf("+");
            }
        }
        else
        {
            // For spaces before single plus sign
            for(j=1; j<=N-1; j++)
            {
                printf(" ");
            }
            printf("+");
        }

        printf("\n");
    }

    return 0;
}

//    +
//    +
//    +
//    +
//+++++++++
//    +
//    +
//    +
//    +   

int main()
{
    int i, j, N;
    int count;

    printf("Enter N: ");
    scanf("%d", &N);

    count = N * 2 - 1;

    for(i=1; i<=count; i++)
    {
        for(j=1; j<=count; j++)
        {
            if(j==i || (j==count - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}


//*       *
// *     *
//  *   *
//   * *
//    *
//   * *
//  *   *
// *     *
//*       *


int main()
{
    int i, j, size;

    printf("Enter size: ");
    scanf("%d", &size);

    for(i=1; i<size*2; i++)
    {
        for(j=1; j<=size; j++)
        {
            // Condition for corner and center intersection space
            if((i==1 && (j==1 || j==size)) || 
               (i==size && (j==1 || j==size)) || 
               (i==size*2-1 && (j==1 || j==size)))
            {
                printf(" ");
            }
            else if(i==1 || i==size || i==(size*2)-1 || j==1 || j==size)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}


// ****
//*    *
//*    *
//*    *
//*    *
// ****
//*    *
//*    *
//*    *
//*    *
// ****



int main()
{
    int i, j, n;

    printf("Enter value of n : ");
    scanf("%d", &n);

    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(i*2)-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}


// *****     *****
// *******   *******
//********* *********
//*******************
// *****************
//  ***************
//   *************
//    ***********
//     *********
//      *******
//       *****
//        ***
//         *


int main()
{
    int i, j, n;
    char name[50];
    int len;

    printf("Enter your name: ");
    gets(name);
 
    printf("Enter value of n : ");
    scanf("%d", &n);

    len = strlen(name);

    // Print upper part of the heart shape
    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
            printf(" ");
        }
 
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
 
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
 
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
 
        printf("\n");
    }
 
    // Prints lower triangular part of the pattern
    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }
        
        // Print the name
        if(i == n) 
        {
            for(j=1; j<=(n * 2-len)/2; j++)
            {
                printf("*");
            }   

            printf("%s", name);

            for(j=1; j<(n*2-len)/2; j++)
            {
                printf("*");
            }
        }
        else 
        {
            for(j=1; j<=(i*2)-1; j++)
            {
                printf("*");
            }
        }
 
        printf("\n");
    }
 
    return 0;
}


//  *****     *****
// *******   *******
//********* *********
//*****Codeforwin****
// *****************
//  ***************
//   *************
//    ***********
//     *********
//      *******
//       *****
//        ***
//         *




