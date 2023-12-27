int firstOccurence(string &text, string &pat){

	  size_t found = text.find(pat);    // size_t is an unsigned integer type in C++ that is commonly used to 
                                      // represent sizes or indices of objects in memory. It is typically used for variables that store the size of an array,
                                      // the length of a string, or an index in an array or container.
                                      // The size of size_t is platform-dependent. It is typically chosen to be large enough to represent the size of the largest possible object in memory.
	
    if (found != string::npos) {      // string::npos is a constant static member of the string class in C++. 
        return found;                 // It represents a special value that is typically used to indicate 
    }                                 // the absence or failure of a valid index or position within a string.                           
	  return -1;
}



// The npos constant is defined in the string class in C++ and is used to represent an invalid or "not found" position within a string.
// It is of type size_t and typically has the maximum possible value for the size_t type.
