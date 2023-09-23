#include <stdio.h>
#include <math.h>

int main() {
    printf("Task 1\n");
    printf("Input: X, Y and a\n");
    double x, y, a;
    scanf("%lf" "%lf" "%lf", &x, &y, &a);
    double result = 2*y/pow((a-x), 2) - 1;
    printf("%lf",result);

    printf("\n--------------------------\n");
    printf("Task 2\n");
    printf("Input: X, Y\n");
    scanf("%lf" "%lf", &x, &y);
    result = ((y - 1) / (3 * x)) + (sqrt((x * y)) / (2 + x));
    printf("%lf",result);

    printf("\n--------------------------\n");
    printf("Task 3\n");
    double b, c;
    printf("Input length of side:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Result: %lf\n", area);

    printf("\n--------------------------\n");
    printf("Task 4\n");
    double price, discount;
    printf("Enter the price of product: ");
    scanf("%lf", &price);
    printf("Enter the discount percentage: ");
    scanf("%lf", &discount);

    double discountAmount = price * (discount / 100);
    double discountedPrice = price - discountAmount;
    printf("Amount including discount : %.2lf UAH\n", discountedPrice);

    printf("\n--------------------------\n");
    printf("Task 5\n");
    double x1, y1, x2, y2;
    printf("Input point 1 (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Input point 2 (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("The distance between two points: %lf\n", distance);

    printf("\n--------------------------\n");
    printf("Task 6\n");
    double time;
    printf("Enter the travel in kilometers: ");
    scanf("%lf", &distance);
    printf("Input time in hours: ");
    scanf("%lf", &time);

    double speed = distance / time;
    printf("Speed: %.2lf km/h\n", speed);
    return 0;
}
