#include<iostream>
#include<stdlib.h>
using namespace std;
void reverse(char name[], int len){
    int i=0;
    int j=len-1;
    while(i<j){
        swap(name[i++],name[j--]);
    }

}
int getLength(char name[]){
    int count =0;
    for(int i=0; name[i] !='\0';i++){
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout<<"Enter you name: ";
    cin>> name ;
    int len = getLength(name);
    reverse(name, len);
    cout<< name;
return 0;
}