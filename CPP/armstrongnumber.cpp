// Program for checking whether a number is armstrong number or not
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long number;
    //Take number input from user.
    cout<<"Enter the number : ";
    cin>>number;
    long long sum = 0, num_copy = number;
    //Calculate sum of cube of each digit.
    while(number) {
        int rem = number % 10;
        sum += rem*rem*rem;
        number /= 10; 
    }
    //Check whether sum is equal to number or not.
    if(sum == num_copy) {
        cout << "Given number " << num_copy << " is an armstrong number\n";
    }
    else{
        cout << "Given number " << num_copy << " is not an armstrong number\n";
    }
    return 0;
}