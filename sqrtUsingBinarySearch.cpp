/*Using binary Search we can calculate the square root of the number and 
in order to evaluate the (precise )decimal points of number seperate implementation is given*/
#include<iostream>
using namespace std;
int sqrt(int n){
    int s = 0;
    int e = n;
    int mid = (s+ e)/2;
    int ans = -1;
    while(s<=e){
        if (mid*mid == n){
            return mid;
        }
        if(mid*mid <= n){
            ans = mid;
            s = mid+1;
        }else{
           e = mid-1;
        }
        mid = (s+ e)/2;
    }return ans;

}
double preciseSqrt(int temp, int precision, int n){
    double factor = 1;
    double ans = -1;
    for(int i = 0; i<precision; i++){
        factor = factor / 10;
        for(double i = temp; i*i < n; i = i+factor){
            ans = i;
        }
    }return ans;
}
int main()
{
 int n;
 cout<<"Enter the number : "<<endl;
 cin>>n;
 int precision;
 cout<< "Enter  the precision to which square root is be evaluated: \n";
 cin>>precision;
 cout<<"The sqrt in interger value is : "<< sqrt(n)<<endl;

 int temp = sqrt(n);
 cout<<"The sqrt upto given precise decimal points is : "<< preciseSqrt(temp, precision, n);





return 0;
}