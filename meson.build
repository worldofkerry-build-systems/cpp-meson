project('tutorial', 'c')

cpp_meson_lib_sp = subproject('cpp_meson_lib')
cpp_meson_lib_dep = cpp_meson_lib_sp.get_variable('cpp_meson_lib_dep')

executable('demo', 'main.c',dependencies:[cpp_meson_lib_dep])
