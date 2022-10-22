#include "declarative_grue.h"


QT_BEGIN_NAMESPACE

void GrueSensorQmlImport::registerTypes(const char *uri)
{
	char const * const package = "Grue";
	if (QLatin1String(uri) != QLatin1String(package)) return;
	int major;
	int minor;

	// Register the 1.0 interfaces
	major = 1;
	minor = 0;
	// @uri Grue
	qmlRegisterType           <GrueSensor       >(package, major, minor, "GrueSensor");
	qmlRegisterUncreatableType<GrueSensorReading>(package, major, minor, "GrueSensorReading", QLatin1String("Cannot create GrueSensorReading"));
}

QT_END_NAMESPACE

