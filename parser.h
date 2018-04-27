#ifndef PARSER_H
#define PARSER_H
#include <vector>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <dirent.h>
using namespace std;
class parser
{
private :
public:
    parser();
    void transform_to_timestamp_promat(vector<vector<std::string> >* mass_ln_to_transform, int num_table);
    vector<vector<string> > pars_file(std::string fileName, char delimiter, int data_num, int start_reading_line);
    vector<std::string> mass_broken_ln;
};

#endif // PARSER_H
