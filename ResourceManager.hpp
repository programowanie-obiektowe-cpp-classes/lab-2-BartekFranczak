#pragma once

#include "Resource.hpp"

class ResourceManager
{
    // Twoja implementacja tutaj
        Resource* resource;

    public:
    ResourceManager()       
    {   
        //std::cout << "KONSTRUKTOR"<<std::endl;
        resource = new Resource{};
    }
    ~ResourceManager() 
    {    
        //std::cout << "DESTRUKTOR"<<std::endl;
        delete resource;
    }


    ResourceManager(const ResourceManager& resource1)   
    {
        //std::cout << "KONSTRUKTOR KOPIUJACY"<<std::endl;
        resource = new Resource{};
        resource = resource1.resource;
    }

    ResourceManager& operator=(const ResourceManager& resource2)
    {
        //std::cout << "OPERATOR KOPIOWANIA"<<std::endl;    
        delete resource;
        resource = new Resource{};
        resource = resource2.resource;
        return *this;
    }
    double get() 
    { 
        return resource->get(); 
    }
};
