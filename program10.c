#include<stdio.h>>
int main()
    {
        int hindi,english,maths,science,biology;
        float sum,per;
        printf("enter the marks of five subjects");
        scanf("%f%f%f%f%f",hindi,&english,&maths,&science,&biology);
        sum=hindi+english+maths+science+biology;
        printf("addition=%f",sum);
        per=sum/5;
        printf("percentage=%f",per);

        if(per>=90 && per<=100)
        {
            printf("grade a");
        }
        else if (per>=80 && per<90)
        {
            printf("grade b ");
        }

    else if (per>=70 && per<80)
        {
            printf("grade c ");
        }
        else if (per>=60 && per<70)
        {
            printf("grade d ");
        }
        else if (per<60)
        {
            printf("fail");
        }
        return 0;
   }
























