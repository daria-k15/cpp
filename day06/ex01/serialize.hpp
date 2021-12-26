#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <stdint.h>
#include <bitset>
#include <iostream>

typedef struct s_Data{
    int val;
} Data;

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif