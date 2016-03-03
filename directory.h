// Author: Sean Davis

#ifndef DIRECTORY_H
  #define DIRECTORY_H

#include "permissions.h"

#define MAX_DIRECTORIES 3

typedef struct Dir
{
  char *name;
  int time;
  struct Dir *subDirectories;
  int subDirectoryCount;
  struct Dir *parent;
  Permissions permissions;
} Directory;

Directory* cd(Directory *directory, int argCount, const char *arguments[]);
void createDirectory(Directory *directory, const char *name, short umask, 
                     int time, Directory *parent);
void ls(const Directory *directory, int argCount, const char *arguments[]);
void mkdir(Directory *directory,  int argCount, const char *arguments[], 
           short umask, int time);
void showPath(const Directory *directory);

#endif  // DIRECTORY_H

