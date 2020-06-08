#include<stdio.h>
int main()
   {
       int weight, age;
       float height;
       char gender;
       char name[100];
       float ANS = 1;
       float zz;
       printf("姓名:");
       scanf("%s", &name);
       printf("體重:");
       scanf(" %d", &weight);
       printf("身高:");
       scanf(" %f", &height);
       printf("年齡:");
       scanf(" %d", &age);
       printf("性別(M/F):");
       scanf(" %s", &gender);
       height = height / 100;
       if (gender == 'M')
       {

           int(gender) = 1;
           ANS = (1.2 * weight / height / height) + (0.23 * age - 5.4) - (10.8 * gender);
           printf("體指率為: %.3f%%\n", ANS);
       }
       else
       {
           int(gender) = 0;
           ANS = (1.2 * weight / height / height) + (0.23 * age - 5.4) - (10.8 * gender);
           printf("體指率為: %.3f%%\n", ANS);
       }
       ANS = ANS;
       if (ANS > 0 && ANS <= 6.9)
       {
           printf("過瘦 ");
       }
       else if (ANS > 6.9 && ANS < 10)
       {
           printf("精瘦 ");

       }
       else if (ANS > 9.9 && ANS <= 12.9)
       {
           printf("健美 ");

       }
       else if (ANS > 12.9 && ANS <= 16.9)
       {
           printf("正常 ");

       }
       else if (ANS > 16.9 && ANS <= 19.9)
       {
           printf("略胖 ");

       }
       else if (ANS > 19.9 && ANS <= 24.9)
       {
           printf("肥胖 ");

       }
       else if (ANS > 24.9)
       {
           printf("過胖 ");

       }
       return 0;
}

