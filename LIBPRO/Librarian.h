#pragma once

#include <QWidget>
#include "ui_Librarian.h"

class Librarian : public QWidget
{
	Q_OBJECT

public:
	Librarian(QWidget *parent = Q_NULLPTR);
	~Librarian();

private:
	Ui::Librarian ui;
};
