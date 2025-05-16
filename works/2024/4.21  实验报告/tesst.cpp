typedef struct {
    double* data;  // 数组指针
    int top;  // 栈顶指针
    int size;  // 栈的大小
} Stack;
 
// 初始化栈
void initStack(Stack* s, int size) {
    s->data = (double*)malloc(sizeof(double) * size);// 动态分配数组内存
    s->top = -1;
    s->size = size;
}
 
// 判断栈是否为空
int isEmpty(Stack* s) {
    return s->top == -1;
}
 
// 判断栈是否已满
int isFull(Stack* s) {
    return s->top == s->size - 1;
}
 
// 入栈
void push(Stack* s, double value) {
    if (isFull(s)) { // 检查栈是否已满
        printf("Stack overflow\n");
        exit(1); // 若栈已满，则退出程序
    }
 
    s->top++; // 栈顶指针加1
    s->data[s->top] = value; // 在栈顶插入新值
}
 
// 出栈
double pop(Stack* s) {
    if (isEmpty(s)) { // 检查栈是否为空
        printf("Stack underflow\n");
        exit(1); // 若栈为空，则退出程序
    }
 
    double value = s->data[s->top]; // 储存栈顶元素的值
    s->top--; // 栈顶指针减1
    return value; // 返回栈顶元素的值
}
 
// 获取栈顶元素
double top(Stack* s) {
    if (isEmpty(s)) { // 检查栈是否为空
        printf("Stack underflow\n");
        exit(1); // 若栈为空，则退出程序
    }
    return s->data[s->top]; // 返回栈顶元素的值
}