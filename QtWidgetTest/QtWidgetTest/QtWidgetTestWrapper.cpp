#include "QtWidgetTestWrapper.h"

QtWidgetTestWrapper::QtWidgetTestWrapper()
{
}

bool QtWidgetTestWrapper::isInitialized() const
{
	return initialized;
}

void QtWidgetTestWrapper::initialize(QDesignerFormEditorInterface* core)
{
	if (initialized)
		return;

	initialized = true;
}

QString QtWidgetTestWrapper::domXml() const
{
    return "<ui language=\"c++\">\n"
        " <widget class=\"QtWidgetTest\" name=\"QtWidgetTest\">\n"
        "  <property name=\"geometry\">\n"
        "   <rect>\n"
        "    <x>0</x>\n"
        "    <y>0</y>\n"
        "    <width>100</width>\n"
        "    <height>100</height>\n"
        "   </rect>\n"
        "  </property>\n"
        "  <property name=\"toolTip\" >\n"
        "   <string>The current time</string>\n"
        "  </property>\n"
        "  <property name=\"whatsThis\" >\n"
        "   <string>The analog clock widget displays the current time.</string>\n"
        "  </property>\n"
        " </widget>\n"
        "</ui>\n";
}

QString QtWidgetTestWrapper::name() const
{
	return QString("QtWidgetTest");
}

QString QtWidgetTestWrapper::group() const
{
	return QString("QtCustomWidgetFromVisualStudio");
}

QString QtWidgetTestWrapper::toolTip() const
{
	return QString();
}

QString QtWidgetTestWrapper::whatsThis() const
{
	return QString();
}

QString QtWidgetTestWrapper::includeFile() const
{
	return QString("QtWidgetTest.h");
}

QIcon QtWidgetTestWrapper::icon() const
{
	return QIcon();
}

bool QtWidgetTestWrapper::isContainer() const
{
	return false;
}

QWidget* QtWidgetTestWrapper::createWidget(QWidget* parent)
{
	return new QtWidgetTest(parent);
}
