
project('zlibEAWebKit', 'c', version : 'local-1.2.5-7')

# zlibEAWebKit.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7/install'
)

headers = include_directories(
)

sources = [
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7/install/adler32.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7/install/compress.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7/install/crc32.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7/install/deflate.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7/install/infback.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7/install/inffast.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7/install/inflate.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7/install/inftrees.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7/install/trees.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7/install/uncompr.c',
    '../../../../EAWebKitSupportPackages/zlibEAWebKit/local-1.2.5-7/install/zutil.c',
    
]

cflags = [
    '-DMY_ZCALLOC',
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

