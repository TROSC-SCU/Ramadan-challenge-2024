#  this challenge is very easy :)   
#  change this code to python 

#  #include <iostream>
#  using namespace std;

#  int main() {
#      int num;
#      cout << "Enter a number: ";
#      cin >> num;

#      if (num % 2 == 0) {
#          cout << num << " is Even" << endl;
#      } else {
#          cout << num << " is Odd" << endl;
#      }

#      return 0;
#  }

n = int(input("Enter a number: "))
if n % 2 == 0:
	print(n, "is Even")
else:
	print(n, "is Odd")