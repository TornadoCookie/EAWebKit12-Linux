
project('EAAssertEAWebKit', 'cpp', version : 'local')

# EAAssert.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/EAAssertEAWebKit/local/include',
    '../../../../EAWebKitSupportPackages/EABaseEAWebKit/local/include/Common'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/EAAssertEAWebKit/local/include'
)

sources = [ 
    '../../../../EAWebKitSupportPackages/EAAssertEAWebKit/local/source/eaassert.cpp'
    
]

cxxflags = [
  '-std=c++17'
]

libn = meson.project_name()

if get_option('buildtype') == 'debug'
  cxxflags += '-D_DEBUG'
  cxxflags += '-DEA_DEBUG'
else
  cxxflags += '-DNDEBUG' 
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

