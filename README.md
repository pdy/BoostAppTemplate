Utility that serves me as starting point whenever I need to write small tool or when learning new library or technique.

# Build

Makefiles are linux only. Tools you need:
* clang++ with c++14 support
* Boost C++ installed or compiled

If you'll use my script, app is easy to prepare

````
$ wget https://raw.githubusercontent.com/pdy/scripts/master/utils/nbapp.sh
$ sh nbapp.sh BoostStartApp
$ cd BoostStartApp
$ ./setboostpath <boost_path>
$ make
````
Then enter 'build' directory to access binaries.

