#include <string.h> 
#include <stdlib.h> 
#include "employee.h" 

int main(void){ 
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);
    
    extern Employee EmployeeTable[];     
    extern const int EmployeeTableEntries;    
    PtrToEmployee matchPtr;

    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 
    if (matchPtr != NULL) 
        printf("Employee ID 1045 is in record %ld\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee ID 1045 is NOT found in the record\n"); 

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 
    if (matchPtr != NULL) 
        printf("Employee Tony Bobcat is in record %ld\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Tony Bobcat is NOT found in the record\n"); 
    
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "310-555-1215");
    if (matchPtr != NULL)
        printf("Employee phone 310-555-1215 is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee phone 310-555-1215 is NOT found in the record\n");

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-343-1234");
    if (matchPtr != NULL)
        printf("Employee phone 909-343-1234 is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee phone 909-343-1234 is NOT found in the record\n");

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 7.80);
    if (matchPtr != NULL)
        printf("Employee salary 7.80 is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee salary 7.80 is NOT found in the record\n");

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 9.25);
    if (matchPtr != NULL)
        printf("Employee salary 9.25 is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee salary 9.25 is NOT found in the record\n");

    return EXIT_SUCCESS; 
}
