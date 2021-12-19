#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < NUM; i++){
        materias[i] = NULL;
    }
}

MateriaSource::~MateriaSource(){
    for(int i = 0; i < NUM; i++){
        if (materias[i])
            delete(materias[i]);
    }
}

MateriaSource::MateriaSource(const MateriaSource &other){
    *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other){
    if (this != &other){
        for (int i = 0; i < 4; i++){
            const AMateria *tmp = other.getMateria(i);
            if (tmp)
                materias[i] = tmp->clone();
            else
                materias[i] =NULL;
        }
    }
    return (*this);
}

const AMateria *MateriaSource::getMateria(int index) const{
    if (index >= 0 && index < 4){
        return(materias[index]);
    }
    return(NULL);
}

void MateriaSource::learnMateria(AMateria *m){
    for (int i = 0; i < NUM; i++){
        if (!materias[i]){
            materias[i] = m;
            break ;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type){
    for (int i = 0; i < NUM; i++){
        if (!materias[i])
            break;
        else if (materias[i]->getType() == type)
            return(materias[i]->clone());
    }
    return(0);
}