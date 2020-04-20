#ifndef OWRROSCOMPONENTS_H

#define OWRROSCOMPONENTS_H

#include <QQmlExtensionPlugin>


class OWRRosComponents : public QQmlExtensionPlugin {

    Q_OBJECT

    Q_PLUGIN_METADATA(IID "bluerov.owr")


    public:

        void registerTypes(const char * uri);

};


#endif // OWRROSCOMPONENTS_H
