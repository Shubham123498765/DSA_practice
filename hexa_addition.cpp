#include <bits/stdc++.h>
using namespace std;

int hexadecimalToDecimal(string hexVal)
{
	int len = hexVal.size();

	// Initializing base value to 1, i.e 16^0
	int base = 1;
	int dec_val = 0;

	// Extracting characters as digits from last
	// character
	for (int i = len - 1; i >= 0; i--) {
		// if character lies in '0'-'9', converting
		// it to integral 0-9 by subtracting 48 from
		// ASCII value
		if (hexVal[i] >= '0' && hexVal[i] <= '9') {
			dec_val += (int(hexVal[i]) - 48) * base;

			// incrementing base by power
			base = base * 16;
		}

		// if character lies in 'A'-'F' , converting
		// it to integral 10 - 15 by subtracting 55
		// from ASCII value
		else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
			dec_val += (int(hexVal[i]) - 55) * base;

			// incrementing base by power
			base = base * 16;
		}
	}
	return dec_val;
}

void decToHexa(int sum)
{
	// char array to store hexadecimal number
	char hexaDeciNum[100];

	// counter for hexadecimal number array
	int i = 0;
	while (sum != 0) {
		// temporary variable to store remainder
		int temp = 0;

		// storing remainder in temp variable.
		temp = sum % 16;

		// check if temp < 10
		if (temp < 10) {
			hexaDeciNum[i] = temp + 48;
			i++;
		}
		else {
			hexaDeciNum[i] = temp + 55;
			i++;
		}

		sum = sum / 16;
	}

	// printing hexadecimal number array in reverse order
	for (int j = i - 1; j >= 0; j--)
		cout << hexaDeciNum[j];
}


// driver program
int main()
{
	string hexNum1 = "ABC";
	string hexNum2 = "DEF";
	int a=hexadecimalToDecimal(hexNum1);
	int b=hexadecimalToDecimal(hexNum2);
	int sum=a+b;
      cout<<"Decimal number for "<<hexNum1<<" is "<<a<<" and decimal number for "<<hexNum2<<" is "<<b;
	cout<<"\nSum in decimal is "<<sum;
	cout<<"\nSum in Hexadecimal is ";
      decToHexa(sum);
	return 0;
}
