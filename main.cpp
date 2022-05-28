#include "human.h"

int main()
{
    Student vadim("Maksimov", "Vadim", "Igorevich", 19, true);
    Boss karpov("Karpov", "Dmitrii", "Anatolievich", 46, 28);
    vadim.print();
    cout << endl;
    karpov.print();
}
