/* Bitwise operators example */
#include<stdio.h>
#include<math.h>
 
int main ()
{
   unsigned int z = 4;
   unsigned int i = 0;
   unsigned int k = 1;
   unsigned int l = 2;
   unsigned int j = pow(2,16) - 1;
 
   printf ("\n==== Initial ====\n");
   printf ("i=%ud\n", i);
   printf ("j=%ud\n", j);
   printf ("i=%ud\n", k);
   printf ("j=%ud\n", l);

   /* XOR */ 
   printf ("\n==== XOR with 1 ====\n");
   printf ("i=%ud\n", i ^ 1);
   printf ("j=%ud\n", j ^ 1);
   printf ("i=%ud\n", k ^ 1);
   printf ("j=%ud\n", l ^ 1);
 
   /* OR */ 
   printf ("\n==== OR with 1 ====\n");
   printf ("i=%ud\n", i | 1);
   printf ("j=%ud\n", j | 1);
   printf ("i=%ud\n", k | 1);
   printf ("j=%ud\n", l | 1);
 
   /* AND */ 
   printf ("\n==== AND with 1 ====\n");
   printf ("i=%ud\n", i & 1);
   printf ("j=%ud\n", j & 1);
   printf ("k=%ud\n", k & 1);
   printf ("l=%ud\n", l & 1);

   /* Shift left */ 
   printf ("\n==== Left shift by 1 bit ====\n");
   printf ("i=%ud\n", i << 1);
   printf ("j=%ud\n", j << 1);
   printf ("k=%ud\n", k << 1);
   printf ("l=%ud\n", l << 1);
 
   printf ("\n==== Left shift by 3 bits ====\n");
   printf ("z=%ud\n", z);
   printf ("z=%ud\n", z << 3);
 
   return 0;
}
