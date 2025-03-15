
project('PPMallocEAWebKit', 'cpp', version : 'local')

# PPMalloc.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/PPMallocEAWebKit/local/include',
    '../../../../EAWebKitSupportPackages/PPMallocEAWebKit/local/source',
    '../../../../EAWebKitSupportPackages/EABaseEAWebKit/local/include/Common',
)

headers = include_directories(
)

sources = [ 
'../../../../EAWebKitSupportPackages/PPMallocEAWebKit/local/source/cmn/EAStackAllocator.cpp' 
]

cxxflags = [
  '-DEASTL_CORE_ALLOCATOR_ENABLED=1',
  '-DEASTL_EASTDC_VSNPRINTF=1',
  '-DPPM_HIGH_SUPPORTED=1',
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

