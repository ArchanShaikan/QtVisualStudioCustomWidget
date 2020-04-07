#pragma once

#include <QWidget>
#include "ui_QtWidgetTest.h"

class QtWidgetTest : public QWidget
{
	Q_OBJECT

public:
	QtWidgetTest(QWidget *parent = Q_NULLPTR);
	~QtWidgetTest();

private slots:
	void onClick();
private:
	Ui::Form ui;
	int clickCounter = 0;
};
