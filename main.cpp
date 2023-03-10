#include "Vector.hpp"

int main(int argc, char *argv[])
{   
    std::cout << "Default initialization for v1." << std::endl;
    Vector v1(3);
    std::cout << " v1 = " << v1 << std::endl;
    
    std::cout << "Making v1 a unit vector along X1." << std::endl;
    v1[0] = 1.0;
    std::cout << " v1 = " << v1 << std::endl;
    
    std::cout << "Calling copy constructor, v2 is a copy of v1." << std::endl;
    Vector v2(v1);
    std::cout << " v2 = " << v2 << std::endl;
    
    std::cout << "Making v2 a unit vector along X2." << std::endl;
    v2[0] = 0.0, v2[1] = 1.0;
    std::cout << " v2 = " << v2 << std::endl;
    
    std::cout << "Changing v2 shouldn't affect v1." << std::endl;
    std::cout << " v1 = " << v1 << std::endl;
    
    std::cout << "Creating vector v3 with same size as v1." << std::endl;
    Vector v3(v1.GetSize());
    std::cout << " v3 = " << v3 << std::endl;
    
    std::cout << "Making v3 a unit vector along X3." << std::endl;
    v3[2] = 1.0;
    std::cout << " v3 = " << v3 << std::endl;
    
    std::cout << std::endl;
    std::cout << "Read only variant of []" << std::endl;
    std::cout << " v1(0) = " << v1.Read(0) ;
    std::cout << " v1(1) = " << v1.Read(1);
    std::cout << " v1(2) = " << v1.Read(2) << std::endl;
    std::cout << " v2(0) = " << v2.Read(0) ;
    std::cout << " v2(1) = " << v2.Read(1);
    std::cout << " v2(2) = " << v2.Read(2) << std::endl;
    std::cout << " v3(0) = " << v3.Read(0) ;
    std::cout << " v3(1) = " << v3.Read(1);
    std::cout << " v3(2) = " << v3.Read(2) << std::endl;

    std::cout << std::endl;
    std::cout << "Overloaded round brackets () with one-based indexing" << std::endl;
    std::cout << " v1(1) = " << v1(1) ;
    std::cout << " v1(2) = " << v1(2);
    std::cout << " v1(3) = " << v1(3) << std::endl;
    std::cout << " v2(1) = " << v2(1) ;
    std::cout << " v2(2) = " << v2(2);
    std::cout << " v2(3) = " << v2(3) << std::endl;
    std::cout << " v3(1) = " << v3(1) ;
    std::cout << " v3(2) = " << v3(2);
    std::cout << " v3(3) = " << v3(3) << std::endl;

    std::cout << std::endl;
    std::cout << "Testing the unary - operator, creating v4 = -v1." << std::endl;
    Vector v4 = -v1;
    std::cout << " v4 = " << v4 << std::endl;

    std::cout << "Sanity check for Read and one-based indexing with v4." << std::endl;
    std::cout << " v4(0) = " << v4.Read(0) ;
    std::cout << " v4(1) = " << v4.Read(1);
    std::cout << " v4(2) = " << v4.Read(2) << std::endl;
    std::cout << " v4(1) = " << v4(1) ;
    std::cout << " v4(2) = " << v4(2);
    std::cout << " v4(3) = " << v4(3) << std::endl;

    std::cout << std::endl;
    std::cout << "Vector addition with overloaded + operator." << std::endl;
    std::cout << " v4 = v1 + v2" << std::endl;
    v4 = v1 + v2;
    std::cout << " v4(1) = " << v4(1) ;
    std::cout << " v4(2) = " << v4(2);
    std::cout << " v4(3) = " << v4(3) << std::endl;
    std::cout << " v4 = v4 + v3" << std::endl;
    v4 = v4 + v3;
    std::cout << " v4(1) = " << v4(1) ;
    std::cout << " v4(2) = " << v4(2);
    std::cout << " v4(3) = " << v4(3) << std::endl;

    std::cout << std::endl;
    std::cout << "Vector subtraction with overloaded - operator." << std::endl;
    Vector v5(v1.GetSize());
    v5 = -v1 - v2 - v3;
    std::cout << " v5 = -v1 - v2 - v3" << std::endl;
    std::cout << " v5 = " << v5 << std::endl;
    
    std::cout << std::endl;
    std::cout << "Vector scalar multiplication." << std::endl;
    myReal k = 2.0;
    v5 = v5*k;
    std::cout <<" k = " << k <<", v5*k" << std::endl;
    std::cout << " v5 = " << v5 << std::endl;
    
    std::cout << "Calculating norms of different vectors. L2 norm by default." << std::endl;
    std::cout << "L2 norm of v1 = " << v1.CalculateNorm() << std::endl;
    std::cout << "L2 norm of v2 = " << v2.CalculateNorm() << std::endl;
    std::cout << "L2 norm of v3 = " << v3.CalculateNorm() << std::endl;
    std::cout << "L2 norm of v4 = " << v4.CalculateNorm() << std::endl;
    std::cout << "L2 norm of v5 = " << v5.CalculateNorm() << std::endl;
    
    std::cout << std::endl;
    std::cout << "Validating other norms." << std::endl;
    std::cout << "L1 norm of v5 = " << v5.CalculateNorm(1) << std::endl;
    std::cout << "L3 norm of v5 = " << v5.CalculateNorm(3) << std::endl;

    std::cout << std::endl;
    std::cout << "Validating MATLAB style length to get vector size" << std::endl;
    std::cout << "Length of v1 = " << length(v1) << std::endl;
    std::cout << "Length of v2 = " << length(v2) << std::endl;
    std::cout << "Length of v3 = " << length(v3) << std::endl;
    std::cout << "Length of v4 = " << length(v4) << std::endl;
    std::cout << "Length of v5 = " << length(v5) << std::endl;
    
    std::cout << std::endl;
    std::cout << "Calculating unit vector." << std::endl;
    Vector u1 = v1.unit_vector();
    std::cout << " u1 = " << u1 << std::endl;
    Vector u2 = v2.unit_vector();
    std::cout << " u2 = " << u2 << std::endl;
    Vector u3 = v3.unit_vector();
    std::cout << " u3 = " << u3 << std::endl;
    Vector u4 = v4.unit_vector();
    std::cout << " u4 = " << u4 << std::endl;
    Vector u5 = v5.unit_vector();
    std::cout << " u5 = " << u5 << std::endl;

    std::cout << "Computing Dot Product between vectors." << std::endl;
    std::cout << "Dot product between orthogonal vectors should be zero." << std::endl;
    std::cout << " v1.v2 = " << v1*v2 << std::endl;
    std::cout << " v2.v3 = " << v2*v3 << std::endl;
    std::cout << " v3.v1 = " << v3*v1 << std::endl;
    std::cout << " v4.v5 = " << v4*v5 << std::endl;
    std::cout << " v1.v4 = " << v1*v4 << std::endl;
    std::cout << " v1.v5 = " << v1*v5 << std::endl;

    std::cout << std::endl;
    std::cout << " Deallocating memory " << std::endl;
    // Latest version GCC Compilers call destructors automatically.
    // Don't call them explicitly below.
    //v1.~Vector();
    //v2.~Vector();
    //v3.~Vector();
    //v4.~Vector();
    //v5.~Vector();

    return 0;
}