### 1- This error happens when comma is forgotten in defining the node function main in settings file 

``` Traceback (most recent call last):.6s]
  File "<string>", line 1, in <module>
  File "/usr/lib/python3/dist-packages/setuptools/_distutils/core.py", line 277, in run_setup
    raise RuntimeError(
RuntimeError: 'distutils.core.setup()' was never called -- perhaps 'setup.py' is not a Distutils setup script?
--- stderr: realpkg                   
Traceback (most recent call last):
  File "/usr/lib/python3/dist-packages/colcon_core/executor/__init__.py", line 91, in __call__
    rc = await self.task(*args, **kwargs)
         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
  File "/usr/lib/python3/dist-packages/colcon_core/task/__init__.py", line 93, in __call__
    return await task_method(*args, **kwargs)
           ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
  File "/usr/lib/python3/dist-packages/colcon_ros/task/ament_python/build.py", line 51, in build
    setup_py_data = get_setup_data(self.context.pkg, env)
                    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
  File "/usr/lib/python3/dist-packages/colcon_core/task/python/__init__.py", line 20, in get_setup_data
    return dict(pkg.metadata[key](env))
                ^^^^^^^^^^^^^^^^^^^^^^
  File "/usr/lib/python3/dist-packages/colcon_ros/package_augmentation/ros_ament_python.py", line 57, in getter
    return get_setup_information(
           ^^^^^^^^^^^^^^^^^^^^^^
  File "/usr/lib/python3/dist-packages/colcon_python_setup_py/package_identification/python_setup_py.py", line 241, in get_setup_information
    _setup_information_cache[hashable_env] = _get_setup_information(
                                             ^^^^^^^^^^^^^^^^^^^^^^^
  File "/usr/lib/python3/dist-packages/colcon_python_setup_py/package_identification/python_setup_py.py", line 288, in _get_setup_information
    result = subprocess.run(
             ^^^^^^^^^^^^^^^
  File "/usr/lib/python3.12/subprocess.py", line 571, in run
    raise CalledProcessError(retcode, process.args,
subprocess.CalledProcessError: Command '['/usr/bin/python3', '-c', 'import sys;from contextlib import suppress;exec("with suppress(ImportError):    from setuptools.extern.packaging.specifiers    import SpecifierSet");exec("with suppress(ImportError):    from packaging.specifiers import SpecifierSet");from distutils.core import run_setup;dist = run_setup(    \'setup.py\', script_args=(\'--dry-run\',), stop_after=\'config\');skip_keys = (\'cmdclass\', \'distclass\', \'ext_modules\', \'metadata\');data = {    key: value for key, value in dist.__dict__.items()     if (        not key.startswith(\'_\') and         not callable(value) and         key not in skip_keys and         key not in dist.display_option_names    )};data[\'metadata\'] = {    k: v for k, v in dist.metadata.__dict__.items()     if k not in (\'license_files\', \'provides_extras\')};sys.stdout.buffer.write(repr(data).encode(\'utf-8\'))']' returned non-zero exit status 1.
---
Failed   <<< realpkg [1.81s, exited with code 1]

Summary: 0 packages finished [2.39s]
  1 package failed: realpkg
  1 package had stderr output: realpkg
Command '['/usr/bin/python3', '-c', 'import sys;from contextlib import suppress;exec("with suppress(ImportError):    from setuptools.extern.packaging.specifiers    import SpecifierSet");exec("with suppress(ImportError):    from packaging.specifiers import SpecifierSet");from distutils.core import run_setup;dist = run_setup(    \'setup.py\', script_args=(\'--dry-run\',), stop_after=\'config\');skip_keys = (\'cmdclass\', \'distclass\', \'ext_modules\', \'metadata\');data = {    key: value for key, value in dist.__dict__.items()     if (        not key.startswith(\'_\') and         not callable(value) and         key not in skip_keys and         key not in dist.display_option_names    )};data[\'metadata\'] = {    k: v for k, v in dist.metadata.__dict__.items()     if k not in (\'license_files\', \'provides_extras\')};sys.stdout.buffer.write(repr(data).encode(\'utf-8\'))']' returned non-zero exit status 1.
```
