#ifndef PERMISSIONS_H
  #define PERMISSIONS_H

typedef struct 
{
  short permissions;
} Permissions;

void createPermissions(Permissions *permissions, short originalPermissions, 
                       short umask);
void printPermissions(const Permissions *permissions);

#endif  // PERMISSIONS_H

