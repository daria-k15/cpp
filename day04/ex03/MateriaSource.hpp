#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#define NUM 4
class MateriaSource : public IMateriaSource{
    private:
        AMateria *materias[NUM];
    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource(const MateriaSource &other);
        MateriaSource &operator=(const MateriaSource &other);

        const AMateria *getMateria(int index) const;

        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};

#endif