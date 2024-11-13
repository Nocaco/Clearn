#include <stdio.h>
#include <math.h>
#include <ctype.h>

/*求三角形三边
int main(){
    
    double A;
    double B;
    double C;

    printf("Enter side A:");
    scanf("%lf",&A);

    printf("Enter side B:");
    scanf("%lf",&B);

    C = sqrt(A * A + B * B);

    printf("side C:%.2lf",C);
    return 0;

}*/

/*询问年龄 if用法
int main(){

    int age;

    printf("\nEnter your age: ");
    scanf("%d",&age);

    if(age >= 18){
        printf("your are singed up!");
    }
    else if(age == 0){
        printf("you can't signed up!");
    }
    else if(age < 0){
        printf("you haven't been born yet!");
    }
    
    else{
        printf("You are too young to sign up!");
    }


    return 0;
}*/

/*询问成绩 switch用法
int main(){

    char grade;

    printf("\nEnter the grade:");
    scanf(" %c",&grade);

    switch (grade) {
        case 'A':
            printf("perfect\n");
            break;
        case 'B':
            printf("you did good\n");
            break;
        case 'C':
            printf("you did OKay!\n");
            break;
        default:
            printf("please enter grade!\n");
    }

    return 0;
} */

/*温度转换
int main(){

    char unit;
    float temp;

    printf("Is the temperature in (F) or (C)?:");
    scanf(" %c",&unit);// 注意%c前的空格，用于忽略前面的空白字符

    if (unit == 'C'){
        printf("请输入摄氏度：");
        scanf("%f",&temp);
        temp = (temp * 9.0 / 5 ) + 32;// 使用9.0确保浮点数除法
        printf("转化为华氏度为：%0.1f",temp);
    }
    else if(unit == 'F'){
        printf("请输入华氏度：");
        scanf("%f",&temp);
        temp = ((temp - 32) * 5.0) / 9;
        printf("转化为摄氏度为：%0.1f",temp);
    }
    else{
        printf("%c不是个温度单位!\n",unit);
    }

    return 0;
}*/

