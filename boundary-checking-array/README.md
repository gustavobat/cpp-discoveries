# Boundary checking array

This target shows 2 different ways of wrapping a `std::array` to allow for
boundary checks. 

Like `std::array` both wrappers can be created at compile-time, as verified by
the `static_assert` expressions.
 
Composition is the recommended way of doing it, as shown in
https://quuxplusone.github.io/blog/2018/12/11/dont-inherit-from-std-types/.



