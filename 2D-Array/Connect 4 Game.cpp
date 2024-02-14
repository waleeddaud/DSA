#include<iostream>
#include<iomanip>
using namespace std;
#define row 6
#define col 7
void display(int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<setw(3)<<arr[i][j];
        }
        cout<<endl;
    }
}
bool gameOver(int arr[row][col]){
    int i,j;
    bool flag=0;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(arr[i][j] == 0)
                flag =1;
        }
    }
    if(flag==1)
        return 0;
    return 1;
}

int checkWinner(int arr[row][col]){
    int i,j,k;
    int zero, one, two, first;
    bool flag;

    // Check horizontally
    for (i=0;i<row;i++) {
        one=0;
        two=0;
        zero=0;

        for (j=0;j<col;j++) {
            if (arr[i][j] == 0) {
                zero++;
                one = 0;
                two = 0;
            } else if (arr[i][j] == 1) {
                one++;
                two = 0;
                zero = 0;
            } else if (arr[i][j] == 2) {
                two++;
                one = 0;
                zero = 0;
            }

            if (one >= 4 || two >= 4) return 1;  
        }
    }

    // Check vertically
    for (j = 0; j < col; j++) {
        one = 0;
        two = 0;
        zero = 0;

        for (i = 0; i < row; i++) {
            if (arr[i][j] == 0) {
                zero++;
                one = 0;
                two = 0;
            } else if (arr[i][j] == 1) {
                one++;
                two = 0;
                zero = 0;
            } else if (arr[i][j] == 2) {
                two++;
                one = 0;
                zero = 0;
            }

            if (one >= 4 || two >= 4) return 1;  
        }
    }

    // Check Primary Diagonal
    for(i=0;i<row-3;i++){
        for(j=0;j<col-3;j++){
            if (arr[i][j] != 0 && arr[i][j] == arr[i+1][j+1] &&
                    arr[i][j] == arr[i+2][j+2] &&
                    arr[i][j] == arr[i+3][j+3]) {
                return 1;
            }
        }
    }
    

    // Check Secondary Diagonal
    for (i = 0; i < row - 3; i++) {
        for (j=3;j<col;j++){
            flag = 1;
            first = arr[i][j];
            for (k = 0; k < 4; k++) {
                if (arr[i+k][j-k]!=first || arr[i+k][j-k] == 0)
                    flag = 0;
            }
            if (flag==1) return 1; 
        }
    }

    return 0;  
}

int main()
{
    //The basic connect 4 game has 6 rows and 7 columns
    cout<<"**********************************************\n";
    cout<<"Welcome to connect 4 game- Made by \e[1mWaleed Daud \e[0m\n";
    int arr[row][col] = {0};
    int arrValidRows[7]={5,5,5,5,5,5,5};
    int colNum;
    int i=6;
    bool player =1;
    while(true){
        if(gameOver(arr)){
            cout<<"Game tied ,Nobody Won"<<endl;
            break;
        }
        if(checkWinner(arr)){
             if(player==1)   cout<<"\e[1mCongratulations, Player 2 Won the game"<<endl;
             else            cout<<"\e[1mCongratulations, Player 1 Won the game\e[0m"<<endl;
            break; 
        }
        if(player==1) cout<<"\e[1mPLAYER 1\n";
        else cout<<"\e[1mPLAYER 2\e[0m\n";
        cout<<"\e[0mEnter column number from 0 to 6 : ";
        cin>>colNum;
        while(colNum>6||colNum<0){
            cout<<"Enter Valid Column Number: ";
            cin>>colNum;
        }
        if(arrValidRows[colNum]>=0){
            if(player){
            arr[arrValidRows[colNum]][colNum] = 1;
            player =0;
            arrValidRows[colNum]--;
            }
            else {
                arr[arrValidRows[colNum]][colNum] = 2;
                player=1;
                arrValidRows[colNum]--;
            }
        }
        else{
            cout<<"This column is fully occupied, enter another column, please"<<endl;
            continue;
        }
        display(arr);
    }
    return 0;
}