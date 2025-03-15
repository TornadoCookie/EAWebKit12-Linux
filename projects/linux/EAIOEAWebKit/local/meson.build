
project('EAIOEAWebKit', 'cpp', version : 'local')

# EAIO.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/include',
    '../../../../EAWebKitSupportPackages/EABaseEAWebKit/local/include/Common',
    '../../../../EAWebKitSupportPackages/EAAssertEAWebKit/local/include',
    '../../../../EAWebKitSupportPackages/coreallocatorEAWebKit/local-1.03.08/include',
    '../../../../EAWebKitSupportPackages/EASTLEAWebKit/local/include'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/include'
)

sources = [ 
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/Allocator.cpp',
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/EAFileDirectory.cpp',
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/EAFileNotification.cpp',
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/EAFileStream.cpp',
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/EAFileUtil.cpp',
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/EAIniFile.cpp',
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/EAStreamAdapter.cpp',
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/EAStreamBuffer.cpp',
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/EAStreamChild.cpp',
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/EAStreamCpp.cpp',
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/EAStreamFixedMemory.cpp',
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/EAStreamMemory.cpp',
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/EAStreamNull.cpp',
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/FnEncode.cpp',
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/FnMatch.cpp',
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/PathString.cpp',
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/internal/EAIOCoreAllocator.cpp',
    '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/source/internal/EAIOZoneObject.cpp',

]

cxxflags = [
  '-DUTF_USE_EAASSERT=1',
  '-DEAIO_INIFILE_ENABLED=0',
  '-std=c++11',
  '-fpermissive'
]

libn = meson.project_name()

if get_option('buildtype') == 'debug'
  cxxflags += '-D_DEBUG'
  cxxflags += '-DEA_DEBUG'
  cxxflags += '-DEA_SCEDBG_ENABLED=1'
else
  cxxflags += '-DNDEBUG' 
  cxxflags += '-DEA_SCEDBG_ENABLED=0'
endif

dependencies = [
]

target = static_library(
  libn,
  sources,
  cpp_args : cxxflags,
  include_directories: includes,
  dependencies: dependencies
)

project_dep = declare_dependency(
  include_directories: headers,
  link_with : target
)

set_variable(meson.project_name() + '_dep', project_dep)

