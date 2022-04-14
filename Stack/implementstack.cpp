#include <iostream>
using namespace std;
class stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    // functions
    stack(int size)
    {
        this->size = size;
        arr = new int(size);
        top = -1;
    }
    void push(int element){
if(size-top>1){
    top++;
    arr[top]=element;
}
else{
    cout<<"Stack Overflow"<<endl;
}
    }
    void pop(){
if(top>=0){
top--;
}
else{
cout<<"Stack Underflow"<<endl;
}
    }
    int peak(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }

    }

    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }

    }
};
int main()
{
    stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);
    cout<<st.peak()<<endl; 
    st.pop();
    cout<<st.peak()<<endl;
      st.pop();
    cout<<st.peak()<<endl;
      st.pop();
      st.pop();
    if(st.isempty()){
        cout<<"Stack is empty";
    }
    else{
        cout<<"Stack is not empty";
    }
    st.push(33); // now stack is full



}