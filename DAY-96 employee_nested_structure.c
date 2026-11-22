#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int employee_id;
    float salary;
    struct Date joining_date;
};

int main() {
    struct Employee employee;

    printf("Enter employee name: ");
    scanf(" %[^\n]", employee.name);

    printf("Enter employee ID: ");
    scanf("%d", &employee.employee_id);

    printf("Enter salary: ");
    scanf("%f", &employee.salary);

    printf("Enter joining date (DD MM YYYY): ");
    scanf("%d %d %d",
          &employee.joining_date.day,
          &employee.joining_date.month,
          &employee.joining_date.year);

    printf("\nEmployee Details\n");
    printf("-------------------------\n");
    printf("Name: %s\n", employee.name);
    printf("Employee ID: %d\n", employee.employee_id);
    printf("Salary: %.2f\n", employee.salary);
    printf("Joining Date: %02d-%02d-%d\n",
           employee.joining_date.day,
           employee.joining_date.month,
           employee.joining_date.year);

    return 0;
}
