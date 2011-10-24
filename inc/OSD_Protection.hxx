// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_Protection_HeaderFile
#define _OSD_Protection_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _OSD_SingleProtection_HeaderFile
#include <OSD_SingleProtection.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class OSD_FileNode;
class OSD_File;
class OSD_Directory;


//! This  class provides data to manage file protection <br>
//!  Example:These rights are treated in a system dependent manner : <br>
//!          On UNIX you have User,Group and Other rights <br>
//!          On VMS  you have Owner,Group,World and System rights <br>
//!          An automatic conversion is done between OSD and UNIX/VMS. <br>
//! <br>
//!          OSD	VMS	UNIX <br>
//!          User     Owner   User <br>
//!          Group    Group   Group <br>
//!          World    World   Other <br>
//!          System   System  (combined with Other) <br>
//! <br>
//!          When you use System protection on UNIX you must know that <br>
//!          Other rights and System rights are inclusively "ORed". <br>
//!          So Other with only READ access and System with WRITE access <br>
//!          will produce on UNIX Other with READ and WRITE access. <br>
class OSD_Protection  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Initializes global access rights as follows <br>
  Standard_EXPORT   OSD_Protection();
  //! Sets values of fields <br>
  Standard_EXPORT   OSD_Protection(const OSD_SingleProtection System,const OSD_SingleProtection User,const OSD_SingleProtection Group,const OSD_SingleProtection World);
  //! Retrieves values of fields <br>
  Standard_EXPORT     void Values(OSD_SingleProtection& System,OSD_SingleProtection& User,OSD_SingleProtection& Group,OSD_SingleProtection& World) ;
  //! Sets values of fields <br>
  Standard_EXPORT     void SetValues(const OSD_SingleProtection System,const OSD_SingleProtection User,const OSD_SingleProtection Group,const OSD_SingleProtection World) ;
  //! Sets protection of 'System' <br>
  Standard_EXPORT     void SetSystem(const OSD_SingleProtection priv) ;
  //! Sets protection of 'User' <br>
  Standard_EXPORT     void SetUser(const OSD_SingleProtection priv) ;
  //! Sets protection of 'Group' <br>
  Standard_EXPORT     void SetGroup(const OSD_SingleProtection priv) ;
  //! Sets protection of 'World' <br>
  Standard_EXPORT     void SetWorld(const OSD_SingleProtection priv) ;
  //! Gets protection of 'System' <br>
  Standard_EXPORT     OSD_SingleProtection System() const;
  //! Gets protection of 'User' <br>
  Standard_EXPORT     OSD_SingleProtection User() const;
  //! Gets protection of 'Group' <br>
  Standard_EXPORT     OSD_SingleProtection Group() const;
  //! Gets protection of 'World' <br>
  Standard_EXPORT     OSD_SingleProtection World() const;
  //! Add a right to a single protection. <br>
//!          ex: aProt = RWD <br>
//!              me.Add(aProt,X)  ->  aProt = RWXD <br>
  Standard_EXPORT     void Add(OSD_SingleProtection& aProt,const OSD_SingleProtection aRight) ;
  //! Subtract a right to a single protection. <br>
//!           ex: aProt = RWD <br>
//!               me.Sub(aProt,RW) ->  aProt = D <br>
//!               But me.Sub(aProt,RWX) is also valid and gives same result. <br>
  Standard_EXPORT     void Sub(OSD_SingleProtection& aProt,const OSD_SingleProtection aRight) ;


friend class OSD_FileNode;
friend class OSD_File;
friend class OSD_Directory;



protected:





private:

  //! Returns System dependent access rights <br>
//!          this is a private method. <br>
  Standard_EXPORT     Standard_Integer Internal() const;


OSD_SingleProtection s;
OSD_SingleProtection u;
OSD_SingleProtection g;
OSD_SingleProtection w;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif