

#include <gtkmm.h>
#include <gtksourceviewmm.h>

#include "MainWindow.h"
#include "MainApplication.h"

using namespace Xenoide;

int main(int argc, char* argv[]) {
    auto app = MainApplication::create(argc, argv, "org.fapablazacl.XenoideGTK");
    auto window = IDEFrameGtk{};
    
    window.show();

    return app->run(window);
}
