#include <stdio.h>

int main() {
    const double PI = 3.14159;
    double r; // 圆的半径
    double circumference; // 圆的周长
    double area; // 圆的面积

    printf("\n请输入半径:");
    scanf("%lf", &r);

    circumference = 2 * PI * r;
    area = PI * r * r;

    printf("圆的周长是%f\n", circumference);
    printf("圆的面积是%f\n", area);

    return 0;
}