/*#include<bits/stdc++.h>
using namespace std;
Q1 - Given two numbers x and y find a product using recursion.
sol:-
int multiplication(int n , int m){
    if(m == 1){
        return n;
    }
    return n + multiplication(n,m-1);
}
int main(){
    int n,m;
    cout<<"enter n and m"<<endl;
    cin>>n>>m;
    cout<<multiplication(n,m);
    return 0;
}


Q2 - Given a number n, check whether it's a prime number or not using recursion.
sol:-
bool check_prime(int n , int i = 2){
    if(i * i > n){
        return true;
    }
    if(n%i == 0){
        return false;
    }
    check_prime(n,i+1);
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    bool res = check_prime(n);
    if(res){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}



Q3 - Given a decimal number as input, we need to write a program to convert the given decimal
number into its equivalent binary number.
sol:-
int find_binary(int deci_num){
    if(deci_num == 0){
        return 0;
    }
    return (deci_num%2 + 10 * find_binary(deci_num/2));
}
int main(){
    int deci_num;
    cout<<"enter decimal number"<<endl;
    cin>>deci_num;
    cout<<find_binary(deci_num)<<" ";
    return 0;
}



Q4 - Given the Binary code of a number as a decimal number, we need to convert this into its
equivalent Gray Code. In gray code, only one bit is changed in 2 consecutive numbers.
Hint: The Most Significant Bit (MSB) of the gray code is always equal to the MSB of the given
binary code and other bits of the output gray code can be obtained by XORing binary code bit at
that index and previous index.
sol:-
int binary_to_gray( int binary_num){
    if(! binary_num){
        return 0;
    }
    int a = binary_num%10;

    int b = (binary_num/10)%10;
    if((a && !b) || (!a && b))
    return (1+ 10 * binary_to_gray(binary_num/10));

    return (10 * binary_to_gray(binary_num/10));
}
int main(){
    int binary_num;
    cout<<"enter binary number"<<endl;
    cin>>binary_num;
    cout<<binary_to_gray(binary_num);
    return 0;
}
*/