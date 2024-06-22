#include <stdio.h>

struct name{
    char fName[15];
    char mInitial;
    char lName[15];
};

struct employmentRec{
    struct name eName;
    char status[10];
    float salary;
};

int main() {
    struct name person1 = {"Edmond Kai", 'C', "Yap"}; // Method 1
    struct name person2 = {fName: "Mikka", lName: "Hernandez"}; // Method 2 does not work for nested structures
    // C does not support direct initialization of nested structure members using designated initializers outside of their natural context
    struct name person3 = { // Method 3
        .fName = "Stella Sheena",
        .lName = "Salde"
    }; 
    
    // Nested structures
    struct employmentRec employee1 = {{"John James", 'L', "Dela Cruz"}, "Full-Time", 60500.00};
    struct employmentRec employee2 = {
        .eName = {
            .fName = "Issa",
            .lName = "Reyes"
        },
        .status = "Part-Time",
        .salary = 27800.00
    };

    return 0;
}
