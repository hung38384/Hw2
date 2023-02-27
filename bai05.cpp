#include <iostream>
using namespace std;
string one[] = { "", "one ", "two ", "three ", "four ",
                 "five ", "six ", "seven ", "eight ",
                 "nine ", "ten ", "eleven ", "twelve ",
                 "thirteen ", "fourteen ", "fifteen ",
                 "sixteen ", "seventeen ", "eighteen ",
                 "nineteen " };

string ten[] = { "", "", "twenty ", "thirty ", "forty ",
                 "fifty ", "sixty ", "seventy ", "eighty ",
                 "ninety " };
 
string numToWords(int n, string s)
{
    string str = "";
    if (n > 19)
        str += ten[n / 10] + one[n % 10];
    else
        str += one[n];
    if (n)
        str += s;
 
    return str;
}
 
string convertToWords(long n)
{
    if(n<0) n=n*(-1); // trường hợp số âm
    string result;
    result += numToWords((n / 100000000), "hundred million ");

    result += numToWords(((n / 1000000) % 100), "million ");

    result += numToWords(((n / 100000) % 10), "hundred thousand ");
 
    result += numToWords(((n / 1000) % 100), "thousand ");
 
    result += numToWords(((n / 100) % 10), "hundred ");
 
    if (n > 100 && n % 100)
        result += "and ";
    result += numToWords((n % 100), "");
    if(result=="")
    result = "zero";
    return result;
}
int main()
{
    long n;
    cin>>n;
    if(n>=0){
    cout << convertToWords(n) << endl;
    } else {
        cout <<"negative "<< convertToWords(n) << endl;
    }
    return 0;
}