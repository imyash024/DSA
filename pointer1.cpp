#include <iostream>
using namespace std;
void update (int** p2)
{
    cout<< p2 << endl;
    p2 = p2+1;
    cout<< p2 << endl;
}

int main(){
    int value = 4;
    int * ptr = &value;
    int** pt2 = &ptr;
    cout<< pt2 << endl;
    update(pt2);

}