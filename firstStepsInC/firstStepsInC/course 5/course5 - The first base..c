//
//  course5 - The first base..c
//  firstStepsInC
//
//  Created by Kalchabek Nurbekov on 11.01.2023.
//

#include "course5 - The first base..h"

//------------------------
/*Дана длина ребра куба. Необходимо найти площадь одной грани, площадь полной поверхности и объем этого куба.
 #include <stdio.h>
 #include <math.h>
 int main() {
   int x,s1,s_total,v;
     scanf("%d",&x);
     s1 = pow(x,2);
     s_total = s1*6;
     v = pow(x,3);
     printf("%d %d %d",s1,s_total,v);
   return 0;
 }

 */

//---------------------
/*Составить программу вычисления объема цилиндра и конуса, которые имеют одинаковую высоту h и одинаковый радиус основания r.
 
 #include <stdio.h>
 #include <math.h>
 int main() {
   double h,r,v_c,v_k,pi;
     pi = 3.14159265358979323846;
     scanf("%lf",&r);
     scanf("%lf",&h);
     v_c = (h*pi)*pow(r,2);
     v_k = ((h*pi)*pow(r,2))/3;
     printf("%.2lf %.2lf",v_c,v_k);
   return 0;
 }
 */

//---------------------
/*Идёт k секунда суток. Определить, сколько целых часов и целых минут будут показывать электронные часы, если на 0-ой секунде они показывают 0:00.

 #include <stdio.h>

 int main() {
   int k,h,m;
     scanf("%d",&k);
     h = k / 3600;
     m = (k / 60)%60;
     printf("%d %d", h,m);
     
   return 0;
 }
*/


//--------------------
/*Даны натуральные числа M, N. Вывести младшую цифру целой части и старшую цифру дробной части числа M/N
 ​ 
 #include <stdio.h>

 int main() {
     double d,m,n,big,small;
     scanf("%d",&m);
     scanf("%d",&n);
     d = m/n;
     big = (int)d%10;
     small = (int)(d * 10)%10;
     printf("%.lf %.lf",big,small);
   return 0;
 }
  .*/

//---------------------
/*Определить число, полученное выписыванием в обратном порядке цифр заданного целого трехзначного числа.
 #include <stdio.h>

 int main() {
   int k,f,s,l,res;
     scanf("%d",&k);
     f = (k%100)%10;
     s = (k/10)%10;
     l = k/100;
     res = (f*100)+(s*10)+l;
     printf("%d", res);
     
   return 0;
 }
*/

//-----------------
/*Найти частное произведений цифр, сооветствующих четным и нечетным разрядам четырехзначного числа.
 #include <stdio.h>

 int main() {
   int x,o1,o2,e1,e2;
     double res,r1,r2;
     scanf("%d",&x);
     o1 = x/1000;
     e1 = (x/100)%10;
     o2 = ((x/10)%100)%10;
     e2 = (((x%1000)%100)%10);
     r1 = o1*o2;
     r2 = e1*e2;
     res = r1/r2;
     printf("%.2lf",res);
   return 0;
 }

 */

//--------
/*Факториал
 
 #include <stdio.h>

 int main() {
     int i,f;
     f=1;
     for (i=1; i<11; i++) {
         f=f*i;
          printf("%d!%s=%8d\n", i, i == 10 ? "" : " ", f);
     }
   return 0;
 }
 */

//------------
/*Определить является ли натуральное число чётным или нечётным.
 #include <stdio.h>

 int main() {
   int x;
     scanf("%d",&x);
     if (x==1) {
         printf("-1");
     }
     else if (x%2==0) {
         printf("1");
     } else if (x%2==1) {
     printf("-1");
     }
   return 0;
 }
*/


//-----------------
/*Посчитать разность между количеством нечетных и чётных чисел.
 
 #include <stdio.h>
 #include <math.h>
 int main() {
     int x1,x2,x3,x4,x5,r1,r2,res;
     scanf("%d %d %d %d %d",&x1,&x2,&x3,&x4,&x5);
     r1 = abs(x1%2) + abs(x2%2) + abs(x3%2) + abs(x4%2) + abs(x5%2);
     r2 = 5-r1;
     res = r1-r2;
     printf("%d",res);
   return 0;
 }
 */


//------------------
/*#include <stdio.h>
 
 int main() {
     int k,a,b,res;
     scanf("%d",&k);
     a = (k % 100 * 10);
     b = k / 100;
     res = a+b;
     printf("%d",res);
     return 0;
 }*/

