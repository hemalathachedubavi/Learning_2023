/* 1. Use structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.*/

    #include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box* boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

double calculateSurfaceArea(struct Box* boxPtr) {
    return 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
}

int main() {
    struct Box myBox;
    struct Box* boxPtr = &myBox;
    
    // Assign values to the box members
    myBox.length = 5.0;
    myBox.width = 3.0;
    myBox.height = 4.0;
    
    // Access structure members using (*) asterisk and (.) dot operator
    printf("Using (*) and (.) operators:\n");
    printf("Length: %.2f\n", (*boxPtr).length);
    printf("Width: %.2f\n", (*boxPtr).width);
    printf("Height: %.2f\n", (*boxPtr).height);
    
    // Access structure members using (->) arrow operator
    printf("\nUsing (->) operator:\n");
    printf("Length: %.2f\n", boxPtr->length);
    printf("Width: %.2f\n", boxPtr->width);
    printf("Height: %.2f\n", boxPtr->height);
    
    // Calculate volume and surface area
    double volume = calculateVolume(boxPtr);
    double surfaceArea = calculateSurfaceArea(boxPtr);
    
    printf("\nVolume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
    
    return 0;
}

