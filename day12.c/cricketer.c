#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct cricketers{
        char firstname[40];
        char lastname[40];
        int age;
        int matches;
        float avg;
    }cricketer;
    cricketer arr[3];
    /* strcpy(arr[0].name,"ashwin");
     arr[0].age=37;
     arr[0].matches=39;
     arr[0].avg=34.4;
      strcpy(arr[1].name,"ashwin");
     arr[1].age=37;
     arr[1].matches=39;
     arr[1].avg=34.4;
      strcpy(arr[2].name,"ashwin");
     arr[2].age=37;
     arr[2].matches=39;
     arr[2].avg=34.4;
      strcpy(arr[3].name,"ashwin");
     arr[3].age=37;
     arr[3].matches=39;
     arr[3].avg=34.4;
      strcpy(arr[4].name,"ashwin");
     arr[4].age=37;
     arr[4].matches=39;
     arr[4].avg=34.4;
      strcpy(arr[5].name,"ashwin");
     arr[5].age=37;
     arr[5].matches=39;
     arr[5].avg=34.4;
      strcpy(arr[6].name,"ashwin");
     arr[6].age=37;
     arr[6].matches=39;
     arr[6].avg=34.4;
      strcpy(arr[7].name,"ashwin");
     arr[7].age=37;
     arr[7].matches=39;
     arr[7].avg=34.4;
      strcpy(arr[8].name,"ashwin");
     arr[8].age=37;
     arr[8].matches=39;
     arr[8].avg=34.4;
      strcpy(arr[9].name,"ashwin");
     arr[9].age=37;
     arr[9].matches=39;
     arr[9].avg=34.4; */
    /*   strcpy(arr[0].name,"ashwin");
     arr[0].age=37;
     arr[0].matches=39;
     arr[0].avg=34.4;
      strcpy(arr[0].name,"ashwin");
     arr[0].age=37;
     arr[0].matches=39;
     arr[0].avg=34.4;
      strcpy(arr[0].name,"ashwin");
     arr[0].age=37;
     arr[0].matches=39;
     arr[0].avg=34.4;
      strcpy(arr[0].name,"ashwin");
     arr[0].age=37;
     arr[0].matches=39;
     arr[0].avg=34.4;
      strcpy(arr[0].name,"ashwin");
     arr[0].age=37;
     arr[0].matches=39;
     arr[0].avg=34.4;
      strcpy(arr[0].name,"ashwin");
     arr[0].age=37;
     arr[0].matches=39;
     arr[0].avg=34.4;
     */
    for(int i=0;i<3;i++)
    {
        scanf("%s",arr[i].firstname);
        scanf("%s",arr[i].lastname);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].matches);
        scanf("%f",&arr[i].avg);
        printf("\n");
        
    }
    for(int i=0;i<3;i++)
    {
        printf("name:%s\n",arr[i].firstname,arr[i].lastname);
        printf("age:%d\n",arr[i].age);
        printf("matches:%d\n",arr[i].matches);
        printf("avg:%f\n",arr[i].avg);
        printf("\n");
    }
}