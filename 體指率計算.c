#include<stdio.h>
int main()
   {
       int weight, age;
       float height;
       char gender;
       char name[100];
       float ANS = 1;
       float zz;
       printf("�m�W:");
       scanf("%s", &name);
       printf("�魫:");
       scanf(" %d", &weight);
       printf("����:");
       scanf(" %f", &height);
       printf("�~��:");
       scanf(" %d", &age);
       printf("�ʧO(M/F):");
       scanf(" %s", &gender);
       height = height / 100;
       if (gender == 'M')
       {

           int(gender) = 1;
           ANS = (1.2 * weight / height / height) + (0.23 * age - 5.4) - (10.8 * gender);
           printf("����v��: %.3f%%\n", ANS);
       }
       else
       {
           int(gender) = 0;
           ANS = (1.2 * weight / height / height) + (0.23 * age - 5.4) - (10.8 * gender);
           printf("����v��: %.3f%%\n", ANS);
       }
       ANS = ANS;
       if (ANS > 0 && ANS <= 6.9)
       {
           printf("�L�G ");
       }
       else if (ANS > 6.9 && ANS < 10)
       {
           printf("��G ");

       }
       else if (ANS > 9.9 && ANS <= 12.9)
       {
           printf("���� ");

       }
       else if (ANS > 12.9 && ANS <= 16.9)
       {
           printf("���` ");

       }
       else if (ANS > 16.9 && ANS <= 19.9)
       {
           printf("���D ");

       }
       else if (ANS > 19.9 && ANS <= 24.9)
       {
           printf("�έD ");

       }
       else if (ANS > 24.9)
       {
           printf("�L�D ");

       }
       return 0;
}

