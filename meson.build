project('tutorial', 'cpp',
    default_options : ['cpp_std=c++2a'])

libfib_proj = subproject('libfib')
libfib_dep = libfib_proj.get_variable('libfib_dep')

executable('demo', 'main.c', dependencies : [libfib_dep])