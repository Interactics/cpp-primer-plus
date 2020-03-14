//stack.h
#ifndef STACK_H_
#define STACK_H_

//스택의 특성
// 빈 스택을 생성할 수 있다.
// 스택에 항목 추가 push
// 스택 꼭대기의 항목 삭제 pop
// 스택이 가득찼는지 검사 가능
// 스택이 비어있는지 검사 가능
struct customer {
	char fullname[35];
	double payment;
};

typedef customer Item;

class Stack{
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
};



#endif //stack.h