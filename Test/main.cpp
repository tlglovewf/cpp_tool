#include <QtCore/QCoreApplication>

#include "QBreakpadHandler.h"


#include "vld.h"

#pragma comment (lib , "qBreakpad.lib")
#pragma comment (lib, "dbghelp.lib")



void testCrash()
{
	QBreakpadInstance.setDumpPath("crash");

	int *t = nullptr;

	*t = 10;
}

void testMemLeak()
{
	int *test = new int;

	char *wd = new char;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

	testCrash();

	testMemLeak()

	return 1;
}
