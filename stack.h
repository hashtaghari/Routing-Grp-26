

struct StackNode
{
    int data;
    struct StackNode *next;
};

typedef struct StackNode *Stack;

struct StackNode *newNode(int data);
int isEmptyStack(struct StackNode **root);
void push(struct StackNode **root, int data);
int pop(struct StackNode **root);
int peek(struct StackNode **root_ref);
void printstack(Stack *s);
