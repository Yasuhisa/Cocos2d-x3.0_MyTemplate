//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___.h"

___FILEBASENAMEASIDENTIFIER___ *___FILEBASENAMEASIDENTIFIER___::create___FILEBASENAMEASIDENTIFIER___()
{
    auto pInstance = ___FILEBASENAMEASIDENTIFIER___::create();
    return pInstance;
}

bool ___FILEBASENAMEASIDENTIFIER___::init()
{
    if ( !<#parent class#>::init() ) {
        return false;
    }
    
    <#your initialize code...#>
    
    return true;
}