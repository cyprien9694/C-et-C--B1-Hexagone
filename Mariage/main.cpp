#include "Man.cpp"
#include "Woman.cpp"
#include "Person.cpp"

int main() {
    Woman meghan("Meghan", 37);
    Man harry("Harry", 39);
    Woman kate("Kate", 42);
    Woman diana("Diana", 30);
    Man william("William", 41);

    cout << "Avant le mariage :" << endl;
    meghan.display();
    harry.display();
    cout << endl;

    meghan.setPartner(&harry);

    cout << "Apres le mariage :" << endl;
    meghan.display();
    harry.display();
    cout << endl;

    kate.setPartner(&diana);

    cout << "Mariage entre femmes :" << endl;
    kate.display();
    diana.display();
    cout << endl;

    william.setPartner(&harry);

    cout << "Mariage entre hommes :" << endl;
    william.display();
    harry.display();
    cout << endl;

    return 0;
}
