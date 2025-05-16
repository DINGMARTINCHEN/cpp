typedef struct {
    double* data;  // ����ָ��
    int top;  // ջ��ָ��
    int size;  // ջ�Ĵ�С
} Stack;
 
// ��ʼ��ջ
void initStack(Stack* s, int size) {
    s->data = (double*)malloc(sizeof(double) * size);// ��̬���������ڴ�
    s->top = -1;
    s->size = size;
}
 
// �ж�ջ�Ƿ�Ϊ��
int isEmpty(Stack* s) {
    return s->top == -1;
}
 
// �ж�ջ�Ƿ�����
int isFull(Stack* s) {
    return s->top == s->size - 1;
}
 
// ��ջ
void push(Stack* s, double value) {
    if (isFull(s)) { // ���ջ�Ƿ�����
        printf("Stack overflow\n");
        exit(1); // ��ջ���������˳�����
    }
 
    s->top++; // ջ��ָ���1
    s->data[s->top] = value; // ��ջ��������ֵ
}
 
// ��ջ
double pop(Stack* s) {
    if (isEmpty(s)) { // ���ջ�Ƿ�Ϊ��
        printf("Stack underflow\n");
        exit(1); // ��ջΪ�գ����˳�����
    }
 
    double value = s->data[s->top]; // ����ջ��Ԫ�ص�ֵ
    s->top--; // ջ��ָ���1
    return value; // ����ջ��Ԫ�ص�ֵ
}
 
// ��ȡջ��Ԫ��
double top(Stack* s) {
    if (isEmpty(s)) { // ���ջ�Ƿ�Ϊ��
        printf("Stack underflow\n");
        exit(1); // ��ջΪ�գ����˳�����
    }
    return s->data[s->top]; // ����ջ��Ԫ�ص�ֵ
}