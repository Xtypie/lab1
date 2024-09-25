#include<iostream>
#include<limits>
using namespace std;


int main()
{
    int int1 = 10, int2 = 2;
    float float1 = 16.46948128, float2 = 9.2342142;
    char char1 = 'a', char2 = 'b';
    bool bool1 = true, bool2 = false;


    cout << "1. Signed integer types: " << endl;

    cout << "int. Values: from " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << " data size: 4 bytes"<< endl;
    cout << "long. Values: from " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << " data size: 4 bytes"<< endl;
    cout << "long long. Values: from " << numeric_limits<long long>::min() << " to " << numeric_limits<long long>::max() << " data size: 8 bytes"<< endl;
    cout << "short. Values: from " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << " data size: 2 bytes"<< endl;


    cout << "2. Unsigned integer types: " << endl;

    cout << "unsigned int. Values: from " << numeric_limits<unsigned int>::min() << " to " << numeric_limits<unsigned int>::max() << " data size: 4 bytes"<< endl;
    cout << "unsigned long. Values: from " << numeric_limits<unsigned long>::min() << " to " << numeric_limits<unsigned long>::max() << " data size: 4 bytes"<< endl;
    cout << "unsigned short. Values: from " << numeric_limits<unsigned short>::min() << " to " << numeric_limits<unsigned short>::max() << " data size: 2 bytes"<< endl;

    cout << "3. Splits: " << endl;

    cout << "float. Values: from " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << " data size: 4 bytes"<< endl;
    cout << "double. Values: from " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max() << " data size: 8 bytes"<< endl;
    cout << "long double. Values: from " << numeric_limits<long double>::min() << " to " << numeric_limits<long double>::max() << " data size: 10 bytes"<< endl;

    cout << "4. Symbolic: "<< endl;
    cout << "char. Values : from " << numeric_limits<char>::min() << " to " << numeric_limits<char>::max() << " data size: 1 byte"<< endl;

    cout << "5. Logical: " << endl;
    cout << "bool. Values: true or false. Data size: 1 byte" << endl;

    cout << "Arithmetics: "<< endl;

    cout << "1. Integers: " << endl;
    cout << "Sum: num1 + num2 = " << int1 + int2 << endl;
    cout << "Subtraction: num1 - num2 = " << int1 - int2 << endl;
    cout << "Multiplication: num1 * num2 = " << int1 * int2 << endl;
    cout << "Division: num1 / num2 = " << int1 / int2 << endl;

    cout << "2. Splits: " << endl;
    cout << "Sum: num1 + num2 = " << float1 + float2 << endl;
    cout << "Subtraction: num1 - num2 = " << float1 - float2 << endl;
    cout << "Multiplication: num1 * num2 = " << float1 * float2 << endl;
    cout << "Division: num1 / num2 = " << float1/float2 << endl;
    /*
    cout << "3. Symbols: " << endl;
    cout << "Sum: 'f' + 'z' = " << char1 + char2 << endl;
    cout << "Subtraction: 'f' - 'z' = " << char1 - char2 << endl;
    cout << "Multiplication: 'f' * 'z'= " << char1 * char2 << endl;
    cout << "Division: 'f' / 'z' = " << char1 / char2 << endl;
    */
    cout << "4. Logical: " << endl;
    cout << "Sum: true + false = " << bool1 + bool2 << endl;
    cout << "Subtraction: true - false = " << bool1 - bool2 << endl;
    cout << "Multiplication: true * false = " << bool1 * bool2 << endl;


}