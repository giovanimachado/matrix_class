// Begining: Use of an Inclusion Guard
#ifndef MATRIX_H
#define MATRIX_H
// End: Use of an Inclusion Guard

#include <vector>
#include <iostream>
#include <stdexcept>

#include <vector>

class Matrix
{
    private:

        std::vector< std::vector<float> > grid;
        std::vector<float>::size_type rows;
        std::vector<float>::size_type cols;

    public:
      /*
        C++ Constructor Declaration
        In C++, you declare a constructor like this:
          Classname (datatype variable1, datatype variable2, …, datatype variablen);

        You can also simultaneously declare a default constructor function,
        which implies the function has no inputs:
          Classname ();
      */

        // constructor functions
        Matrix ();
        Matrix (std::vector< std::vector<float> >);

        /*
          class function declaration syntax:
            output_datatype functionname(datatype variable1,
            datatype variable2, ..., datatype variablen)
        */

        // set functions
        void setGrid(std::vector< std::vector<float> >);

        // get functions
        std::vector< std::vector<float> > getGrid();
        std::vector<float>::size_type getRows();
        std::vector<float>::size_type getCols();

        // matrix functions
        Matrix matrix_transpose();
        Matrix matrix_addition(Matrix);

        // matrix printing
        void matrix_print();

};

#endif /* MATRIX_H */
