 //LEetCode check Palindrome
 #include<iostream>
 #include<string>
 using namespace std;
 char Low(char ch){
        if(ch>='A'&&ch<='Z')
            return ch - 'A' +'a';
        return ch;
    }
    
    bool nonAlphaNumeric(char c){
        if((c>='0' && c<='9') || (c>='a'&&c<='z') ||(c>='A'&&c<='Z') )
            return true;
        return false;
    }
    bool isPalindrome(string s) {
        int st = 0;
        int e = s.length() -1;
        while(st<=e){
            if(!nonAlphaNumeric(s[st])) {
                st++;
                continue;
            }
            if(!nonAlphaNumeric(s[e])) {
                e--;
                continue;
            }
            if((Low(s[st]) != Low(s[e]))&& nonAlphaNumeric(s[st])&&nonAlphaNumeric(s[e])){
                return false;
            }else{
                st++;
                e--;
            }
        }
        return true;

    }
    int main(){
        string one = "A man, a plan, a canal: Panama";
        cout<< boolalpha<< isPalindrome(one);
        cout<<"\n"<<Low('C');

    }