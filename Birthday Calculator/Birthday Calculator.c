#include<stdio.h>

int main()
{
               int nday,nmonth,nyear;
               int bday,bmonth,byear;
               int days,monts,years;
               int i;
               char go;
                printf("\n-----------------------Birth day calculator-----------------------\n");
     while (1)
                
         {  
                  printf("\n------------------------------------------\n");
                  printf("Enter date of today(like this YYYY MM DD): ");
                  scanf("%d %d %d",&nyear,&nmonth,&nday);
                  printf("Enter your birth day(like this YYYY MM DD): ");
                  scanf("%d %d %d",&byear,&bmonth,&bday);
                   printf("\n");
             if(bmonth<=nmonth)
               {
                     if(bday<=nday){
                        monts=nmonth-bmonth;
                        days=nday-bday;
                        years=nyear-byear;    
                        printf("Your Age is %d years %d months %d days",years,monts,days);
                               }
                  
                     else if(bday>=nday){
                        for(i=0;i<1;i++){
                          nday+=30;
                          nmonth--;
                          monts=nmonth-bmonth;
                          days=nday-bday;
                          years=nyear-byear;
                        }                
                       printf("Your Age is %d years %d months %d days",years,monts,days);
                     }
               }
               
            else if(bmonth>=nmonth)
              {
                     if(bday<=nday)
                       for(i=0;i<1;i++){
                         nmonth+=12;
                         nyear--;
                         monts=nmonth-bmonth;
                         days=nday-bday;
                         years=nyear-byear;
                     printf("Your Age is %d years %d months %d days",years,monts,days);
                       }

                     else if(bday>=nday)
                       for(i=0;i<1;i++){
                         nday+=30;
                         nmonth+=11;
                         nyear--;
                         monts=nmonth-bmonth;
                         days=nday-bday;
                         years=nyear-byear;
                     printf("Your Age is %d years %d months %d days",years,monts,days);
                       }
              }
              
               printf("\n\nExit?(Y/N): ");
                scanf("%s",&go);
                if(go=='y'){
                  printf("------------------------------------------\n");
                break;
                }

         }
  
  void age(int present_date, int present_month, int present_year, int birth_date, int birth_month, int birth_year) {
   int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   if (birth_date > present_date) {
      present_date = present_date + month[birth_month - 1];
      present_month = present_month - 1;
   }
   if (birth_month > present_month) {
      present_year = present_year - 1;
      present_month = present_month + 12;
   }
   int final_date = present_date - birth_date;
   int final_month = present_month - birth_month;
   int final_year = present_year - birth_year;
   printf("Present Age Years: %d Months: %d Days: %d", final_year, final_month, final_date);
}
int main() {
   int present_date = 21;
   int present_month = 9;
   int present_year = 2019;
   int birth_date = 25;
   int birth_month = 9;
   int birth_year = 1996;
   age(present_date, present_month, present_year, birth_date, birth_month, birth_year);
   return 0;
}
         
}
