#ifndef BODEGA_H
#define BODEGA_H
#include "ingrediente.h"


#include <vector>
#include <string>

using namespace std;

class bodega{
        private:
            vector <ingrediente*> ntc;
            int compras;
            int n;

        public:    
            bodega();
            bodega(string, string, int, int, int);
            
            vector <ingrediente*> getNTC();
            void setNTC(ingrediente*);

            int getCompras();
            void setCompras(int);

            int getN();
            void setN(int);
            
            ~bodega();

};
#endif