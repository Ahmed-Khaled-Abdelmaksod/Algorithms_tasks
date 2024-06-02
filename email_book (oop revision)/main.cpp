#include <iostream>
#include "email_book.cpp"
using namespace std;
int main()
{
    email_book sys;
    sys.setName(0, "Ahmed Khaled");
    sys.setemail(0, "ak4902280@gmail.com");
    sys.setName(1, "said");
    sys.setemail(1, "154@gmail.com");
    sys.printAll();
    // getchar();
}