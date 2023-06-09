#include <QApplication>

#include "MainWindow/MainWindow.h"
#include "CustomWidget/widget.h"

#include "example/example.hpp"

int main(int argc, char* argv[]) {
	QApplication a(argc, argv);
	MainWindow w;
	//Widget w;
	w.show();
	return a.exec();
}
