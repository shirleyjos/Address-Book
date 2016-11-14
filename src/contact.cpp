#include "contact.h"

bool Contact::isValidToAdd() const
{
    /*
    Adding a new contact requires:
    -first name
    -last name
    -phone number
    */

    bool hasNames = !(firstName.empty() || lastName.empty());

    if(hasNames && !phoneNumber.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Contact::isValidTophoneNumber() const
{
    int n,flag=0;
    n=phoneNumber.length();
if(n==10)
{
    for(int i=0;i<phoneNumber.length();i++)
     {
        if(phoneNumber[i]<='0' && phoneNumber[i]>='9')
        flag=1;

        break;
    }
    if (flag==1)
    {

       return false;
    }
    else
    {
        return true;
    }

}
else
    return false;
}


bool Contact::isEmpty() const
{
    if(firstName.empty() && 
        lastName.empty() &&
        phoneNumber.empty() && 
        address.empty() && 

        email.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
    
