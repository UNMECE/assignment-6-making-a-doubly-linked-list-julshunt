// Name: Julian Hunter
// Class: C++ Intermediate Programming & Problem-Solving
// Assignment:6 Making a double linked list
// FileName: "mainSixth.cpp"

#include <iostream>
#include "coordinate.h"
#include <random>
using namespace std;

// Function Declarations
void addCoordinate(Coordinate *list_end, float x, float y, int id);
void forwardDisplay(Coordinate *list_beginning);
void backwardDisplay(Coordinate *list_end);
void deleteCoordinate(Coordinate *list_beginning, int coord_id_to_delete);
int listLength(Coordinate *list_beginning);
void closestToward(Coordinate *list_beginning, float x, float y);

// Driver Function
int main(int argc, char *argv[]) {
    Coordinate info;
    Coordinate *list_beginning = nullptr;
    Coordinate *list_end = nullptr;

    cout << "Coordinates" << endl;
    // Allocating memory for coordinates
    // info.coord_id = int(malloc(size(int)));

    // adding coordinates
    addCoordinate(list_end, 1.0f, 2.0f, 1);
    list_beginning = list_end;

    addCoordinate(list_end, 3.0f, 4.0f, 2);
    addCoordinate(list_end, 5.0f, 6.0f, 3);

    //Calling all the functions
    void addCoordinate(Coordinate *list_end, float x, float y);
    void forwardDisplay(Coordinate *list_beginning);
    void backwardDisplay(Coordinate *list_end);


    return 0;
}

// The add coordinate function
void addCoordinate(Coordinate *list_end, float x, float , int id) {
    // Creating a new Coordinate
    Coordinate *newCoordinate = list_end;
    newCoordinate-> x=x;
    newCoordinate-> y=y;
    newCoordinate-> coord_id;
    newCoordinate-> next= NULL;
    newCoordinate-> previous = list_end;

    if (list_end) {
        list_end-> next = newCoordinate;
    }
    list_end = newCoordinate;
}

// skeleton for forward display function
void forwardDisplay(Coordinate *list_beginning) {
    Coordinate *temp = list_beginning;
    while (temp != NULL) {
        cout << "Coordiante ID: " << temp -> coord_id << "X: " << temp -> x << "Y: " << temp -> y << endl;
        temp = temp -> next;}
}

// skeleton for backward display function
void backwardDisplay(Coordinate *list_end) {
    Coordinate *aTemp = list_end;
    while (aTemp != NULL) {
        cout << aTemp -> coord_id << "X: " << aTemp -> x << "Y: " << aTemp -> y << endl;
        aTemp = aTemp -> previous;}
}

// skeleton for delete coordinate function
void deleteCoordinate(Coordinate *list_beginning, int coord_id_to_delete) {
    Coordinate *temp = list_beginning;
    while (temp != NULL) {
        if (temp -> coord_id == coord_id_to_delete) {
            if (temp -> previous) {
                temp -> previous -> next = temp -> next;
            }
            if (temp -> next) {
                temp -> next -> previous = temp -> previous;
            }
            if (temp == list_beginning) {
                list_beginning = temp -> next;
            }
            delete temp;
            break;
        }
        temp = temp -> next;
    }
}

// skeleton for the list length function
int listLength(Coordinate *list_beginning) {
    int length;
    Coordinate *temp = list_beginning;
    while (temp != nullptr) {
        length++;
        temp = temp -> next;
    }
    return length;
}

// skeleton for the closest towards function
void closestToward(Coordinate *list_beginning, float x, float y) {
    if (! list_beginning) return;
    Coordinate *closest = list_beginning;
    float minimumDistance = (list_beginning -> x - x) * (list_beginning -> x - x); + (list_beginning -> y - y) * (list_beginning -> y - y);

    Coordinate *temp = list_beginning-> next;
    while (temp != nullptr) {
        float distance = (temp-> x -x) * (temp-> x -x) + (temp-> y -y) * (temp-> y -y);
        if (distance < minimumDistance) {
            minimumDistance = distance;
            closest = temp;
        }
        temp = temp -> next;
    }
    cout << "Closest Coordinate ID: " << closest->coord_id << " (x: " << closest->x << ", y: " << closest->y << endl;
    }


// info.data = (double*)malloc(sizeof(double) * info.size);