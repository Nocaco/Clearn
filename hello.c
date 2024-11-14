#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h> 

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

/* 简单计算器
int main(){

    char c;
    double num1;
    double num2;
    double result;

    printf("please enter an operater (+ - * /): ");
    scanf(" %c",&c);

    printf("enter number1:");
    scanf(" %lf",&num1);

    printf("enter number2:");
    scanf(" %lf",&num2);

    switch (c){
        case '+':
            result = num1 + num2;
            printf("result is : %0.2lf",result);
            break;
        case '-':
            result = num1 - num2;
            printf("result is : %0.2lf",result);
            break;
        case '*':
            result = num1 * num2;
            printf("result is : %0.2lf",result);
            break;
        case '/':
            result = num1 / num2;
            printf("result is : %0.2lf",result);
            break;
            
        default:
        printf(" %c is not valid",c);
    }

    return 0;    
} */

/*and && or || not !
int main(){
    int temp = 31;
    bool sunny = 1;

    if(temp >= 0 && temp < 30 && sunny){
        printf("the weather is good!");
    }
    /*if(temp >= 30 || temp <=0){
        printf("the weather is bad");
    }

    if(!sunny){ // 反转
        printf("\nIt's clody day");
    }
    else{
        printf("\nIt's sunnny day!");
        
    }
    return 0;
} */


/*函数调用(三遍问候)
void good(){
    printf("\ngood morning!");
    printf("\ngood afternoom!");
    printf("\ngood evening!");

}
int main(){
    good();
    good();
    good();

    return 0;
}*/

// 函数的参数调用 只要传的是参数顺序和数据 函数不能彼此看到内部
/*void birthday(char x[],int y)
{
    printf("happy birthday %s\n",x);
    printf("your're %d years old now!",y);
}
int main(){
    
    char name[]="bro";
    int age = 24;

    birthday(name,age);


    return 0;
}*/


//调用函数的返回return需要定义类型
/*double square(double x)
{
    double result = x * x;
    return result;
}
void main(){

    double x = square(2.0);
    printf("%lf",x);

    //return 0;

}*/

//比较两个数的大小 三元运算符
/*int findmax(int x , int y)
{
    //if(x > y){
        //return x;
    //}
    //else{
    //    return y;
    //}
    return (x > y) ? x : y;
}
int main(){
    int max = findmax(5,6);
    printf("%d",max);
    return 0;
}*/