
#include <stdio.h>

int main()
{
      int a1, b1, c1, a2, b2, c2, a3, b3, c3, x1, x2, x3, y1, y2, y3, x, y, line_12, line_13, line_23;
      printf("enter first_point x1, y1\n");
      scanf("%d %d", &x1, &y1);
      printf("enter second_point x2, y2\n");
      scanf("%d %d", &x2, &y2);
      printf("enter third_point x3, y3\n");
      scanf("%d %d", &x3, &y3);
      printf("enter search_point x, y\n");
      scanf("%d %d", &x, &y);
      a1 = (y2 - y1);
      b1 = (x1 - x2);
      c1 = x1*(y1 - y2) + y1*(x2-x1);
      line_12 = a1*x + b1*y + c1;
      a2 = (y3 - y1);
      b2 = (x1 - x3);
      c2 = x1*(y1 - y3) + y1*(x3-x1);
      line_13 = a2*x + b2*y + c2;
      a3 = (y3 - y2);
      b3 = (x2 - x3);
      c3 = x2*(y2 - y3) + y2*(x3-x2);
      line_23 = a3*x + b3*y + c3;
      if ((x1 == x2 && x2 ==x3) || (x1 == x3 && x2 == x3)){
            printf("wrong triangle coordinations");
            return 0;
      }
      if ((y1 == y2 && y2  == y3) || (y1 == y3 && y2 == y3)){
            printf("wrong triangle coordinations");
            return 0;
      }
      if (line_12 == 0 && line_23 == 0){
            printf("across line_12 and line_23");
            return 0;
      }
      if (line_13 == 0 && line_23 == 0){
            printf("across line_13 and line_23");
            return 0;
      }
      if (line_13 == 0 && line_12 == 0){
            printf("across line_13 and line_12");
            return 0;
      }
      if (line_12 ==0 && line_13 !=0 && line_23 !=0){
            printf("on the line_12");
            return 0;
      }
      if (line_13 ==0 && line_12 !=0 && line_23 !=0){
            printf("on the line_13");
            return 0;
      }
      if (line_23 ==0 && line_13 !=0 && line_12 !=0){
            printf("on the line_23");
            return 0;
      }
      if (line_12 > 0 && line_23 < 0 && line_13 <0)
            printf("area_1");
      if (line_12 < 0 && line_23 < 0 && line_13 < 0)
            printf("area_2");
      if (line_12 < 0 && line_23 < 0 && line_13 > 0)
            printf("area_3");
      if (line_12 < 0 && line_23 > 0 && line_13 > 0)
            printf("area_4");
      if (line_12 > 0 && line_23 > 0 && line_13 > 0)
            printf("area_5");
      if (line_12 > 0 && line_23 > 0 && line_13 < 0)
            printf("area_6");
      if (line_12 < 0 && line_23 > 0 && line_13 < 0)
            printf("area_7");
      
      
      
      return 0;
}









