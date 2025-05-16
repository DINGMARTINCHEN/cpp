#include<bits/stdc++.h>
#define _CRT_SECURE_NO_WARNINGS 1
 
using namespace std;

typedef struct {
    double* data;  // �洢ջ���ݵ�����ָ��
    int top;       // ջ��ָ��
    int size;      // ջ�Ĵ�С
} Stack;
 
// ��ʼ��ջ
void initStack(Stack* s, int size) {
    s->data = (double*)malloc(sizeof(double) * size); // ��̬�����ڴ�
    s->top = -1; // ��ʼ��ջ��ָ��
    s->size = size; // ����ջ�Ĵ�С
}
 
// �ж�ջ�Ƿ�Ϊ��
int isEmpty(Stack* s) {
    return s->top == -1; // ջ��ָ��Ϊ-1ʱ��ջΪ��
}
 
// �ж�ջ�Ƿ�����
int isFull(Stack* s) {
    return s->top == s->size - 1; // ջ��ָ�����ջ�Ĵ�С��1ʱ��ջ����
}
 
// ��ջ����
void push(Stack* s, double value) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        exit(1); // ջ��ʱ�˳�����
    }
    s->top++; // ջ��ָ������
    s->data[s->top] = value; // ��ֵ����ջ��
}
 
// ��ջ����
double pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        exit(1); // ջ��ʱ�˳�����
    }
    double value = s->data[s->top]; // ȡջ��Ԫ��
    s->top--; // ջ��ָ�����
    return value; // ����ջ��Ԫ��
}
 
// ��ȡջ��Ԫ��
double top(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        exit(1); // ջ��ʱ�˳�����
    }
    return s->data[s->top]; // ����ջ��Ԫ��
}
 
// �ж��ַ��Ƿ��������
int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}
 
// ��ȡ��������ȼ�
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
 
// ִ����������
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
        exit(1); // ������Ч�����ʱ�˳�����
    }
}
 
// �ж��Ƿ��Ǹ���
int isNegativeSign(char* p, char* infix) {
    if (*p != '-') return 0; // ������Ǽ��ţ��򷵻�0
    if (p == infix) return 1; // ����Ǳ��ʽ�Ŀ�ʼ�����Ǹ���
    // ���ǰһ���ַ��������Ż��������������ǰ�ļ����Ǹ���
    return (*(p - 1) == '(') || isOperator(*(p - 1));
}
 
// ����׺���ʽת��Ϊ��׺���ʽ
void infixToPostfix(char* infix, char* postfix) {
    Stack s;
    initStack(&s, 100); // ��ʼ��ջ
 
    char* p = infix;
    char* q = postfix;
    while (*p != '\0') {
        if (isdigit(*p)) { // ���������
            do {
                *q++ = *p++;
            } while (isdigit(*p) || *p == '.');
            *q++ = ' ';
        } else if (isOperator(*p)) {
            if (*p == '-' && isNegativeSign(p, infix)) {
                *q++ = '0'; // �����Դ�����
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
            push(&s, *p); // ����������
            p++;
        } else if (*p == ')') {
            while (!isEmpty(&s) && top(&s) != '(') {
                *q++ = pop(&s); // ����������
                *q++ = ' ';
            }
            if (!isEmpty(&s)) {
                pop(&s); // ����������
            }
            p++;
        } else {
            p++; // �����ո�
        }
    }
 
    while (!isEmpty(&s)) { // ��ջ��ʣ�������������׺���ʽ
        *q++ = pop(&s);
        *q++ = ' ';
    }
 
    *q = '\0'; // ������׺���ʽ
}
 
// �����׺���ʽ��ֵ
double evaluate(char* postfix) {
    Stack s;
    initStack(&s, 100); // ��ʼ��ջ
 
    char* p = postfix;
    while (*p != '\0') {
        if (isdigit(*p)) { // ���������
            double num = 0.0;
            while (isdigit(*p)) { // ��ȡ��������
                num = num * 10 + (*p - '0');
                p++;
            }
            if (*p == '.') { // ��ȡС������
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
        } else if (isOperator(*p)) { // ����������
            double num2 = pop(&s);
            double num1 = pop(&s);
            double result = operate(num1, num2, *p);
            push(&s, result);
            p++;
        }
    }
 
    return pop(&s); // ���ؼ�����
}
 
int main() {
    char infix[100];
    char postfix[100];
    scanf("%s", infix); // ��ȡ��׺���ʽ
    infixToPostfix(infix, postfix); // ����׺���ʽת��Ϊ��׺���ʽ
    double result = evaluate(postfix); // �����׺���ʽ�Ľ��
    printf("%g", result); // ��ӡ���
    return 0;
}