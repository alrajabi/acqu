// SVN Info: $Id$

/*************************************************************************
 * Author: Dominik Werthmueller
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// Import.C                                                             //
//                                                                      //
// Import CaLib run data and calibrations from ROOT files.              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


//______________________________________________________________________________
void Import()
{
    // load CaLib
    gSystem->Load("libCaLib.so");
    
    // import CaLib data
    TCMySQLManager::GetManager()->Import("2014_04_Compton_Paudyal.root", kFALSE, kTRUE, "Carbon_04_2014");
  
    gSystem->Exit(0);
}

