
project('dirtysockEAWebKit', ['c', 'cpp'], version : 'local')

# dirtysock.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/platform',
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/include',
    #'../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/include/pc',
    #    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/source/voip'
)

headers = include_directories(
)

sources = [
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/source/crypt/cryptarc4.c',
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/source/crypt/cryptmd2.c',
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/source/crypt/cryptmd5.c',
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/source/crypt/cryptrsa.c',
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/source/crypt/cryptsha1.c',
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/source/dirtysock/dirtylib.c',
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/source/dirtysock/dirtymem.c',
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/source/dirtysock/dirtynet.c',
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/source/dirtysock/platformsocketapi.c',
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/source/dirtysock/unix/dirtylibunix.c',
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/source/dirtysock/unix/dirtynetunix.c',
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/source/proto/protohttp.c',
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/source/proto/protohttpmanager.c',
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/source/proto/protossl.c',
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/core/source/util/lobbybase64.c',
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/platform/plat-str.c',
    '../../../../EAWebKitSupportPackages/DirtySDKEAWebKit/local/platform/plat-time.c',
]

cflags = [
  '-D_GNU_SOURCE',
  '-Wno-multichar',
  '-DDS_PLATFORM',
  '-DDIRTYCODE_PLATFORM=13',
]

libn = meson.project_name()

if get_option('buildtype') == 'debug'
  cflags += '-D_DEBUG'
  cflags += '-DEA_DEBUG'
else
  cflags += '-DNDEBUG' 
endif

cxxflags = cflags + '-std=c++17'

dependencies = [
]

target = static_library(
  libn,
  sources,
  cpp_args : cxxflags,
  c_args : cflags,
  include_directories: includes,
  dependencies: dependencies
)

project_dep = declare_dependency(
  include_directories: headers,
  link_with : target
)

set_variable(meson.project_name() + '_dep', project_dep)

