#include <iostream>
#include <string>
/*
Defined in header <string>
template<
    class CharT,
    class Traits = std::char_traits<CharT>,
    class Allocator = std::allocator<CharT>
> class basic_string;
(1)	
namespace pmr {
    template <class CharT, class Traits = std::char_traits<CharT>>
    using basic_string = std::basic_string< CharT, Traits,
    std::polymorphic_allocator<CharT>>
}
(2)	(since C++17)
The class template basic_string stores and manipulates sequences of char-like objects, 
which are non-array objects of trivial standard-layout type. The class is dependent neither on the character type nor on the 
nature of operations on that type. The definitions of the operations are supplied via the Traits template parameter - 
a specialization of std::char_traits or a compatible traits class.Traits::char_type and 
CharT must name the same type; otherwise the program is ill-formed.
The elements of a basic_string are stored contiguously, that is,
for a basic_string s, &*(s.begin() + n) == &*s.begin() + n for any n in [0, s.size()), or, equivalently,
a pointer to s[0] can be passed to functions that expect a pointer to the first element 
of a null-terminated (since C++11)CharT[] array.
std::basic_string satisfies the requirements of
AllocatorAwareContainer, SequenceContainer and ContiguousContainer (since C++17)
Several typedefs for common character types are provided:
*/

int		main(void)
{
	std::string sly;
	sly = "Hi can you run me please!";
	std::cout << sly << std::endl;
	return (0);
}
