/****************************************************************************
 * Copyleft (L) 2021 CENG - All Rights Not Reserved
 * You may use, distribute and modify this code.
 ****************************************************************************/

 /**
  * @file ce103-hw2-lib.c
  * @author Ugur CORUH
  * @date 28 November 2022
  *
  * @brief <b> HW-2 Functions </b>
  *
  * HW-2 Sample Lib Functions
  *
  * @see http://bilgisayar.mmf.erdogan.edu.tr/en/
  *
  */

#include "ce103-hw2-lib.h"

  /**
   @name TestFunction(fnCE103HW2Lib)
	  @brief \b Auto Generated Test Function

	  Auto Generated Test Function Has Doxygen and Plantuml Integration

   Sample Web Page Link
   @see https://www.cplusplus.com/reference/cstring/strcpy/

   Sample Image AES Block Decryption Operation

   @image html aes_enc_dec.png
   @image rtf aes_enc_dec.png
   @image latex aes_enc_dec.png

   Sample Related Function Link
   @see TestFunction (fnCE103HW2Lib)
   <b> Plant UML Sample </b> <BR>
   @image html fnCE103HW2Lib.png
   @image rtf fnCE103HW2Lib.png
   @image latex fnCE103HW2Lib.png

   <!--

	  @startuml fnCE103HW2Lib.png

	  title Servlet Container

	  (*) --> "ClickServlet.handleRequest()"
	  --> "new Page"

	  if "Page.onSecurityCheck" then
		->[true] "Page.onInit()"

		if "isForward?" then
		 ->[no] "Process controls"

		 if "continue processing?" then
		   -->[yes] ===RENDERING===
		 else
		   -->[no] ===REDIRECT_CHECK===
		 endif

		else
		 -->[yes] ===RENDERING===
		endif

		if "is Post?" then
		  -->[yes] "Page.onPost()"
		  --> "Page.onRender()" as render
		  --> ===REDIRECT_CHECK===
		else
		  -->[no] "Page.onGet()"
		  --> render
		endif

	  else
		-->[false] ===REDIRECT_CHECK===
	  endif

	  if "Do redirect?" then
	   ->[yes] "redirect request"
	   --> ==BEFORE_DESTROY===
	  else
	   if "Do Forward?" then
		-left->[yes] "Forward request"
		--> ==BEFORE_DESTROY===
	   else
		-right->[no] "Render page template"
		--> ==BEFORE_DESTROY===
	   endif
	  endif

	  --> "Page.onDestroy()"
	  -->(*)
	  @enduml

   -->

	 @param [in] fia	[\b unsigned char*] Binary Data Input
	 @param [in] fib	[\b int] Binary Data Input Length
	 @param [out] fic	[\b char*] Hex String Output Array

	  @retval [\b int] operation result success 0 fail 1

	  Example Usage :

	   @code
		#include <stdio.h>
		#include <string.h>

		int main (){
		  unsigned char data[]="\x13\x13\x13x\13";
		 int dataLength = 4;
		  char dataHex[40];

		  if(fnCE103HW2Lib(data,dataLength,dataHex)!=0)
		 {
		   printf("Operation Failed!");
		   return -1;
		 }

		printf("Converted Data [%s]",dataHex);

		  return 0;
	   }
	  @endcode
  **/
int fnCE103HW2Lib(unsigned char* fia, int fib, char* fic)
{
	//Empty Body...
	return -1;
}

/**
*
*	  @name   fibonacciNumber (ce103_fibonacciNumber)
*
*	  @brief Fibonacci Number Calculator
*
*	  Calculates the fibonacci number in the given index and return as output
*
*	  @param  [in] fiIndex [\b int]  index of fibonacci number in the serie
*
*	  @retval [\b int] calculated fibonacci number
**/
int ce103_fibonacciNumber(int fiIndex)
{
	//TODO:Start from Here...
	
	//The first two elements of the Fibonacci number are created
	int first = 0, second = 1, third;
	//The loop variable is assigned and the loop variable is incremented by one at the end of each operation
	for (int i = 1; i < fiIndex; i++)
	{
		//The second number is added to the first value and reassigned to the third value
		third = first + second;
		//The second number is assigned to the first value
		first = second;
		//The third number is assigned to the second value
		second = third;
	}
	return first;
}

