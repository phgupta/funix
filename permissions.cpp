#include <stdio.h>
#include "permissions.h"

void createPermissions(Permissions *permissions, short originalPermissions, 
                       short umask)
{
  permissions->permissions = originalPermissions & ~umask;
}  // createPermissions()


void printPermissions(const Permissions *permissions)
{
  if (permissions->permissions & 4)
    printf("r");
  else  // no read permissions
    printf("-");
  
  if (permissions->permissions & 2)
    printf("w");
  else  // no write permissions
    printf("-");
  
  if (permissions->permissions & 1)
    printf("x");
  else  // no execute permissions
    printf("-");
}  // printPermissions()
