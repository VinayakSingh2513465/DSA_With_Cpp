#include <cstring>
#include<iostream>
using namespace std;

void reverse(char rev[] , int n) {
    int st = 0, end = n-1;
    while (st<end) {
        swap(rev[st],rev[end]);
        st++;
        end--;
    }

}

int main() {
    char word[] = "code";
    reverse(word,strlen(word));
    cout<<word;
    return 0;
}
