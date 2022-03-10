#include <string.h>
#include "employee.h"

PrtToEmployee searchEmployeeByNumber(PrtToConstEmployee ptr, int tableSize, long targetNumber)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++)
    {
        if(ptr->number == targetNumber)
            return (PrtToEmployee) ptr;
    }
    return NULL;
}

PrtToEmployee searchEmployeeByName(PrtToConstEmployee ptr, int tableSize, char * targetName)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++)
    {
        if(strcmp(ptr->name, targetName) == 0)
            return (PrtToEmployee) ptr;
    }
    return NULL;
}