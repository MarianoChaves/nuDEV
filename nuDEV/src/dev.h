#ifndef DEV_H
#define DEV_H

#include<vector>
#include "population.h"


namespace nu
{
    class Dev{
        private:
            Population pop;
            std::vector<double> minimum_pos;
            double minimum;

            int pop_size;
            double precision = 0.1;
            double mutation_rate = 0.5;
            double recombination_factor = 0.5;

            std::vector<double> bounds[2];

        public:
            int Minimize();            
            double getMinimum();
            std::vector<double> getMinimum_pos();

            void setPrecision(double precision);
            void setMutationRate(double mut_rate);
            void setRecombinationFactor(double rec_fact);

            void setBounds();

            Dev();
            ~Dev(){};

    };
}


#endif