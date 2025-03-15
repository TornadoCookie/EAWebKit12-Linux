
project('pixman', 'c', version : 'local_0.28.2')

# pixman.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/pixman/local/include'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/pixman/local/include'
)

sources = [
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-access.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-access-accessors.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-bits-image.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-combine32.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-combine64.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-conical-gradient.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-cpu.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-edge.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-edge-accessors.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-fast-path.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-general.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-gradient-walker.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-image.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-implementation.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-linear-gradient.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-matrix.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-radial-gradient.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-region16.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-region32.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-solid-fill.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-sse2.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-timer.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-trap.c',
    '../../../../EAWebKitSupportPackages/pixman/local/source/pixman-utils.c',
]

cflags = [
    '-DPACKAGE=pixman',
    '-DPACKAGE_BUGREPORT=',
    '-DPACKAGE_VERSION=', 
    '-DPIXMAN_NO_TLS',
    '-DUSE_SSE2'
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

