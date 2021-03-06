#ifndef COCO_LC_WORKSPACELC_HPP_
#define COCO_LC_WORKSPACELC_HPP_

#include <vector>
#include <string>
#include "../core/LC.hpp"
#include "Model.hpp"

using namespace std;


struct Data {
    vector<double> x_;
    vector<double> y_;
    vector<double> sigma_;

    vector<double> bestFit_;
    vector<double> median_;
    vector<double> medianSigma_;
};


class WorkspaceLC {
public:
    // Constructor
    WorkspaceLC();

    // File names
    string LCListFile_;
    string PhaseFile_;

    // Lists
    vector< vector<string> > infoList_;
    vector<string> fileList_;
    vector<string> filterList_;

    // List of SN objects
    vector<LC> SNe_;

    // Input lists for LCSim
    vector<string> snNameList_;
    vector<string> uniqueSNList_;
    vector<double> zList_;
    vector<double> absMag_;
    vector< vector<string> > filterVector_;
    // Current supernova
    short SNID_;
    short FLTID_;

    // Light curve model - THIS WILL CHANGE IN THE FUTURE
    Model model_;
    Data data_;
    Data dataRecon_;
};

#endif
