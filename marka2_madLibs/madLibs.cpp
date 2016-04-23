////////////////////////////////////////////////////////////////////////////////
//
// AUTHOR: Mark Arakaki
//
// ORGANIZATION: The Deep End
//
// FILE NAME: madLibs.cpp
//
// DESCRIPTION: This program takes in a noun, adjective, verb, & adverb. Then
// it cancatinates the words that the user gives with my sentence.
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    char welcome[200] = "Hello ";
    char madLibsStart[150] = "The ";
    char catchNewline[50];
    char name[30];
    char noun[30];
    char verb[30];
    char adjective[30];
    char adverb[30];

////////////////////////////////////////////////////////////////////////////////
// Hey readers, this is a brief message to inform you about the methods that I
// used and how they word in the C++ language!
//
// cin.getline(): This is used to retrieve user input. The first parameter is
// char array variable that will hold the string. The second parameter is the
// max number of characters that will be read from the user input. The third
// parameter is the delimiter character. This character, when inputted by the
// user will declare that all input after that will be not be added to the char
// array. This method also leaves a newline character which is why I needed to
// use a second cin.getline() after the initial one to eat that new line
// character for me.
//
// strcat(): Appends a copy of the source string to the destination string. The
// terminating null character in destination is overwritten by the first
// character of source, and a null-character is included at the end of the new
// string formed by the concatenation of both in destination. The first
// parameter is the destination which points to the destination array, which
// should contain a C string, and be large enough to contain the concatenated
// resulting string. The second parameter is the source, or the C string to be
// appended. This should NOT overlap destination. Destination is returned.
//
// puts(const char * str): Writes the C string pointed by str to the iostream
// and appends a newline character ('\n'). The function begins copying from the
// address specified (str) until it reaches the terminating null character ('\0').
// This terminating null-character is not copied to the stream. The first and
// only parameter is the C string to be printed. On success, a non-negative
// value is returned. On error however, the function returns EOF and sets the
// error indicator (ferror).
//
//
////////////////////////////////////////////////////////////////////////////////

    cout << "Please enter in your name and finish with '$' character: \n\n";
    cin.getline(name, 30, '$');

    strcat (welcome, name);
    strcat (welcome, " and welcome to mad libs! Ready to play a little game? (Not in a creepy way btw)");
    puts (welcome);

    cin.getline(catchNewline, 5);
    cout << "Please enter in a noun and finish with '$' character: \n";
    cin.getline(noun, 30, '$');
    cin.getline(catchNewline, 5);
    strcat (madLibsStart, noun);
    strcat (madLibsStart, " took a massive deuce while he ");

    cout << "Please enter in a verb and finish with '$' character: \n";
    cin.getline(verb, 30, '$');
    cin.getline(catchNewline, 5);
    strcat (madLibsStart, verb);
    strcat (madLibsStart, " with his ");

    cout << "Please enter in an adjective and finish with '$' character: \n";
    cin.getline(adjective, 30, '$');
    cin.getline(catchNewline, 5);
    strcat (madLibsStart, adjective);
    strcat (madLibsStart, " toy car, after he ");

    cout << "Please enter in an adverb and finish with '$' character: \n";
    cin.getline(adverb, 30, '$');
    cin.getline(catchNewline, 5);
    strcat (madLibsStart, adverb);
    strcat (madLibsStart, " released his bowels...");

    cout << "Your Mad Libs sentence goes as follows: \n\n";

    puts (madLibsStart);
}
