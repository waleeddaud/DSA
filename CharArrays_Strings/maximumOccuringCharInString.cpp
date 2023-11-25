/*Find maximum occuring element in string
this code has an array of 26elements in it to store the occurences of
 each alphabet of english.Then we find maximum of array and printf the character with maximum
 occurence;*/
#include<iostream>
#include<string>
using namespace std;
char upperCase(char ch){
    if(ch>='a'&& ch<='z') return ch-'a'+'A';
    else return ch;
}
int main()
{
    string line;
    getline(cin,line);
    int arr[26] = {0};
    for(int i=0;line[i]!='\0';i++){
        line[i] = upperCase(line[i]);
    }
    //cout<<line;
    int j=0;
    while(j<line.length()){
        arr[line[j]-'A'] += 1;
        j++;
    }
    
    //Now find maximum
    int max = 0;
    int temp;
    for(int k=0;k<26;k++){
        if(arr[k]>max){
          max=arr[k];
          temp = k;
        }
    }
    char ans = temp+97;
    cout<<"Maximum occuring char is "<< ans;



    return 0;
}