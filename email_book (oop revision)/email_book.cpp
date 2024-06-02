#include <string>
#include <iostream>
using namespace std;
class email_book
{
private:
    string *names;
    string *emails;
    int max_size;
    int size;

public:
    email_book()
    {
        max_size = 100;
        size = 0;
        names = new string[max_size];
        emails = new string[max_size];
    }
    void setName(int index, string name)
    {
        this->names[index] = name;
        size++;
    }
    string getName(int index)
    {
        return this->names[index];
    }
    void setemail(int index, string email)
    {
        this->emails[index] = email;
    }
    string getemail(int index)
    {
        return this->emails[index];
    }
    void printAll()
    {

        for (int i = 0; i < size; i++)
        {
            cout << i << "- Name : " << this->getName(i) << "\t\t\t\tEmail : " << this->getemail(i) << "\n";
        }
    }
    ~email_book()
    {
        delete[] names;
        delete[] emails;
    }
};