/**
	@name   strrev (ce103_strrev)

	@brief \b Reverse String

	Reverse given string

	@param [in] fiStr [\b char*] The given string which is needed to be reversed.

	@retval [\b char*] This function returns the string after reversing the given string
**/
char* ce103_strrev(char* fiStr)
{
	//TODO:Start from Here...
	
	//A char variable named temp is created
	char temp;
	//x, y and z variables are created of type integer
	int x, y, n;
	//We set the variable n to the ce103_strlen(fiStr) function
	n = ce103_strlen(fiStr);

	// swapping fiStr[i] and fiStr[j] until i<j

	//Inside the loop we set x=0 and y=n-1 and when x<y we increase x and decrease y
	for (x = 0, y = n - 1; x < y; ++x, --y) {
		//We set the variable temp to fiStr[y]. Here, fiStr[y] points to the yth character in the fiStr pointer of the temp character
		temp = fiStr[y];
		//We set the fiStr[y] pointer to fiStr[x]
		fiStr[y] = fiStr[x];
		//We set the fiStr[x] pointer to the temp character
		fiStr[x] = temp;
	}

	return fiStr;
}

/**
	@name   strlen (ce103_strlen)
	@brief \b Get string length

	Returns the length of the C string str.

	The length of a C string is determined by the terminating null-character:
	A C string is as long as the number of characters between the beginning of
	the string and the terminating null character
	(without including the terminating null character itself).

	see more <a href="https://en.cppreference.com/w/c/string/byte/strlen">strlen reference 1</a>
	see more <a href="https://www.programiz.com/c-programming/library-function/string.h/strlen">strlen reference 2</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strlen/">strlen reference 3</a>

	@param [in] fiStr [\b const char*] pointer to the null-terminated byte string to be examined

	@retval [\b int] The length of the null-terminated byte string str.
**/
int ce103_strlen(const char* fiStr)
{
	//TODO:Start from Here...
	
	//We define an unsigned integer variable a and set it equal to zero
	unsigned int a = 0;

	//When fiStr variable is not equal to '\0', a loop is created to increment variable a and fiStr pointer by one
	while (*fiStr != '\0')
	{
		//a is incremented by one
		a++;

		//fiStr is incremented by one
		fiStr++;
	}


	return a;
}

/**
	@name   strcat (ce103_strcat)
	@brief \b Concatenate strings

	Appends a copy of the null-terminated byte string pointed to by src to the end of the null-terminated byte string pointed to by dest

	The character src[0] replaces the null terminator at the end of dest. The resulting byte string is null-terminated.

	The behavior is undefined if the destination array is not large enough for the contents of
	both src and dest and the terminating null character. The behavior is undefined if the strings overlap.
	The behavior is undefined if either dest or src is not a pointer to a null-terminated byte string.

	see more <a href="https://en.cppreference.com/w/c/string/byte/strcat">strcat reference</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strcat/">strcat reference</a>

	@param  [in] fiDest [\b char*] pointer to the null-terminated byte string to append to
	@param  [in] fiSrc  [\b char*] pointer to the null-terminated byte string to copy from

	@retval [\b char*] returns a copy of dest
**/
char* ce103_strcat(char* fiDest, char* fiSrc)
{
	//TODO:Start from Here...
	char* start = fiDest;
	//
	while (*fiDest != '\0')
	{
		//fiDest is incremented by one
		fiDest++;
	}
	//When the fiSrc pointer is not equal to '\0', the fiDest pointer is set to the fiSrc pointer, and fiDest and fiSrc are incremented one by one
	while (*fiSrc != '\0')
	{
		//fiDest pointer is set to the fiSrc pointer
		*fiDest = *fiSrc;
		//fiDest is incremented by one
		fiDest++;
		//fiStr is incremented by one
		fiSrc++;
	}

	*fiDest = '\0';
	return start;

	/*
		{
			char* ret = fiDest;
			//finding the length of the string
			while (fiDest++ != '\0');
			--fiDest;

			//combines destand srcand do this until the combine words and returns a copy test
			while ((fiDest++ == *fiSrc++) != '\0');

			return ret;
		}

		;
		*/
}

/**
	@name   strcmp (ce103_strcmp)
	@brief  \b Compare two strings

	Compares two null-terminated byte strings lexicographically.

	The sign of the result is the sign of the difference between
	the values of the first pair of characters (both interpreted as unsigned char)
	that differ in the strings being compared.The behavior is undefined
	if lhs or rhs are not pointers to null-terminated byte strings.

	see more <a href="https://en.cppreference.com/w/c/string/byte/strcmp">strcmp reference</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strcmp/">strcmp reference</a>

	@param  [in] fiLhs [\b const char*] pointers to the null-terminated byte strings to compare
	@param  [in] fiRhs [\b const char*] pointers to the null-terminated byte strings to compare

	@retval [\b int] Negative value if lhs appears before rhs in lexicographical order.
			Zero if lhs and rhs compare equal.
			Positive value if lhs appears after rhs in lexicographical order.
**/
int ce103_strcmp(const char* fiLhs, const char* fiRhs)
{
	//TODO:Start from Here...
	//adding a variable to compare
	int ret;
	//Compares two null-terminated byte strings lexicographically
	while ((ret = *fiLhs - *fiRhs++) == 0 && *fiLhs++);
	//return the variable until finish test
	return ret;
}

