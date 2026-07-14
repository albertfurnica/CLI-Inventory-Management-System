#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Produs
{
private:
    string denumire, um;
    float pret_unitar, valoare;
    int cantitate;

public:
    void citire_produse();
    void afisare_prodsue();
    string getDenumire() { return denumire; }
    float getPretunitar() { return pret_unitar; }
    int getCantitate() {return cantitate;}
    float getValoare() {return valoare;}
};
vector<Produs> listaProduse;

void Produs::citire_produse()
{
    cout << "Denumirea produsului: ";
    cin >> denumire;
    cout << "Unitatea de masura : ";
    cin >> um;
    cout << "Pretul unitar = ";
    cin >> pret_unitar;
    cout << "Cantitatea produsului : ";
    cin >> cantitate;
    valoare = (float)(pret_unitar * cantitate);
}

int n;
void citire()
{
    cout << "Dati numar de produse : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nIntroduceti datele produsului " << i + 1 << " :\n";
        Produs temp;
        temp.citire_produse();
        listaProduse.push_back(temp);
    }
}

void afisare()
{
    float sP = 0, sV = 0;
    cout << "\nDenumire produs\tPret unitar\tCantiate\tValoare\n";
    cout << "========================================================\n";
    for(int i = 0; i < n; i++)
    {
        cout <<listaProduse[i].getDenumire() << "\t\t" << listaProduse[i].getPretunitar() << "\t\t" << listaProduse[i].getCantitate() 
             << "\t\t" << listaProduse[i].getValoare() << "\n";
        sP += listaProduse[i].getPretunitar();
        sV += listaProduse[i].getValoare();
    }
    cout << "========================================================\n";
    cout << "Media preturilor = " << sP / n << "\nMedia valorilor = " << sV / n << "\n";
}

int main()
{

    int opt;
    do
    {
        cout << "\nIntroduceti optiunea :\n1. Introducere date\n2. Afisare tabelara\n3. Iesire\n\nOptiunea dvs.: ";
        cin >> opt;
        switch (opt)
        {
        case 1:
            citire();
            cout << n;
            break;
        case 2:
            afisare();
            break;
        case 3:
            break;
        default:
            cout << "Introduceti o varianta corecta!\n";
        }
    } while (opt != 3);

    return 0;
}