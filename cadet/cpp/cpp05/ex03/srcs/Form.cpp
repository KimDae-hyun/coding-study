/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:54:09 by daekim            #+#    #+#             */
/*   Updated: 2021/11/27 15:54:11 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form() : name("paper"), signGrade(120), executeGrade(80)
{
    sign = false;
    std::cout << "Create Form!" << std::endl;
}

Form::Form(std::string name, int signGrade, int executeGrade, std::string target) : name(name), signGrade(signGrade), executeGrade(executeGrade), target(target)
{
    sign = false;
    std::cout << "Create Form!" << std::endl;
}

Form::Form(const Form &src) : name(src.name), signGrade(120), executeGrade(80)
{
    *this = src;
}

Form::Form(const int signGrade, const int executeGrade) : \
    name("paper"), signGrade(signGrade), executeGrade(executeGrade)
{
    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException;
    else if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException;
    sign = false;
    std::cout << "Create Form!" << std::endl;
}


Form& Form::operator=(const Form &src)
{
    if (this != &src)
    {
        sign = src.sign;
        std::cout << "Create Form!" << std::endl;
    }
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Form &src)
{
    os << "<" << src.getName() << \
    ">, signGrade <" << src.getSignGrade() << \
    ">, executeGrade <" << src.getExecuteGrade() << \
    ">, sign <" << src.getSign() << \
    ">" << std::endl;
    return (os);
}

Form::~Form()
{
    std::cout << "Delete Form!" << std::endl;
}

std::string Form::getName() const
{
    return (name);
}

int Form::getSignGrade() const
{
    return (signGrade);
}

int Form::getExecuteGrade() const
{
    return (executeGrade);
}

bool Form::getSign() const
{
    return (sign);
}

std::string Form::getTarget() const
{
    return (target);
}

void Form::beSigned(const Bureaucrat &bur)
{
    if (getSignGrade() < bur.getGrade())
    {
        sign = false;
        throw *GradeTooLowException;
    }
    sign = true;
}
