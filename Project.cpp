#include <iostream>
using namespace std;

int main()
{
  int firstNumber, secondNumber, thirdNumber, counter1, counter2, counter3;
  cout << "Enter first number: ";
  cin >> firstNumber;
  int firstNumber1 = firstNumber;
  int firstNumber2 = firstNumber;
  cout << "Enter second number: ";
  cin >> secondNumber;
  cout << "Enter third number: ";
  cin >> thirdNumber;

  // for 2 numbers ------------------------------------

  counter1 = firstNumber1 + 1;
  for (int i = 0; i < thirdNumber; i++)
  {
    for (int i = 0; i < thirdNumber; i++)
    {
      if (firstNumber1 + counter1 == thirdNumber)
      {
        cout << firstNumber1 << "+" << counter1 << "=" << thirdNumber << endl;
        break;
      }
      counter1 += 1;
    }
    firstNumber1 += 1;
    counter1 = firstNumber1 + 1;  // counter1 resetter
  }

  // for 3 numbers -------------------------------------

  counter1 = firstNumber + 1;
  counter2 = counter1 + 1;

  for (int i = 0; i < thirdNumber; i++)
  {
    for (int i = 0; i < thirdNumber; i++)
    {
      for (int i = 0; i < thirdNumber; i++)
      {
        if (firstNumber + counter1 + counter2 == thirdNumber)
        {
          cout << firstNumber << "+" << counter1 << "+" << counter2 << "=" << thirdNumber << endl;
          break;
        }
        counter2 += 1;
      }
      counter1 += 1;
      counter2 = counter1 + 1;    // counter2 resetter
      if (counter1 == thirdNumber / 2)
      {
        break;
      }
    }
    firstNumber += 1;
    counter1 = firstNumber + 1;
    counter2 = counter1 + 1;
  }

  // for 4 numbers --------------------------------------

  counter1 = firstNumber2 + 1;
  counter2 = counter1 + 1;
  counter3 = counter2 + 1;  

  for (int i = 0; i < thirdNumber; i++)
  {
    for (int i = 0; i < thirdNumber; i++)
    {
      for (int i = 0; i < thirdNumber; i++)
      {
        for (int i = 0; i < thirdNumber; i++)
        {
          if (firstNumber2 + counter1 + counter2 + counter3 == thirdNumber)
          {
            cout << firstNumber2 << "+" << counter1 << "+" << counter2 << "+" << counter3 << "=" << thirdNumber << endl;
            break;
          }
          counter3 += 1;
        }
        counter2 += 1;
        counter3 = counter2 + 1;         // counter3 resetter 
        if (counter2 == thirdNumber / 2)
        {
          break;
        }
        counter1 += 1;
        counter2 = counter1 + 1;         
        counter3 = counter2 + 1;         
        if (counter3 == thirdNumber / 2)
        {
          break;
        }
      }
      firstNumber2 += 1;
      counter1 = firstNumber2 + 1;
      counter2 = counter1 + 1;            // counter2 resetter
      counter3 = counter2 + 1;           
    }
  }
  return 0;
}