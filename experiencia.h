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
            experiencia(int);

            int getGastado();
            void setGastado(int);

            

            ~experiencia();
};
#endif