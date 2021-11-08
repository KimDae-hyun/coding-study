#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal 
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal & src);
        virtual ~Animal();
     	
        Animal & operator=(const Animal &src);

        virtual void makeSound() const {};
        std::string getType() const;
        virtual void addIdea(std::string idea, int i);
        virtual void showIdeas() const {};
        virtual std::string outputIdeas(int i) const;
        virtual void dupIdeas(const Animal &animal);
};

#endif