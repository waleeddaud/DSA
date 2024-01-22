#include<iostream>
using namespace std;
bool checkPalindrome(string name , int s, int e){
    //base case
    if(s>e)
        return 1;
    //Solve for one case
    if(name[s]!=name[e])    return 0;
    //recursive call
    return checkPalindrome(name,++s,--e);


}
int main()
{
    string name ="babbab";
    int s=0;int e = name.length()-1;
    if(checkPalindrome(name,s,e))
        cout<<"Palindrome String";
        else cout<<"Not a Palindrome";
    return 0;
}