#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetUsageExample.h"

class QtWidgetUsageExample : public QMainWindow
{
	Q_OBJECT

public:
	QtWidgetUsageExample(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtWidgetUsageExampleClass ui;
};
