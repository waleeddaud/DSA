/*This written code checks if a string is palindrome or not. It 
should not be case sensitive(eg; 'A' or 'a' are considered same)
It also checks and ignores any whitespace and special symbols and considers only alphanumeric characters*/
#include<iostream>
using namespace std;
bool checkAlphaNumneric(char ch){
    if((ch>='A'&& ch<='Z')||(ch>='a' &&ch<='z')||(ch>='0' && ch<='9'))
        return 1;
    else return 0;
}
char toLowerCase(char ch){
    if((ch >= 'a' && ch <= 'z')||(ch>='0' && ch<='9'))  return ch;
    else    return ch-'A'+'a';
}

bool checkPalindrome(char s[],int n){
    int start =0; 
    int end=n-1;
    while(start<=end){
        while(start<end && checkAlphaNumneric(s[start])==0)
            start++;
        while(start<end && checkAlphaNumneric(s[end])==0)
            end--;
        if(toLowerCase( s[start] ) !=  toLowerCase( s[end]) ){
          return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;

}
int getLength(char name[]){
    int count=0;
    int i=0;
    for(;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main()
{
    char s[100];
    cin >> s;
    int len  =  getLength(s);
    cout<<"Palindrome or not: "<<boolalpha<<checkPalindrome(s , len);
    


    return 0;
}