/*This written code aims to reverse individual words in string */
#include<iostream>
#include<string>
using namespace std;
string reverseWord(string word){
    int s=0,e=word.length()-1;
    while(s<e){
        swap(word[s++],word[e--]);
    }
    return word;

}
int main(){
    string line;
    getline(cin,line);
    string word="";
    string ans="";
    int i=0;
    while(i<line.length()){
            while(line[i]!=' ' && line[i]!='\0'){
                word.push_back(line[i]);
                i++;
            }
            word = reverseWord(word);
            //cout<<word<<" ";
            ans.append(word);
            ans.push_back(' ');
            word="";
            i++;
    }
    cout<<ans;
    return 0;
}