//---------------
/*#include <stdio.h>
 
 int main() {
     int s,h;
     scanf("%d",&s);
     h = s % 3600;
     printf("%d",h);
     return 0;
 }
 
 -----------------
 #include <stdio.h>

 int main() {
     int s,h;
     scanf("%d",&s);
     h = s % 60;
     printf("%d",h);
     return 0;
 }
 -------------------
 #include <stdio.h>

 int main() {
     int k,res;
     scanf("%d",&k);
     res = ((k-1)/7)+1;
     printf("%d",res);
   return 0;
 }
 ---------------------
 #include <stdio.h>

 int main() {
     int k,res;
     scanf("%d",&k);
     res = ((k+4-1)/7)+1;
     printf("%d",res);
   return 0;
 }
 -------------------------
 #include <stdio.h>

 int main() {
     int k,res;
     scanf("%d",&k);
     res = (((k)%7));
     printf("%d",res);
   return 0;
 }
 -------------------------
 #include <stdio.h>

 int main() {
     int k,res;
     scanf("%d",&k);
     res = ((k+2)%7);
     printf("%d",res);
   return 0;
 }
 -----------------------
 #include <stdio.h>

 int main() {
   double k,res;
     scanf("%lf", &k);
     res = pow(2,(k/3));
    
     printf("%.lf",res);
     
   return 0;
 }
 -----------------------
 #include <stdio.h>

 int main() {
   double f,d,r1,r2,res;
     scanf("%lf %lf",&f,&d);
     r1=d*25.4;
     r2=f*(12*25.4);
     res=(r1+r2)/1000;
     printf("%.lf\'%.lf\" = %.2lf\m\.",f,d,res);
   return 0;
 }
 --------------------
 #include <stdio.h>

 int main() {
   int m;
     double res;
     scanf("%d",&m);
     res = m*0.454;
     printf("%.2lf",res);
   return 0;
 }
 --------------------
 #include <stdio.h>

 int main() {
     int f;
     double res;
     scanf("%d",&f);
     res = (f-32.)*(5./9.);
     printf("%.2lf",res);
   return 0;
 }
 --------------------
 #include <stdio.h>

 int main() {
     int b;
     double res;
     int r1,r2,r3,r4;
     scanf("%1d%1d%1d%1d",&r1,&r2,&r3,&r4);
    // r1 = b % 10;
     //r2 = (b/10)%100;
    // r3 = (b/100)%10;
    // r4 = b/1000;
     res = r1*(pow(2,3))+r2*(pow(2,2))+r3*(pow(2,1))+r4*(pow(2,0));
     printf("%.lf",res);
   return 0;
 }
 -------------------
 #include <stdio.h>

 int main() {
     int k;
     double res;
     int r1,r2,r3,r4;
     scanf("%d %1d%1d%1d%1d",&k,&r1,&r2,&r3,&r4);
    // r1 = b % 10;
     //r2 = (b/10)%100;
    // r3 = (b/100)%10;
    // r4 = b/1000;
     res = r1*(pow(k,3))+r2*(pow(k,2))+r3*(pow(k,1))+r4*(pow(k,0));
     printf("%.lf",res);
   return 0;
 }
 ----------------------
 
 #include <stdio.h>

 int main() {
   int n,m,res;
     scanf("%d %d",&n,&m);
     res = n%m;
     printf("%d",res);
   return 0;
 }
 ---------------------
 #include <stdio.h>

 int main() {
   int a,b,c,res1,res2;
     scanf("%d %d %d",&a,&b,&c);
     res1 = b % a;
     res2 = c % a;
     printf("%d %d",res1,res2);
   return 0;
 }
 -----------------
 #include <stdio.h>

 int main() {
   int n,k,x,res1,res2;
     scanf("%d %d %d",&n,&k,&x);
     res1 = k+x;
     res2 = res1%n;
     printf("%d",res2);
   return 0;
 }
 -------------------
 #include <stdio.h>

 int main() {
   int k,x1,x2,x3,x4;
     scanf("%d %d %d %d %d",&k,&x1,&x2,&x3,&x4);
     x1 = (x1+k)%26;
     x2 = (x2+k)%26;
     x3 = (x3+k)%26;
     x4 = (x4+k)%26;
     printf("%d %d %d %d",x1,x2,x3,x4);
   return 0;
 }
 ---------------------
 
 #include <stdio.h>

 int main() {
   int x1,x2,x3,x4,y1,y2,y3,y4;
     scanf("%1d%1d%1d%1d ",&x1,&x2,&x3,&x4);
     y1 = (x3+7)%10;
     y2 = (x4+7)%10;
     y3 = (x1+7)%10;
     y4 = (x2+7)%10;
    
     printf("%1d%1d%1d%1d",y1,y2,y3,y4);
   return 0;
 }
 -------------------
 #include <stdio.h>

 int main() {
   int x1,x2,x3,x4,y1,y2,y3,y4;
     scanf("%1d%1d%1d%1d ",&x1,&x2,&x3,&x4);
     y1 = (x3+10-7)%10;
     y2 = (x4+10-7)%10;
     y3 = (x1+10-7)%10;
     y4 = (x2+10-7)%10;
    
     printf("%1d%1d%1d%1d",y1,y2,y3,y4);
   return 0;
 }
 --------------------
 
 #include <stdio.h>
 #include <math.h>
 int main() {
     int h;
     double z,po,res;
     scanf("%d", &h);
     z = 1.25e-4;
     res = exp(-h*z)*1.29;
     printf("%.2lf",res);
     
   return 0;
 }
 ------------------
 #include <stdio.h>
 #include <math.h>
 int main() {
     double k;
     double ln,t,no,res,tt,x;
     scanf("%lf", &k);
     t = k;
     tt = 5570;
     ln = log(2);
     no = 75;
     x = ln / tt;
     
     
     res = no*exp(-x*t);
     printf("%.2lf",res);
     
   return 0;
 }
 --------------------
 
 
 */
