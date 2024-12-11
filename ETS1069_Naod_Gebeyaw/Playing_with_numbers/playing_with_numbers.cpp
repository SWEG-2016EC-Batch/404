#include <iostream>
using namespace std;

int main() {
    int num,nums, counter = 0, even_product = 1, factorial_sum = 0, sum_of_divisors = 0;
    cout<<"Enter a number: ";
    cin>>num;
    int temp = num = nums;
    int tempp = num;
    while(temp != 0){
        temp /= 10;
        counter++;
    }
    int num_arry[counter] = {}, reverse[counter] = {};
    for(int i = counter - 1; i >= 0; i--){
        num_arry[i] = num % 10;
        num /= 10;
    }
    
    
    for (int i = 0; i < counter; i++) {
            reverse[i] = num_arry[counter - 1 - i];
    }
    
    int choice;
    cout << "\nMenu\n";
    cout << "1. reverse the given number\n";
    cout << "2. count the number of digits\n";
    cout << "3. the product of even digits of the a given number\n";
    cout << "4. Prints the first and the last digit, then find their sum\n";
    cout << "5. Swap the first and the last digit of the number\n";
    cout << "6. check if the number is palindrome\n";
    cout << "7. Find the frequency of each digit\n";
    cout << "8. Check if a number is Strong\n";
    cout << "9. Check if the number is Perfect\n";
    cin >> choice;

    switch(choice){
        case 1:{
            //1) reverse.
            cout <<"Reverse: "; 
            for(int i = 0; i <counter; i++){
                cout << reverse[i];
            }
        }
        break;
        case 2:{
            //2) num of digit.
            cout << "\nNumber of digit: " << counter << endl;
        }
        break;
        case 3: {
            //3) product of even digits.
            for (int i : num_arry){
                if (i % 2 == 0){
                    even_product *= i;
                }
            }
            cout << "Even product: " << even_product << endl;
        }
        break;
        case 4: {
            //4) first and the last digit and their sum.
            cout <<"First digit: " << num_arry[0] << endl;
            cout <<"Last digit: " << num_arry[counter - 1] << endl;
            int sum = num_arry[0] + num_arry[counter - 1];
            cout << "sum of first and last digit: " << sum << endl;
            
        }
        break;
        case 5:{
            //5) Swap the first and the last digit of the number.
            temp = num_arry[0];
            num_arry[0] = num_arry[counter - 1];
            num_arry[counter - 1] = temp;
            
            cout << "swapped: ";
            for(int i: num_arry){
                cout << i;
            }
        }
        break;
        case 6:{
            //6) palindrome
            bool isPalindrome = true;
            for(int i = 0; i < counter; i++){
                if(reverse[i] != num_arry[i])
                    isPalindrome = false;
            }
            if(isPalindrome)
                cout << "\nPalindrome";
            else
                cout << "\nNot palindrome";
        }
        break;
        case 7:{
            //7) frequency
            int frequency[10] = {};
            for(int i = 0; i < counter;i++)
                frequency[num_arry[i]]++;
                
            // Printing the table header
            cout << "\nDigit       Frequency" << endl;
            cout << "---------------------" << endl;
        
            // Printing the frequency of each digit (0-9)
            for (int i = 0; i < 10; i++) {
                cout << i << "               " << frequency[i] << endl;
                cout << "---------------------" << endl;
            }
    
        }
        break;
        case 8:{
            //8) strong
    
            for (int i = 0; i < counter; i++) {
                int digit = num_arry[i];
                // Calculate the factorial of the digit
                int fact = 1;
                for (int j = 1; j <= digit; j++) {
                    fact *= j;
                }
                factorial_sum += fact;
            }
            if(tempp == factorial_sum)
                cout << "\nStrong";
            else
                cout << "\nNot Strong";
            
        }
        break;
        case 9: {
            // Check if number is perfect
            for (int i = 1; i <= nums / 2; i++) {
                if (nums % i == 0) {
                    sum_of_divisors += i;
                }
            }

            if (sum_of_divisors == nums) {
                cout << nums << " is a perfect number." << endl;
            } else {
                cout << nums << " is not a perfect number." << endl;
            }
            break;
        }
        break;
        default:
            cout << "Invalid choice." << endl;
        
        
    }
    return 0;
}
