#ifndef MUTANT_H
#define MUTANT_H

#include<vector>

/************************************************
 * A mutant is a class that have several features
 * each associated with a dimension
************************************************/

namespace nu
{

    class Mutant{
        private:        
            std::vector<double> features;
            int n_features;

        public:
            void setFeature(double feature, int position);
            double getFeature(int position);

            Mutant(std::vector<double> features, int n_features);
            ~Mutant();
    };


}

#endif