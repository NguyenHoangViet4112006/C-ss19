#include <stdio.h>
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
void sapxep(struct Student students[], int length) {
    struct Student temp;
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}
void printStudents(struct Student students[], int length) {
    for (int i = 0; i < length; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone Number: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}
int main() {
    struct Student students[5] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Le Thi B", 21, "0987654321"},
        {3, "Tran Van C", 22, "0112233445"},
        {4, "Pham Thi D", 23, "0223344556"},
        {5, "Hoang Van E", 24, "0334455667"}
    };
    int currentLength = 5;
    printf("Danh sach sinh vien ban dau:\n");
    printStudents(students, currentLength);
    sapxep(students, currentLength);
    printf("\nDanh sach sinh vien sau khi sap xep:\n");
    printStudents(students, currentLength);

    return 0;
}

