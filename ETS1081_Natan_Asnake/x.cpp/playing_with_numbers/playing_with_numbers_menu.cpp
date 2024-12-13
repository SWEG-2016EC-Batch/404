
#include <iostream>
using namespace std;

int main() {
      int choice;
      long long int sum=0,num,remainder,count=0,product = 1,
        first_digit,last_digit,original_num,remaining_numbers,i;
      cout<<"Please select an operation you would like to use with the "
            "numbers assigned for them"<<endl;
      cout<<endl;
      cout<<"1 .Prints the reverse of a given number."<<endl;
      cout<<"2. Counts the digits of a given number."<<endl;
      cout<<"3. Finds the products of even digits of a given number."<<endl;
      cout<<"4. Prints the first and last digit of a given number and "
            "prints their sum."<<endl;
      cout<<"5. Swaps the first and last digit of a given number. "<<endl;
      cout<<"6. Checks whether a given number is palindrome or not."<<endl;
      cout<<"7. Find the frequency of each digit in a given integer and "
            "print in table format."<<endl;
      cout<<"8. Checks if a number is strong or not."<<endl;
      cout<<"9. Checks if a number is perfet or not."<<endl;
      cin>>choice;
      if (choice < 1 || choice > 9) {
            cout<<"please choose a valid entry";
            return 0;
      }
      cout<<"Please enter a number"<<endl;
      cin>>num;

      if (choice == 1) {
            int Num;
            Num = num;
            if (num<0) {
                  num=-num;
            }
            while (num>0) {
                  remainder = num % 10;
                  sum=(sum*10)+remainder;
                  num=num/10;
            }
            if (Num<0) {
                  sum=-sum;
            }
            cout<<"The reverse of the number you entered is "<<sum;
            return 0;
      }
      else if (choice ==2) {
            if (num<0) {
                  num=-num;
            }
            while (num>0) {
                  num=num/10;
                  count++;
            }
            cout<<"Your number has "<<count<<" digits";
            return 0;
      }
      else if (choice == 3) {
            if (num < 0) {
                  num=-num;
            }
            while (num > 0) {
                  remainder = num % 10;
                  num=num / 10;
                  if (remainder % 2 == 0) {
                        product *= remainder;
                  }
            }
            cout<<"The even digits multiplied = "<<product;
            return 0;
      }


      else if (choice == 4) {
                  if (num<0) {
                        num=-num;
                  }
                  last_digit=num % 10;

                  while (num>10) {
                        num=num/10;
                  }
                  first_digit=num;

                  cout<<"The first digit of your number is "<<first_digit<<endl;

                  cout<<"The last digit of your number is "<<last_digit<<endl;

                  cout<<"Their sum is "<<first_digit+last_digit;
                  return 0;
            }
      else if (choice == 5) {
            if (num < 0) {
                  num = -num;
            }
            int quotient = num/10,last_digit = num%10,count = 0,product = 1;
            int first_digit;
            first_digit = num;


            if (num >= 0 && num <= 9) {
                  cout<<"Your number is "<<num;
            }
            while (num != 0) {
                  num = num/10;
                  count++;
            } while (first_digit >= 10) {
                  first_digit = first_digit/10;
            }
            if (count >= 3) {

                  for (int i = 0;i <= count-3;i++) {
                        product *= 10;
                  }
                  remaining_numbers = quotient % product;
                  cout<<"Your number is "<<last_digit<<remaining_numbers<<first_digit;
            }
            if (count == 2) {
                  cout<<"Your number is "<<last_digit<<first_digit<<endl;

            }
            return 0;
      }
            else if (choice == 6) {
                  int Num=num;
                  if (num<0) {
                        num=-num;
                  }
                  while (num>0) {
                        remainder=num % 10;
                        sum=(sum*10)+remainder;
                        num=num/10;
                  }
                  if (Num<0) {
                        sum=-sum;
                  }
                  if (sum==Num) {
                        cout<<"The number you entered is a palindrome."<<endl;
                  }
                  else  {
                        cout<<"The number you entered is NOT a palindrome.";
                  }
                  return 0;
            }
            else if (choice == 7) {
                  original_num=num;
                  for (int digit=0;digit<=9;digit++) {
                        int count;
                        count = 0;
                        int temp;
                        temp = num;

                        while (temp>0) {
                              if (temp%10 == digit) {
                                    count++;
                              }
                              temp/=10;
                        }
                        if (count > 0) {
                              cout<<"Digit- " <<digit<<",frequency: "<<count<<endl;
                        }
                  }

                  return 0;
            }
            else if (choice == 8) {
                  original_num = num;
                  while (num > 0 ) {
                        remainder = num % 10;

                        int factorial = 1;

                        for (i = 2;i <= remainder;i++) {
                              factorial *= i;
                        }
                        sum += factorial;

                        num = num / 10;
                  }
                  if (sum != original_num || original_num <= 0 ) {
                        cout<<"Your number is NOT a strong number."<<endl;

                  } else {
                        cout<<"Your number is a strong number."<<endl;
                  }
                  return 0;
            }
            else if (choice == 9) {
                  original_num = num;

                  for (i = 1; i < num; i++) {
                        if (num % i == 0) {
                              sum += i;
                        }
                  }

                  if (sum != original_num || original_num <= 0) {
                        cout<<"Your number is NOT perfect number.";
                  }else {
                        cout<<"Your number is a perfect number.";
                  }
                  return 0;
            }

           else{ cout<<"Please choose a valid entry";
           }
}
