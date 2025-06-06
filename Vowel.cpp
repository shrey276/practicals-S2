#include <iostream>
using namespace std;

int main()
{
    char A;
    char V[] = "aeiouAEIOU";

    cout<<"enter any alphabet :";
    cin>>A;

    for (int i = 0; i<10; i++){
        if (A==V[i]){
            cout<<"letter is vowel "<<endl;
            return 0;
        }
    }
    cout<<"letter is not vowel"<<endl;
    
    return 0;
    
}