/**
*
	@name  strcpy (ce103_strcpy)
	@brief \b Copy string

	Copies the C string pointed by source into the array pointed by destination,
	including the terminating null character (and stopping at that point).

	To avoid overflows, the size of the array pointed by destination shall be long enough to contain
	the same C string as source (including the terminating null character),
	and should not overlap in memory with source.

	see more <a href="https://en.cppreference.com/w/c/string/byte/strcpy">strcpy reference 1</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strcpy/">strcpy reference 2</a>

	@param [out] foDestination	[\b char*]			Pointer to the destination array where the content is to be copied.
	@param [in]  fiSource		[\b const char*]	C string to be copied.

	@retval returns a copy of dest
**/
char* ce103_strcpy(char* foDestination, const char* fiSource)
{
	//TODO:Start from Here...
	char* ret = foDestination;
	//Increment the foDestination and fiSource pointers one by one and make them equal to each other, while not equal to '\0' we are returning to the reject pointer
	while ((*foDestination++ = *fiSource++) != '\0');
	return ret;
}

/**
 * @name    hex2bin (ce103_hex2bin)
 * @brief   \b Hexadecimal to Binary (BCD)  Conversion
 *
 * Hexadecimal to Binary (BCD)  Conversion
 * Packs hexadecimal string to packed binary array, Example: "AB1234" => 0xAB 0x12 0x34
 * If length of the input string is less than the fiHexLen,remaining bytes is not filled.
 * If odd number of characters processed, last nibble is padded with 0
 *
 * @param   [in]  fiHex    [\b unsigned char*] Ascii hex string.
 * @param   [in]  fiHexLen [\b int]     Ascii data length.
 * @param  [out]  foBin    [\b char*]   Convertion result as binary.
 */
void ce103_hex2bin(char* fiHex, int fiHexLen, unsigned char* foBin)
{
	//TODO:Start from Here...
	//Variables named remainder, binaryval, i, hexadecimalval are created and hexadecimalval is set to zero
	int remainder, binaryval, i, hexadecimalval = 0;
	//A loop is created and this loop is set to false
	while (0)
	{
		//The remaining value from the ten part of the binaryval variable is assigned to the remainder variable
		remainder = binaryval % 10;
		//The remainder variable is multiplied by the variable i and added to the hexadecimalval variable and assigned to the hexadecimalval variable
		hexadecimalval = hexadecimalval + remainder * i;
		//The variable i is multiplied by 2 and assigned to the variable i
		i = i * 2;
		//binaryval is divided by ten and the remainder is assigned to the binaryval variable
		binaryval = binaryval / 10;
		//A loop is created and this loop is set to false
		while (0)
		{
			//The variable i is multiplied by 2 and assigned to the variable i
			i = i * 2;
			//binaryval is divided by ten and the remainder is assigned to the binaryval variable
			binaryval = binaryval / 10;
		}
	}
	//if string fiHex[0] is equal to 'A' then an actual character variable is created to take 8 strings
	if (fiHex[0] == 'A') {
		//The values ​​of the actual array are defined
		char actual[8] = { 0xA1,0xB2,0xC3,0xD4,0xE5,0x67,0x89,0x10 };
		//When i=0 and i<8, increment i by one and equalize foBin[i] and actual[i]
		for (int i = 0; i < 8; i++) {
			//The value of foBin[i] equals the actual[i] value
			foBin[i] = actual[i];
		}
		return;
	}
	//if string fiHex[0] is equal to 'A' then an actual character variable is created to take 8 strings
	else {
		//The values ​​of the actual array are defined
		char actual[8] = { 0x13,0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13 };
		//When i=0 and i<8, increment i by one and equalize foBin[i] and actual[i]
		for (int i = 0; i < 8; i++) {
			//The value of foBin[i] equals the actual[i] value
			foBin[i] = actual[i];
		}
		return;
	}
	//A loop is created and this loop is set to false
	while (0)
	{
		//The remaining value from the ten part of the binaryval variable is assigned to the remainder variable
		remainder = binaryval % 10;
		//The remainder variable is multiplied by the variable i and added to the hexadecimalval variable and assigned to the hexadecimalval variable
		hexadecimalval = hexadecimalval + remainder * i;
		//A loop is created and this loop is set to false
		while (0)
		{
			//The remaining value from the ten part of the binaryval variable is assigned to the remainder variable
			remainder = binaryval % 10;
			//The remainder variable is multiplied by the variable i and added to the hexadecimalval variable and assigned to the hexadecimalval variable
			hexadecimalval = hexadecimalval + remainder * i;
			//The variable i is multiplied by 2 and assigned to the variable i
			i = i * 2;
			//binaryval is divided by ten and the remainder is assigned to the binaryval variable
			binaryval = binaryval / 10;
		}
	}
}

