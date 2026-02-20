#include<ioatream>
using namespace std;

class myqueue{
    int *arr;
    int capacity;
    int size;


    public:
    myqueue(int c){
        capacity = c;
        arr = new int(capacity);
        size = 0;

    }

bool isEmpty(){
    return size ==0;
}


bool isFull(){
    return size == capacity;
}


bool dequeue(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return ;
    }
    for(int i=1;i<size;i++){
        arr[i-1] = arr[i];
    }
    size--;
    return true;
}



int getFront(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    return arr[0];
}

int getRear(){
    if(isEmpty()){
        cout<<"Queue is emppty"<<endl;
        return -1;
    }
    return arr[size-1];

}
};
int main(){
    myqueue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<q.getFront()<<endl;

    




    return 0;
}