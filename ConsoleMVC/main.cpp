#include "Controller/SampleController.h"
#include "Model/SampleModel.h"
#include "View/ConsoleView.h"

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
    // 소스/실행 문자 집합을 UTF-8로 컴파일(/utf-8)했으므로,
    // 콘솔 입출력 코드페이지도 UTF-8로 맞춰야 한글이 정상 출력된다.
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif

    SampleModel model;
    ConsoleView view;
    SampleController controller(model, view);

    controller.run();

    return 0;
}
