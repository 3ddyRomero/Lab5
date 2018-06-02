#ifndef EXPERIENCIA_H
#define EXPERIENCIA_H
#include "plato.h"
#include <string>
#include <vector>
using namespace std;

class experiencia{
        private:
            vector <plato> cp;
            int gastado;

        public:
            experiencia();
            experiencia(vector <plato>,int);

            vector <plato> getCP();
            void setCP(vector <plato>);

            int getGastado();
            void setGastado(int);

            void pushplato(plato);

            ~experiencia();
};
#endif