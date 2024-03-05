#include <iostream>
#include <Mascota.hpp>
#include <Alimento.hpp>
#include <list>


using namespace std;

int main(int argc, char const *argv[])
{
    Mascota m1("Coraje");
    Mascota m2("Firulais");

    mascotas.push_back(m1); 
        mascotas.push_back(m2);

            Alimento a1(5);
    Alimento a2(2);

    m1.Comer(a1);
    m2.Comer(a2);

    for (auto &&mascota : mascotas)
    {
        cout 
            <<mascota.Leernombre()
            <<":"
            << "Mascota 1 Energia:"
             << mascota.LeerEnergia()
             << endl
             << "Mascota 2 Energia:" << m2.LeerEnergia() << endl;
    }

    return 0;
}
