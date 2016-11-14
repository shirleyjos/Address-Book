#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QTextEdit()),
          phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
      pincodeField(new QLineEdit()),
      stateField(new QLineEdit())
{
    addRow("First Name", firstNameField);
    addRow("Last Name", lastNameField);
    addRow("Address", addressField);
    addRow("Phone Number", phoneNumberField);
    addRow("Email", emailField);
    addRow("Pincode",pincodeField);
    addRow("State",stateField);

}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setPlainText("");
     phoneNumberField->setText("");
    emailField->setText("");
    pincodeField->setText("");
    stateField->setText("");
}
