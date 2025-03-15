
project('libjpegEAWebKit', 'c', version : 'local-1.00.06')

# libjpegEAWebKit.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/include',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/include'
)

sources = [
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jcapimin.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jcapistd.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jccoefct.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jccolor.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jcdctmgr.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jchuff.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jcinit.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jcmainct.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jcmarker.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jcmaster.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jcomapi.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jcparam.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jcphuff.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jcprepct.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jcsample.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jctrans.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jdapimin.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jdapistd.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jdatadst.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jdatasrc.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jdcoefct.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jdcolor.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jddctmgr.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jdhuff.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jdinput.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jdmainct.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jdmarker.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jdmaster.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jdmerge.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jdphuff.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jdpostct.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jdsample.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jdtrans.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jerror.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jfdctflt.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jfdctfst.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jfdctint.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jidctflt.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jidctfst.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jidctint.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jidctred.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jmemmgr.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jquant1.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jquant2.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jsupport_ea.c',
    '../../../../EAWebKitSupportPackages/libjpegEAWebKit/local-1.00.06/source/jutils.c'

    
]

cflags = [
  '-DLIBJPEG_EA_SUPPORT_ENABLED=1'
]

libn = meson.project_name()

if get_option('buildtype') == 'debug'
  cflags += '-D_DEBUG'
  cflags += '-DEA_DEBUG'
else
  cflags += '-DNDEBUG' 
endif

dependencies = [
]

target = static_library(
  libn,
  sources,
  c_args : cflags,
  include_directories: includes,
  dependencies: dependencies
)

project_dep = declare_dependency(
  include_directories: headers,
  link_with : target
)

set_variable(meson.project_name() + '_dep', project_dep)

