#ifndef GUEST_H
#define GUEST_H

class Guest
{
public:
    Guest();
    ~Guest();
    virtual void printMenu() const;
};

#endif /* GUEST_H */

