#include <stdio.h>
#include <stdint.h>
 
void menu()
{
     
        printf("\n-List of 32 students (0 to 31)-\n");
        printf("\t\t-MENU-\n\n");
        printf("\t\t1. Set attendance\n"); //presence (present)
        printf("\t\t2. Clear attendance\n"); //absence (not present)
        printf("\t\t3. Attendance count info\n"); //show attendance list and how counting how many present and not present
        printf("\t\t4. Change attendance\n"); // change mistaken presence/absence
        printf("\t\t5. Check student\n"); //checks if student is present or not present
        printf("\t\t6. Empty attendance\n"); //reset the list (set all to zero)
        printf("\t\t7. Exit\n\n");
        
}

uint32_t setBit(uint32_t *attendance)
{
    int bitt = 0;
printf("Which student attend do you want to set (set to 1) ? : "); // set present
scanf("%u", &bitt);
*attendance = *attendance | (1<<bitt);
printf("(for debugging) The attendance in decimal is : %d \n", *attendance);
return *attendance;
}

uint32_t clearBit(uint32_t *attendance)
{
    int bitt = 0;
printf("Which student attend do you want to clear (set to 0) ? : "); //clear present => becomes 0(not present)
scanf("%u", &bitt);
*attendance = *attendance & ~(1<<bitt);
printf("(for debugging) The attendance in decimal is : %d \n", *attendance);
return *attendance;
}

uint32_t changeBit(uint32_t *attendance)
{
    int bitt = 0;
printf("Which student attendance mark do you want to change (flip 1->0 , 0->1) ? : ");
scanf("%u", &bitt);
*attendance = *attendance ^ (1<<bitt);
printf("(for debugging) The attendance in decimal is : %d \n", *attendance);
return *attendance;
}

int checkBit(uint32_t *attendance, int *student)//used for returning to the attendanceInfo function , while checkBitPrint is to print and its used in another options
{

int attend = (*attendance&(1<<*student))>>*student;  

return attend; // to outer functions (attendanceInfo)
}

void checkBitPrint(uint32_t *attendance, int *student)//used for printing, while checkBit is for returning to the attendanceInfo function and its used in option attendance info
{

int attend = (*attendance&(1<<*student))>>*student;  
if(attend == 1)
{
printf("The student %d is Present(%d)\n",*student,attend);
}
else if(attend == 0)
{
printf("The student %d is not present(%d)\n",*student,attend);
}
else
{
    printf("\n- error -\n");
}
}

void currentAttendance(uint32_t *attendance)
{   
    printf("Current Attendance List\n");
    for(int bit=sizeof(*attendance)*8-1; bit >= 0; bit--)
    {printf("%d ", (*attendance & (1<<bit))>>bit);}
}

void attendanceInfo(uint32_t *attendance)
{  
    currentAttendance(*(&attendance));
    int present=0,notPresent=0;
    for(int bit=sizeof(*attendance)*8-1; bit >= 0; bit--)
    {
                
               int check = checkBit(*(&attendance), &bit);
                if(check == 1)//is 1
                {
                    present++;
                }
                else if(check == 0) // is 0
                {
                    notPresent++;
                }
                else
                {
                    printf("\n- error -\n");
                }
    }
    printf("= %d \n\n", *attendance);
    printf(" %d students are present!\n", present);
    printf(" %d students are not present!\n", notPresent);
}


uint32_t clearList(uint32_t *attendance)
{
   return *attendance & 0; // 0 (clear list)
   //return *attendance * 0
   //*attendance = 0; return attendance 
}

int main()
 {
 uint32_t attendance = 0; //00000000000000000000000000000000 => 0 => 32 empty bits 
int option;
    while (1)
        {
        printf("--------------------------------------------------------------------------------------------");
        putchar('\n');
        putchar('\n');
        currentAttendance(&attendance);
        putchar('\n');
        putchar('\n');
        printf("--------------------------------------------------------------------------------------------");
        menu();
        scanf("%d", &option);   

        if (option == 1)
        {
            setBit(&attendance);
        }
            else if (option == 2)
            {
                // to do
                clearBit(&attendance);
            }
                else if (option == 3)
                {
                    // to do
                    // printf("The attendance is : %d \n", attendance);
                    /*for(int bit=8; bit >= 0; bit--)
                    {printf("%d ", (attendance & (1<<bit))>>bit);}
                    printf("= %d \n", attendance);*/
                   
                    attendanceInfo(&attendance);
                }
                    else if(option == 4)
                    {
                        changeBit(&attendance);
                    }
                        else if(option == 5)
                        {
                            // to do
                             int student = 0;
                            printf("Which student do you want to check (check if present or not) ? : ");
                            scanf("%u", &student);
                            checkBitPrint(&attendance,&student);//used for printing, while checkBit is for returning to the attendanceInfo function 
                        }
                                else if(option == 6)
                                {
                                // to do 
                                attendance = 0;
                                printf("\nLIST CLEARED..\n");
                                }
                                    else if(option == 7)
                                    {
                                    // to do 
                                    return 0; 
                                    }
                                        else
                                            {
                                                printf("\n- error (wront option) -\n");
                                                printf("- try again -\n");
                                            }
        
        }
    return 0;
 }

 
