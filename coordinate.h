// Name: Julian Hunter
// Class: C++ Intermediate Programming & Problem Solving
// Assignment:6 Making a double linked list
// FileName: "coordinate.h"

#include <iostream>

struct _coordinate
{
  float x;
  float y;
  int coord_id;
  struct _coordinate *next;
  struct _coordinate *previous;
};
typedef struct _coordinate Coordinate;