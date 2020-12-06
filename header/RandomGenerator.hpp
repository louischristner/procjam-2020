#ifndef RANDOMGENERATOR_HPP_
#define RANDOMGENERATOR_HPP_

#include <ctime>
#include <cstdlib>

class RandomGenerator {
    public:
        RandomGenerator();
        ~RandomGenerator();

        int generateRandomNumber(const int min, const int max) const;

    protected:
    private:
};

#endif /* !RANDOMGENERATOR_HPP_ */
