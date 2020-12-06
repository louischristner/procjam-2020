#ifndef PLANET_HPP_
#define PLANET_HPP_

#include <cstdlib>

class Planet {
    public:
        Planet(size_t size, long temperature);
        ~Planet();

        size_t getSize(void) const;
        long getTemperature(void) const;

    protected:
    private:
        size_t _size;
        long _temperature;
};

#endif /* !PLANET_HPP_ */
