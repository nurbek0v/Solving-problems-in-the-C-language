//
//  course4- Mathematics in C.c
//  firstStepsInC
//
//  Created by Kalchabek Nurbekov on 11.01.2023.
//

#include "course4- Mathematics in C.h"

//--------- периметр прямоугольника
//int main() {
//  int a,b,result;
//  scanf("%d",&a);
//  scanf("%d",&b);
//    result = a*2+b*2;
//  printf("%d",result);
//  return 0;
//}

//--------- сумма цифр трехзначного числа
//int main() {
//  int input,a,b,c,result;
//  scanf("%d",&input);
//    a = input / 100;
//    b = (input % 100) / 10;
//    c = (input % 100) % 10;
//    result = a+b+c;
//    printf("%d",result);
//  return 0;
//}

//-----------------------------------------------------
/*Составьте программу подсчёта размера оплаты за электроэнергию по показаниями счётчика и тарифу. На вход поступают 3 числа.
Первое число -- целое число. Показания счётчика в кВт*ч на начало месяца.
Второе число -- целое число. Показания счётчика в кВт*ч на конец месяца.
Третье число -- вещественное число. Стоимость одного кВт*ч в рублях.

Программа должны вывести на экран размер оплаты за электроэнергию. Результат выведите с двумя знаками после запятой.
*/
//solution:
//int main() {
//    int start,end;
//    double rate,result;
//    scanf("%d",&start);
//    scanf("%d",&end);
//    scanf("%lf",&rate);
//    result = (end-start)*rate;
//    printf("%.2lf",result);
//    return 0;
//}


//-------------------
//Напишите программу переводящую угол из градусной меры в радианную.
//int main() {
//    int a;
//    double result,pi;
//    pi = 3.1415926;
//    scanf("%d",&a);
//    result = (a*pi)/180;
//    printf("%.2lf",result);
//    return 0;
//}


//-----------------
/*Напишите программу, определяющую нечётные числа.
 
 На вход программы поступает одно целое неотрицательное число. Программа должна вывести 1, если число нечётное, и 0, если число чётное.
 int main() {
     int input,result;
     scanf("%d",&input);
     result = input % 2;
     printf("%d",result);

     return 0;
 }
 */

//-----------------
/*Напишите программу, определяющую чётные числа.
 
 На вход программы поступает одно целое неотрицательное число. Программа должна вывести 1, если число чётное, и 0, если число нечётное.
 
 #include <stdio.h>

 int main() {
     int input,result;
     scanf("%d",&input);
     result = input % 2;
     printf("%d",1-result);
     
   return 0;
 }
 
 */

//----------------------
/*Написать программу, вычисляющую расстояние между двумя точками на оси координат.
 
 #include <stdio.h>

 int main() {
     int x1,x2,res;
     scanf("%d",&x1);
     scanf("%d",&x2);
     res = abs(x2-x1);
     printf("%d",res);
     return 0;
 }
 */


//------------------------
/*
 Написать программу, вычисляющую расстояние между двумя точками на плоскости.
 Формат входных данных: вещественные числа (x1,y1,x2,y2)
 Формат выходных данных: растояние между точками, точность два знака после запятой
 #include <stdio.h>
 #include <math.h>

 int main() {
     double x1,x2,y1,y2;
     double first,second;
     double firstRes,secondRes,finalRes;
     scanf("%lf",&x1);
     scanf("%lf",&y1);
     scanf("%lf",&x2);
     scanf("%lf",&y2);
     first = x1-x2;
     second = y1-y2;
     firstRes = pow(first,2);
     secondRes = pow(second,2);
     finalRes = sqrt(firstRes+secondRes);
     printf("%.2lf",finalRes);
     return 0;
 }
 */

//-----------------------
/*Написать программу, вычисляющую площадь треугольника по двум сторонам и углу между ними.
 
 #include <stdio.h>
 #include <math.h>
 int main() {
     double a,b,y,pi;
     double result,rad;
     pi = 3.141593;
     scanf("%lf",&a);
     scanf("%lf",&b);
     scanf("%lf",&y);
     rad = (y/180)*pi;
     result = (a*b*(sin(rad)))/2;
     printf("%.2lf",result);
   return 0;
 }
 
 */


//---------------------
/*Количество целых чисел, которые можно записать используя N двоичных битов вычисляется по формуле 2^n. Напишите программу, вычисляющую количество целых чисел, которые можно записать используя N битов.

 #include <stdio.h>

 int main() {
   int n,res;
     scanf("%d",&n);
     res = pow(2,n);
     printf("%d",res);
   return 0;
 }
 */

//----------------------
/*Написать программу, вычисляющую площадь треугольника по трём сторонам.
 
 
 #include <stdio.h>
 #include <math.h>

 int main() {
   double a,b,c;
     double p,res;
     scanf("%lf",&a);
     scanf("%lf",&b);
     scanf("%lf",&c);
     p = (a+b+c)/2;
     res = sqrt((p*(p-a)*(p-b)*(p-c)));
     printf("%.2lf",res);
   return 0;
 }
 */

//----------------------
/*Перепишите программу так, чтобы она выдавала случайно одно из чисел 0, 1 или 2.
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 int main(void){
     srand(time(NULL));
     int rand_digit = rand()%3;
     printf("%d\n",rand_digit);
     return 0;
 }
 */


//-----------------------
/*Поле для игры в рулетку состоит из ячеек от 0 до N.  На вход программе подаётся одно число N из промежутка [1, 666].
 
 Программа должна выдать случайное число от нуля до N.
 
 #include <stdio.h>
 #include <stdlib.h>
 int main() {
   int n,ran;
     scanf("%d",&n);
     ran = rand()%n;
     printf("%d",ran);
   return 0;
 }
 */

//-------------------
/*На вход программе подаётся два числа S и E, записанных через пробел. При этом гарантируется, что S≤E. Программа должна выводить одно случайное число из промежутка [S;E]
 
 #include <stdio.h>
 #include <stdlib.h>
 int main() {
     int r,c,ran;
  scanf("%d%d",&r,&c);
     ran = r+(rand()%(c-r+1));
     printf("%d",ran);
     
   return 0;
 }
 */

//------------------