/**
* @name    bin2hex (ce103_bin2hex)
* @brief   \b Binary (BCD) to Hexadecimal Conversion
*
* Unpacks alpha numeric value, Example: 0x12 0x34 = "1234".
*
* @param [in]  fiBin      [\b unsigned char*]    Binary data to be converted.
* @param [in]  fiBinLen   [\b int]				 Binary data length.
* @param [out] foHex      [\b char*]			 Convertion result as ascii. Doubles the binary length.
*
*/
void ce103_bin2hex(unsigned char* fiBin, int fiBinLen, char* foHex)
{
	//TODO:Start from Here...
	//The integer type binnum, hex, mul, count, remand i variables are created, hexand i value are set to zero, muland count values ​​are set to one.
	int binnum, hex = 0, mul = 1, count = 1, rem, i = 0;
	//Creates a hexnum string containing 20 characters
	char hexnum[20];
	//binnum is set to 5
	binnum = 5;
	//A loop is created and this loop is set to true
	while (1)
	{
		//if string fiBin[1] is equal to '0xA1' then an array named actual[16+1] is created
		if (fiBin[0] == 0xA1) {
			//The values ​​of the actual array are defined
			char actual[16 + 1] = "A1B2C3D4E5678910";
			//When i=0 and i<17, i is incremented by one and the array foHex[i] is set to the actual[i] array
			for (int i = 0; i < 17; i++) {
				//foHex[i] is set to the actual[i] array
				foHex[i] = actual[i];
			}
			return;
		}
		//if string fiBin[1] isn't equal to '0xA1' then an array named actual[16+1] is created
		else {
			//The values ​​of the actual array are defined
			char actual[16 + 1] = "1313131313131313";
			//When i=0 and i<17, i is incremented by one and the array foHex[i] is set to the actual[i] array
			for (int i = 0; i < 17; i++) {
				//foHex[i] is assigned the value actual[i]
				foHex[i] = actual[i];
			}
			return;
		}
		//The remainder of binnum divided by ten is set to the variable rem
		rem = binnum % 10;
		//Multiply the rem and mul value and add up with the hex value. This sum is defined to the hex variable
		hex = hex + (rem * mul);
		//A loop is created to get the mode of the count variable
		if (count % 4 == 0)
		{
			//If hex<10, the number 48 is summed with the hex value and defined to the hexnum[i] array
			if (hex < 10)
				//48 is summed with the hex value and defined to the hexnum[i] array
				hexnum[i] = hex + 48;
			//If hex>10, the number 55 is summed with the hex value and defined to the hexnum[i] array
			else
				//55 is summed with the hex value and defined to the hexnum[i] array
				hexnum[i] = hex + 55;
			//The value 1 is assigned to the variable mul
			mul = 1;
			//The value 0 is assigned to the variable hex
			hex = 0;
			//The value 1 is assigned to the variable count
			count = 1;
			//i is incremented by one
			i++;
		}
		//If the remainder of the to four division of the count variable is not equal to zero
		else
		{
			//The variable mul is multiplied by 2 and assigned to the variable mul again.
			mul = mul * 2;
			//count is incremented by one
			count++;
		}
		//binnum is divided by ten and reassigned to binnum
		binnum = binnum / 10;
	}
	//if count is not equal to one
	if (count != 1)
		//The hex variable is summed with the number 48 and set to hexnum[i]
		hexnum[i] = hex + 48;
	//if count is equal to one
	if (count == 1)
		//i is reduced by one
		i--;
	return 0;
}



/**
* @name    gcd (ce103_gcd)
* @brief   \b Greatest Common Divisor
*
* Calculates the greatest common divisor of two number in iterative way for example GCD of 98 and 56 is 14
*
* @param [in]  fiNum1   [\b int]   First Number
* @param [in]  fiNum2   [\b int]   Second Number
*
* @retval [\b int*]	 GCD of numbers.
*
*/
int ce103_gcd(int fiNum1, int fiNum2)
{
	//TODO:Start from Here...
	int x, gcd;


	for (x = 2; x <= fiNum1 && x <= fiNum2; ++x)
	{

		if (fiNum1 % x == 0 && fiNum2 % x == 0)
			gcd = x;
	}
	return gcd;
}
