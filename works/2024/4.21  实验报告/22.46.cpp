#include<bits/stdc++.h>
#define _CRT_SECURE_NO_WARNINGS 1
 
using namespace std;

typedef struct {
    double* data;  // 存储栈数据的数组指针
    int top;       // 栈顶指针
    int size;      // 栈的大小
} Stack;
 
// 初始化栈
void initStack(Stack* s, int size) {
    s->data = (double*)malloc(sizeof(double) * size); // 动态分配内存
    s->top = -1; // 初始化栈顶指针
    s->size = size; // 设置栈的大小
}
 
// 判断栈是否为空
int isEmpty(Stack* s) {
    return s->top == -1; // 栈顶指针为-1时，栈为空
}
 
// 判断栈是否已满
int isFull(Stack* s) {
    return s->top == s->size - 1; // 栈顶指针等于栈的大小减1时，栈已满
}
 
// 入栈操作
void push(Stack* s, double value) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        exit(1); // 栈满时退出程序
    }
    s->top++; // 栈顶指针增加
    s->data[s->top] = value; // 将值放入栈顶
}
 
// 出栈操作
double pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        exit(1); // 栈空时退出程序
    }
    double value = s->data[s->top]; // 取栈顶元素
    s->top--; // 栈顶指针减少
    return value; // 返回栈顶元素
}
 
// 获取栈顶元素
double top(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        exit(1); // 栈空时退出程序
    }
    return s->data[s->top]; // 返回栈顶元素
}
 
// 判断字符是否是运算符
int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}
 
// 获取运算符优先级
int getPriority(char op) {
    switch (op) {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    default:
        return 0;
    }
}
 
// 执行四则运算
double operate(double num1, double num2, char op) {
    switch (op) {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        return num1 / num2;
    default:
        printf("Invalid operator: %c\n", op);
        exit(1); // 遇到无效运算符时退出程序
    }
}
 
// 判断是否是负号
int isNegativeSign(char* p, char* infix) {
    if (*p != '-') return 0; // 如果不是减号，则返回0
    if (p == infix) return 1; // 如果是表达式的开始，则是负号
    // 如果前一个字符是左括号或其他运算符，则当前的减号是负号
    return (*(p - 1) == '(') || isOperator(*(p - 1));
}
 
// 将中缀表达式转换为后缀表达式
void infixToPostfix(char* infix, char* postfix) {
    Stack s;
    initStack(&s, 100); // 初始化栈
 
    char* p = infix;
    char* q = postfix;
    while (*p != '\0') {
        if (isdigit(*p)) { // 如果是数字
            do {
                *q++ = *p++;
            } while (isdigit(*p) || *p == '.');
            *q++ = ' ';
        } else if (isOperator(*p)) {
            if (*p == '-' && isNegativeSign(p, infix)) {
                *q++ = '0'; // 补零以处理负号
                *q++ = ' ';
            }
            while (!isEmpty(&s) && isOperator(top(&s)) &&
                   getPriority(top(&s)) >= getPriority(*p)) {
                *q++ = pop(&s);
                *q++ = ' ';
            }
            push(&s, *p);
            p++;
        } else if (*p == '(') {
            push(&s, *p); // 处理左括号
            p++;
        } else if (*p == ')') {
            while (!isEmpty(&s) && top(&s) != '(') {
                *q++ = pop(&s); // 处理右括号
                *q++ = ' ';
            }
            if (!isEmpty(&s)) {
                pop(&s); // 弹出左括号
            }
            p++;
        } else {
            p++; // 跳过空格
        }
    }
 
    while (!isEmpty(&s)) { // 将栈中剩余的运算符加入后缀表达式
        *q++ = pop(&s);
        *q++ = ' ';
    }
 
    *q = '\0'; // 结束后缀表达式
}
 
// 计算后缀表达式的值
double evaluate(char* postfix) {
    Stack s;
    initStack(&s, 100); // 初始化栈
 
    char* p = postfix;
    while (*p != '\0') {
        if (isdigit(*p)) { // 如果是数字
            double num = 0.0;
            while (isdigit(*p)) { // 提取整数部分
                num = num * 10 + (*p - '0');
                p++;
            }
            if (*p == '.') { // 提取小数部分
                double frac = 0.1;
                p++;
                while (isdigit(*p)) {
                    num += (*p - '0') * frac;
                    frac /= 10;
                    p++;
                }
            }
            push(&s, num);
        } else if (*p == ' ') {
            p++;
        } else if (isOperator(*p)) { // 如果是运算符
            double num2 = pop(&s);
            double num1 = pop(&s);
            double result = operate(num1, num2, *p);
            push(&s, result);
            p++;
        }
    }
 
    return pop(&s); // 返回计算结果
}
 
int main() {
    char infix[100];
    char postfix[100];
    scanf("%s", infix); // 读取中缀表达式
    infixToPostfix(infix, postfix); // 将中缀表达式转换为后缀表达式
    double result = evaluate(postfix); // 计算后缀表达式的结果
    printf("%g", result); // 打印结果
    return 0;
}