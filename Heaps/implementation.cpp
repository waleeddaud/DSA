#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0] = -1;
        size =0;
    }
    void insert(int data){
        size += 1;
        if(size<=100){
            arr[size] = data;
            //Now take data to its right place 
            int index = size;
            while(index > 1){
                int parent = index / 2;
                if(arr[parent] < arr[index]){
                    swap(arr[parent], arr[index]);
                    index = parent;
                }else{
                    return ;
                }
            } 

        }else{
            cout<<"Heap is full\n";
        }
    }
    int pop(){
        if(size == 0){
            cout<<"heap is empty\n";
            return -1;
        }
        int temp = arr[1];
        swap(arr[1], arr[size]);
        //Now take the last element to its correct position
        size--;
        int i = 1;
        int j = 2*i;
        while(j<size){
            if(arr[j+1]>arr[j]){
                j = j+1;
            }
            if(arr[i] < arr[j]){
                swap(arr[i],arr[j]);
                i = j;
                j = 2*i;
            }else break;
        }
        return temp;

    }
    void heapSort(){
        int n = size;
        for(int i=1;i<=n; i++)
            cout<< this->pop()<<" ";
        cout<<"\n";
        for(int i=1;i<=n; i++)          
            cout<<arr[i]<<" ";
        
    }
    void print(){
        for(int i=1;i<=size ;i++){
            cout<<arr[i]<<" ";
        }cout<<"\n";
    }
};
int main()
{
    heap h1;
    h1.insert(12);
    h1.insert(70);
    h1.insert(20);
    h1.insert(25);
    h1.insert(3);
    h1.insert(99);

    h1.print();
    // h1.pop();
    // h1.print();
    // h1.pop();
    //  h1.pop();
    //  h1.pop();
    //  h1.pop();
     //h1.pop();
    h1.heapSort();
    return 0;
}