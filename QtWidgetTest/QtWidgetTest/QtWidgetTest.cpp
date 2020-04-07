#include "QtWidgetTest.h"
#include <QPushButton>

QtWidgetTest::QtWidgetTest(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.pushButton, &QPushButton::clicked, this, &QtWidgetTest::onClick);
}

void QtWidgetTest::onClick()
{
	ui.label->setText(QString("clicked: ") + QString::number(++clickCounter) + " times");
}
QtWidgetTest::~QtWidgetTest()
{
}
