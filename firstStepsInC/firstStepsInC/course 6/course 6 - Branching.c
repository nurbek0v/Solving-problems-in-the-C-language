//
//  course 6 - Branching.c
//  firstStepsInC
//
//  Created by Kalchabek Nurbekov on 11.01.2023.
//

#include "course 6 - Branching.h"
/*
 //-----------
 #include <stdio.h>
 #include <locale.h>
 int main(void) {
   setlocale(LC_ALL, "");
   char s;
   scanf("%c",&s);

   switch (s) {
     
     case 'l' : printf("коня потеряешь, себя спасёшь!\n"); break;
     case 'f' : printf("и себя и коня потеряешь!\n"); break;
     case 'r' : printf("себя потеряешь, коня спасёшь!\n"); break;
      default  : break;
   }

   return 0;
 }
 //---------------------
 #include <stdio.h>
 #include <locale.h>
 int main(void) {
   setlocale(LC_ALL, "");
   int s;
   scanf("%d",&s);

   switch (s) {
     
     case 1 : printf("плохо\n"); break;
     case 2 : printf("неудовлетворительно\n"); break;
     case 3 : printf("удовлетворительно\n"); break;
     case 4 : printf("хорошо\n"); break;
     case 5 : printf("отлично\n"); break;
      default  : break;
   }

   return 0;
 }
----------------------
 
 #include <stdio.h>
 #include <locale.h>
 int main(void) {
     setlocale(LC_ALL, "");
     int k,rem;
     scanf("%d", &k);
     rem = k%2;
     switch (rem) {
     case 1 : printf("Любит\n"); break;
     case 0 : printf("Не любит\n"); break;
     
      default  : break;
   }
     return 0;
 }
 ---------------------
 #include <stdio.h>

 int main() {
     char c;
     int a,b;
     double res;
     scanf("%c %d %d",&c,&a,&b);
     switch (c) {
         case '+': res=a+b; printf("%.2lf",res); break;
         case '-': res=a-b; printf("%.2lf",res); break;
         case '*': res=a*b; printf("%.2lf",res); break;
         case '/': res=(double)a /(double)b; printf("%.2lf",res); break;
         default : printf("ERROR!\n"); break;
     }
     
   // put your code here
   return 0;
 }
 ------------
 #include <stdio.h>

 int main() {
     char c;
     int a,b;
     double res;
     scanf("%d %d %c",&a,&b,&c);
     switch (c) {
         case '+': res=a+b; printf("%.2lf",res); break;
         case '-': res=a-b; printf("%.2lf",res); break;
         case '*': res=a*b; printf("%.2lf",res); break;
         case '/':
             switch (b) {
                     default : res=(double)a /(double)b; printf("%.2lf",res); break;
                 case 0 : printf("ERROR!\n"); break;
                 
             } break;
         default : printf("ERROR!\n"); break;
     }
     
   // put your code here
   return 0;
 }
 -------------
 
 #include <stdio.h>
 int main(void){

   int age, height, weight;
     char sex;
   double bov_m, bov_f, res;
   scanf("%c", &sex); // считываем символ в пересенную sex
   scanf("%d", &age); // считываем целое значение в переменную age
   scanf("%d", &height); // считываем  значение в переменную height
   scanf("%d", &weight); // считываем значение в переменную weight
  
   switch (sex) {
       case 'm': res = 10*weight + 6.25*height - 5*age + 5; printf("|  BMR  |\n");  printf("|%7.2lf|",res);  break;
       case 'f': res = 10*weight + 6.25*height - 5*age - 161; printf("|  BMR  |\n");  printf("|%7.2lf|",res); break;
           default : printf("ERROR!\n"); break;
   }
   return 0;
 }
 ---------------
 #include <stdio.h>

 int main() {
     int m, d,res;
     scanf("%d %d", &m, &d);
     res = 0;
     switch (m) {
             case 12: res = res+30;
             case 11: res = res+31;
             
             case 10: res = res+30;
             case 9: res = res+31;
             case 8: res = res+31;
             
             case 7: res = res+30;
             case 6: res = res+31;
             case 5: res = res+30;
             
             case 4: res = res+31;
             case 3: res = res+28;
             case 2: res = res+31;
             case 1: res = res+d; printf("%d\n", res); break;
                
         default: printf("ERROR!\n"); break;

     }
     // put your code here
     return 0;
 }
 ------------------
 #include <stdio.h>

 int main() {
     int k, x,res;
     scanf("%d %d", &k, &x);
     res = 0;
     switch (k) {
             case 4: res = (x/1000)*((x/100)%10)*((x/10)%10)*(x%10); printf("%d\n", res); break;
             case 3: res = (x/100)*((x/10)%10)*(x%10); printf("%d\n", res); break;
             case 2: res = (x/10)*(x%10); printf("%d\n", res); break;
             case 1: res = x; printf("%d\n", res); break;
                
         default: printf("ERROR!\n"); break;

     }
     // put your code here
     return 0;
 }
 -------------------
 #include <stdio.h>
 int main() {
   int a,b,c;
     scanf("%d", &a);
     b = a;
     c = a;
     switch (b % 10) {
                 case 1:
                        switch (c) {
                        case 11: printf("Мне %d лет", b); break;
                        default: printf("Мне %d год", b); break;
                        } break;
                 case 2:
                        switch (c) {
                        case 12: printf("Мне %d лет", b); break;
                        default: printf("Мне %d года", b); break;
                        } break;
                 case 3:
                        switch (c) {
                        case 13: printf("Мне %d лет", b); break;
                        default: printf("Мне %d года", b); break;
                        } break;
                 case 4:
                        switch (c) {
                        case 14: printf("Мне %d лет", b); break;
                        default: printf("Мне %d года", b); break;
                        } break;
             
                 case 5:
                 case 6:
                 case 7:
                 case 8:
                 case 9:printf("Мне %d лет", b);break;
                 case 0:printf("Мне %d лет", b);break;
                 }
           
     
   return 0;
 }
 -----------------
 #include <stdio.h>

 int main() {
  int x,y;
     scanf("%d %d", &x,&y);
     printf("%d", x==y);
   return 0;
 }
 ----------------
 
 #include <stdio.h>

 int main() {
  double x,y;
     scanf("%lf %lf", &x,&y);
     printf("%d",(x>0&&y>0)+((x<0&&y>0)*2)+((x<0&&y<0)*3)+((x>0&&y<0)*4));
   return 0;
 }
 ------------------
 #include <stdio.h>

 int main() {
   int t;
     scanf("%d",&t);
     if (t>60){
         printf("Fire situation");
     }
   return 0;
 }
 ------------
 #include <stdio.h>

 int main() {
   int a,b,c;
     scanf("%d %d %d",&a,&b,&c);
     printf("%d", (a>0)+(b>0)+(c>0));
   return 0;
 }
 -------------
 #include <stdio.h>

 int main() {
   int a,b;
     scanf("%d %d",&a,&b);
     if (a>b || a==b) {
      printf("no");
     } else {
     printf("yes");
     }
    
   return 0;
 }
 --------------
 #include <stdio.h>

 int main() {
   int x1,y1,x2,y2;
     double res1,res2;
     scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    res1 = x1*x1+y1*y1;
     res2 = x2*x2+y2*y2;
    if (res1>res2) {
    printf("2");
    } else {
       printf("1");
    }
   return 0;
 }
 ---------------
 #include <stdio.h>

 int main() {
   int b1,b2,b3,b4;
     scanf("%d %d %d %d",&b1,&b2,&b3,&b4);
    if (b1==1) {
         if (b2==0) {
         if (b3==2) {
         if (b4==4) {
             printf("open");
             return 0;
         }
         }
         }
    }
    printf("close");
    
   return 0;
 }
 --------------
 #include <stdio.h>

 int main() {
   int b1,b2,b3,res;
     scanf("%d %d %d",&b1,&b2,&b3);
   res = b1+b2+b3;
     if (b1==2) {
        if (b2==8) {
             if (b3==4) {
              printf("open");
                 return 0;
             }
        } else if (b2==4) {
            if (b3==8) {
            printf("open");
                return 0;
            }
        }
     } else if (b1==8) {
         if (b2==2) {
                 if (b3==4) {
                     printf("open");
                     return 0;
                 }
         } else if (b2==4) {
                 if (b3==2) {
                     printf("open");
                     return 0;
                 }
         }
     } else if (b1==4) {
         if (b2==2) {
             if (b3==8) {
                 printf("open");
                 return 0;
             }
         } else if (b2==8) {
             if (b3==2) {
                 printf("open");
                 return 0;
             }
         }
     }
     printf("close");
    
   return 0;
 }

 -----------------
 #include <stdio.h>

 int main() {
   int b;
     scanf("%d",&b);
     if (b<500 || b==500) {
         printf("350\n");
     } else {
         int res;
         res = ((b-500)*2)+350;
         printf("%d",res);
     }
    
   return 0;
 }
 --------------
 #include <stdio.h>

 int main() {
    int a,b;
     scanf("%d %d",&a,&b);
     if (b==4 || b==6 || b==9 || b==11) {
         if (a>30 || a<0) {
             printf("error");
             return 0;
         }
         printf("correct");
     } else if (b==2) {
         if (a>29 || a<0) {
             printf("error");
             return 0;
         }
         printf("correct");
     } else if (b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12) {
         if (a>31 || a<0) {
             printf("error");
             return 0;
         }
         printf("correct");
     }
   return 0;
 }
 ------------------
 #include <stdio.h>

 int main() {
     int x;
     scanf("%d",&x);
     if (x>0&&x<7) {
         printf("дошкольник");
     } else if (x>6&&x<19) {
         printf("школьник");
     } else if (x>18&&x<60) {
         printf("рабочий");
     } else if (x>59) {
         printf("пенсионер");
     }
   return 0;
 }
 --------------
 #include <stdio.h>

 int main() {
     int a,b,c,tmp;
     scanf("%d %d %d",&a,&b,&c);
     if (a > b) { tmp = a; a = b; b = tmp; }
     if (a > c) { tmp = a; a = c; c = tmp; }
     if (b > c) { tmp = b; b = c; c = tmp; }
     printf("%d %d %d",a,b,c);
    
   return 0;
 }

 */
