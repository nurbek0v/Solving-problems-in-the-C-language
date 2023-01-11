//
//  course 7 - Cycles | Loops.c
//  firstStepsInC
//
//  Created by Kalchabek Nurbekov on 11.01.2023.
//

#include "course 7 - Cycles | Loops.h"

 
 #include <stdio.h>

 int main() {
     int n;
     scanf("%d", &n);
     for (int i=1; i<n+1; i++) {
         printf("%d ",i);
     }
     
     
     return 0;
 }
 
/*
 -------------
 #include <stdio.h>

 int main() {
     int k,m;
     scanf("%d %d", &k,&m);
     if (k<0){k=1;}
     for (int i=k; i<m+1; i++) {
         printf("%d ",i);
     }
     
     
     return 0;
 }
 -------------
 #include <stdio.h>

 int main() {
     int k,m,count;
     scanf("%d %d", &k,&m);
     if (k<0){k=1;}
     count = 0;
     for (int i=k; i<m+1; i++) {
         count += 1;
         printf("%d ",i);
         
     }
     printf("\n%d ",count);
     
     
     return 0;
 }
 ---------------
 #include <stdio.h>

 int main() {
     int a,b,count;
     scanf("%d %d", &a,&b);
    // if (k<0){k=1;}
     count = 0;
     for (int i=b; i>a-1; i--) {
         count += 1;
         printf("%d ",i);
         
     }
    // printf("\n%d ",count);
     
     
     return 0;
 }
 -------------------
 #include <stdio.h>

 int main() {
     int k,count,sum;
     scanf("%d", &k);
    // if (k<0){k=1;}
     //count = 0;
     sum = 1;
     for (int i=1; i<k+1; i++) {
         sum = i*sum;
         count += 1;
         
         //printf("%d ");
         
     }
    printf("\n%d ",sum);
     
     
     return 0;
 }
 -----------------
 #include <stdio.h>

 int main() {
     int a,b,c,x;
     scanf("%d", &x);
     a=0,b=1;
     for (int i=1; i<x; i++){
         c=a+b;
         a=b;
         b=c;
     
     }
     printf("%d",b);
     return 0;
 }
 ---------------
 #include <stdio.h>

 int main() {
     int a,b,count;
     scanf("%d %d", &a,&b);
     count = 0;
     for (int i=a; i<b+1; i++) {
         
         count += 1;
         for (int j=1;j<count+1;j++) {
             printf("%4d ",i);
         }
         
         
     }
    // printf("\n%d ",count);
     
     
     return 0;
 }
 ----------------
 
 #include <stdio.h>

 int main() {
     int a,b,count;
     scanf("%d %d", &a,&b);
     count = 0;
     for (int i=a; i<b+1; i++) {
         
         count = i;
         for (int j=1;j<count+1;j++) {
             printf("%3d ",i);
         }
         
         
     }
    // printf("\n%d ",count);
     
     
     return 0;
 }
 ----------------
 #include <stdio.h>

 int main() {
     int n,count;
     scanf("%d",&n);
     count = 0;
     for (int i=1; i<n+1; i++) {
         if (n%i==0){
             printf("%d ",i);
             count += 1;
         }
         
     }
     printf("\n%d ",count);
     
     
     return 0;
 }
 --------------
 #include <stdio.h>

 int main() {
     int n,count;
     scanf("%d",&n);
     count = 0;
     for (int i=1; i<n+1; i++) {
         if (n%i==0){
            // printf("%d ",i);
             count += 1;
         }
         
         
     }
     if (count>2) {
         printf("\n%d ",0);
     } else {
         printf("\n%d ",1);
     }
     
     
     
     return 0;
 }
 ---------------
 #include <stdio.h>

 int main(void) {

   int N = 0;

   scanf("%d", &N);

   int max = -9999;
   int number = 0;

   for (int i = 1; i <= N; i++){
     scanf("%d", &number);
     if (max < number)
       max = number;
   }

   printf("%d\n", max);

   return 0;
 }
 -----------------
 
 
 #include <stdio.h>

 int main() {
     int x,end;
     scanf("%d", &x);
     end=-9999;
     while(x != end ){
     printf("%d ",x);
     scanf("%d", &x);
     }
     printf("%d",end);
   return 0;
 }
 -------------
 #include <stdio.h>

 int main() {
     int x,end;
     scanf("%d", &x);
     end=-9999;
     while(x != end ){
     printf("%d ",x);
     scanf("%d", &x);
     }
   return 0;
 }
 ------------
 #include <stdio.h>
 
 int main() {
     int x,end;
     scanf("%d", &x);
     end=-9999;
     while(x != end ){
     printf("%d ",x);
     scanf("%d", &x);
     }
   return 0;
 }
 ---------------
 #include <stdio.h>

 int main() {
     int x,end,sum;
     scanf("%d", &x);
     end=-9999;
     sum=0;
     while(x!=0){
     sum += x;
     scanf("%d", &x);
     }
     printf("%d",sum);
   return 0;
 }
 -----------------
 #include <stdio.h>
 int main() {
   int N,a=9999,b=-9999;
     do{
         scanf ("%d",&N);
        
  if (a>N && N!=0) a=N;
    if (b<N && N!=0) b=N;
     }
     while (N!=0);
    
        printf ("%d %d",b,a);
    
    
   return 0;
 }
 ---------------
 #include <stdio.h>
 #include <math.h>
 int main() {
   double N,b;
     scanf ("%lf",&N);
    for (int i = 1; (i*i)<=N; i++) {
        printf("%d ",i*i);
    }
   return 0;
 }
 ----------------
 #include <stdio.h>

 int main() {
     int n,res;
     scanf("%d",&n);
     res = 0;
   for (int x = 1; x <= n; x *= 2)
     {
         if (x == n) {
             res = 1;
         
         }
     }
     if (res==1) {
     printf("YES");
     } else {
         printf("NO");
     }
     
     
   return 0;
 }
 -------------------
 #include <stdio.h>

 int main() {
     int n,c;
     scanf("%d", &n);
     c = 0;
     if (n>0) {
   for(int s = 1; s <= n; s *= 10) {
   c += 1;
   }
     printf("%d", c);
     } else if (n<=0) {
         //
     }
   return 0;
 }
 -------------------
 #include <stdio.h>
 #include <math.h>
 int main() {
     int n,res;
     scanf("%d",&n);
     res = (int)log2(n);
     for (int i = 1; i <= res; i++) {
        printf("%d ", i);
     }
  
   return 0;
 }
 ----------------
 #include <stdio.h>
 #include <math.h>
 int main() {
     int n,res;
     scanf("%d",&n);
     if (n != 1) {
     res = ceil(log2(n));
     printf("%d ", res);
     } else if (n == 1) {
      printf("%d ", 1);
     }
  
   return 0;
 }
 */
