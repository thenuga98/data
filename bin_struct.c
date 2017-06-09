#include <stdio.h>
#include<stdlib.h>
#define SIZE 20

struct student
{
   int rollno;
   char name[SIZE];
   int m1, m2, m3;
   int avg;
};

int main()
{
   int n;
   struct student* stud;
   int count;

   printf("How many students?\n");
   scanf("%d", &count);
   stud = malloc(sizeof(struct student) * count);

   FILE *fptr;

   if ((fptr = fopen("student.bin","wb")) == NULL){
       printf("Error opening file!");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   for(n = 0; n < count; n++)
   {
      fflush(stdin);
      printf("Enter details for student %d:\n", n+1);
      printf("Name: ");
      scanf("%s", &stud[n].name);
      printf("Roll No: ");
      scanf("%d", &stud[n].rollno);
      printf("Three marks: ");
      scanf("%d %d %d", &stud[n].m1, &stud[n].m2, &stud[n].m3);
      stud[n].avg = (stud[n].m1 + stud[n].m2 + stud[n].m3)/3;
   }
   fwrite(stud, sizeof(struct student), 1, fptr);
   fclose(fptr);

   printf("\n");
   printf("File written.\n");
   printf("\n");

   fptr = fopen("student.bin", "rb");
   fread(stud, sizeof(stud), 1, fptr);

   for (n = 0; n < count; n++)
		{
			printf("Name: %s\n", stud[n].name);
			printf("Roll No: %d\n", stud[n].rollno);
			printf("Marks in three subjects: %d %d %d\n", stud[n].m1, stud[n].m2, stud[n].m3);
			printf("Average: %d\n", stud[n].avg);
		}
   fclose(fptr);

   return 0;
}
