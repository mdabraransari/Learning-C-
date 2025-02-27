#include <cstdio>

struct Element
{
    Element *next{};
    Element *previous{};
    void insert_after(Element *new_element)
    {
        new_element->next = next;
        next = new_element;
        new_element->previous = this;
    }
    void insert_befor(Element *new_element)
    {
        new_element->next = this;
        new_element->previous = this->previous;
        this->previous = new_element;
    }
    char prefix[2];
    short operating_number;
};

int main()
{
    Element trooper1, trooper2, trooper3;
    trooper1.prefix[0] = 'T';
    trooper1.prefix[1] = 'K';
    trooper1.operating_number = 421;
    trooper1.insert_after(&trooper2);
    trooper2.prefix[0] = 'F';
    trooper2.prefix[1] = 'N';
    trooper2.operating_number = 2187;
    trooper2.insert_after(&trooper3);
    trooper3.prefix[0] = 'L';
    trooper3.prefix[1] = 'S';
    trooper2.operating_number = 005;
    printf("List from front to back:\n");

    for (Element *cursor = &trooper1; cursor; cursor = cursor->next)

    {
        printf("stromtrooper: %c%c-%d\n",
               cursor->prefix[0],
               cursor->prefix[1],
               cursor->operating_number);
    }
    printf("List form Back to Front:\n");
    for (Element *cursor = &trooper3; cursor; cursor = cursor->previous)
    {
        printf("stromtrooper: %c%c-%d\n",
               cursor->prefix[0],
               cursor->prefix[1],
               cursor->operating_number);
    }
}