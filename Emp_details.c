/* C program to take Employee details from user and print them.
To enter data values for more than 5 employees just increase value of 5 in "j<'5'" in the for loop.
*/
#include <stdio.h>
#include<string.h>
struct Emp_deatils
{
    char Emp_Name[20];
    char Emp_Id[20];
    char Emp_Exp[5];                                      //Char uses so as to put 'Not-Available' if data not availabe
    char Emp_Sal[5];                                      //Char uses so as to put 'Not-Available' if data not availabe

};
int main()
{
    int j=0;
    struct Emp_deatils e1;
    for(j=0;j<5;j++)                                      // increase value of 5 to add more employee data
    {
        int i=0;
        printf("\nEnter Employee name:\n");
        gets(&e1.Emp_Name);
        printf("\nEnter Employee Id number:\n");
        gets(e1.Emp_Id);
        printf("\nEnter Years of Experience:\n");
        gets(e1.Emp_Exp);                                  // string format uses to put NA if information not availabe
        printf("\nEnter Salary of Emplyee:\n");
        gets(e1.Emp_Sal);                                  // string format uses to put NA if information not availabe
        printf("\nEmployee Name:%s\n",e1.Emp_Name);
        printf("\nEmployee ID:%s\n",e1.Emp_Id);
        printf("\nYears of expericence:%s\n",e1.Emp_Exp);
        printf("\nSalary:%s\n",e1.Emp_Sal);
    }
return 0;
}
