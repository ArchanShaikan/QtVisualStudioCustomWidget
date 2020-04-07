#include "QtWidgetUsageExample.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtWidgetUsageExample w;
	w.show();
	return a.exec();
}
