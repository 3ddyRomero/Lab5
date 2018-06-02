#ifndef EXPERIENCIA_H
#define EXPERIENCIA_H
#include <string>
#include <vector>
using namespace std;

class experiencia{
        private:
            //vector <clienteplato> cp;
           int gastado;

        public:
            experiencia();
            experiencia(int);

            int getGastado();
            void setGastado(int);

            

            ~experiencia();
};
#endif