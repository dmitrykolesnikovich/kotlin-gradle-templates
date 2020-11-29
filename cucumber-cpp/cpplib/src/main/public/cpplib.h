/*
 * This C++ source file was generated by the Gradle 'init' task.
 */
#ifndef CPPLIB_H
#define CPPLIB_H

#ifdef _WIN32
#define CPPLIB_EXPORT_FUNC __declspec(dllexport)
#else
#define CPPLIB_EXPORT_FUNC
#endif

#include <string>

namespace CppLib {
    class Library {
        public:
        std::string CPPLIB_EXPORT_FUNC greeting();
        std::string CPPLIB_EXPORT_FUNC getClipboard();
        void CPPLIB_EXPORT_FUNC sendKey(char mK);
        void CPPLIB_EXPORT_FUNC sendCtrlKey(char mK);
        void CPPLIB_EXPORT_FUNC sendAltKey(char mK);
        void CPPLIB_EXPORT_FUNC sendShiftSpecial(int mK);
        void CPPLIB_EXPORT_FUNC sendSpecial(int mK);
    };
}

#endif