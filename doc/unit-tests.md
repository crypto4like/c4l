Compiling/running unit tests
------------------------------------

Unit tests will be automatically compiled if dependencies were met in configure
and tests weren't explicitly disabled.

After configuring, they can be run with 'make check'.

To run the crypto4liked tests manually, launch src/test/test_crypto4like .

To add more crypto4liked tests, add `BOOST_AUTO_TEST_CASE` functions to the existing
.cpp files in the test/ directory or add new .cpp files that
implement new BOOST_AUTO_TEST_SUITE sections.

To run the crypto4like-qt tests manually, launch src/qt/test/crypto4like-qt_test

To add more crypto4like-qt tests, add them to the `src/qt/test/` directory and
the `src/qt/test/test_main.cpp` file.
