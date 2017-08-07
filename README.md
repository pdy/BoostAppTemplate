Utility that serves me as starting point whenever I need to write some code from scratch.
Use Boost C++, good for prove of concept code or to create small tool.

# Build

Makefiles are linux only. Tools you need:
* clang++ with c++14 support
* Boost C++ installed or compiled

If you'll my script, app is easy to prepare

````
$ wget https://raw.githubusercontent.com/severalgh/scripts/master/utils/new_app.sh
$ sh new_app.sh StartApp
$ cd StartApp
$ rm -r .git
$ ./setboostpath <boost_path>
$ make
````

