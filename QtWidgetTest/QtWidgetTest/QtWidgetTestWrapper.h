#pragma once

#include "qtwidgettestWrapper_global.h"
#include "QtWidgetTest.h"
#include <QtUiPlugin/QDesignerCustomWidgetInterface>

class QTWIDGETTEST_EXPORT QtWidgetTestWrapper: public QObject, public QDesignerCustomWidgetInterface
{
	Q_OBJECT
	Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QDesignerCustomWidgetInterface")
	Q_INTERFACES(QDesignerCustomWidgetInterface)
public:
	QtWidgetTestWrapper();


	virtual bool isInitialized() const override;
	void initialize(QDesignerFormEditorInterface* core) override;
	virtual QString domXml() const override;

	// Inherited via QDesignerCustomWidgetInterface
	virtual QString name() const override;
	virtual QString group() const override;
	virtual QString toolTip() const override;
	virtual QString whatsThis() const override;
	virtual QString includeFile() const override;
	virtual QIcon icon() const override;
	virtual bool isContainer() const override;
	virtual QWidget* createWidget(QWidget* parent) override;
private:
	bool initialized = false;
};
