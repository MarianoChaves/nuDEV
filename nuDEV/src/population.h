#ifndef POPULATION_H
#define POPULATION_H

#include<vector>
#include"mutant.h"

/************************************************ 
 *  The order of the walkers does not matter,
    they don't need to have the same history size.
 *  Ensemble constructor K is the number of walkers
    N is the number o dimensions and you should.
************************************************/

namespace nu{
    
    class Population{
        private:
            std::vector<Mutant> pop;
            int pop_size;
            int mutant_dim;

        public:
            Mutant getMutant(int mutant_id);            
            void setMutant(Mutant new_mut, int mutant_id);

            Mutant removeMutant(int mutant_id);
            void includeMutant(Mutant new_mut);

            Population resetPopulation();

            Population();
            Population(std::vector<Mutant> pop, int pop_size, int mutant_dim);
            ~Population(){};
    };
}

#endif