#include <iostream>
using namespace std;
 
void vowelOrConsonant(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o'
        || x == 'u' || x == 'A' || x == 'E' || x == 'I'
        || x == 'O' || x == 'U')
        cout << "Vowel" << endl;
    else
        cout << "Consonant" << endl;
}
 
int main()
{
    char c;
    cout<<"Enter a character :";
    cin>>c;
    vowelOrConsonant(c);
    return 0;
}