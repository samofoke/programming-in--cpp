#include <iostream>

using namespace std;

/*
this function creates a a node in the list.
node *next inthe struct.
*/

class Menu
{
    public:
        int d;
        Menu *next;
};

/*
this function prints out the list of noets.
starting from the head of the list given.
*/

void    printlist(Menu *node)
{
    while (node != NULL)
    {
        cout << node->d << endl;
        node = node->next;
    }
}

int     main()
{
    Menu *h = NULL;
    Menu *s = NULL;
    Menu *t = NULL;


    h = new Menu();
    s = new Menu();
    t = new Menu();

    h->d = 1;
    h->next = s;
    s->d = 2;
    s->next = t;
    t->d = 3;
    t->next = NULL;

    printlist(h);
    return (0);

}
