TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    template_many_instanlization.cpp \
    pra_16_20.cpp \
    implement_share_ptr.cpp \
    explicit_func_template.cpp \
    lvalue_and_rvalue_ref_arg.cpp \
    strvec.cpp

HEADERS += \
    which_to_run.h \
    template.h
