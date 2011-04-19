// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AlienImage_SGIRGBAlienImage_HeaderFile
#define _AlienImage_SGIRGBAlienImage_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AlienImage_SGIRGBAlienImage_HeaderFile
#include <Handle_AlienImage_SGIRGBAlienImage.hxx>
#endif

#ifndef _Handle_AlienImage_SGIRGBAlienData_HeaderFile
#include <Handle_AlienImage_SGIRGBAlienData.hxx>
#endif
#ifndef _AlienImage_AlienUserImage_HeaderFile
#include <AlienImage_AlienUserImage.hxx>
#endif
#ifndef _Handle_Image_Image_HeaderFile
#include <Handle_Image_Image.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class AlienImage_SGIRGBAlienData;
class TCollection_AsciiString;
class Image_Image;
class OSD_File;


//! Defines an SGI .rgb Alien image, i.e. an image using <br>
//! the image format for Silicon Graphics workstations. <br>
class AlienImage_SGIRGBAlienImage : public AlienImage_AlienUserImage {

public:

  //! Constructs an empty SGI .rgb Alien image. <br>
  Standard_EXPORT   AlienImage_SGIRGBAlienImage();
  //! Frees memory allocated by SGIRGBAlienImage <br>
  Standard_EXPORT     void Clear() ;
  //! Set Image name . <br>
  Standard_EXPORT     void SetName(const TCollection_AsciiString& aName) ;
  //! Reads the  Image name . <br>
  Standard_EXPORT    const TCollection_AsciiString& Name() const;
  //! Converts a SGIRGBAlienImage object to a Image object. <br>
  Standard_EXPORT     Handle_Image_Image ToImage() const;
  //! Converts a Image object to a SGIRGBAlienImage object. <br>
  Standard_EXPORT     void FromImage(const Handle(Image_Image)& anImage) ;
  //! Reads content of a SGIRGBAlienImage object from a file <br>
//!          Returns True if file is a XWD file . <br>
  Standard_EXPORT     Standard_Boolean Read(OSD_File& afile) ;
  //! Writes content of a SGIRGBAlienImage object to a file <br>
  Standard_EXPORT     Standard_Boolean Write(OSD_File& afile) const;




  DEFINE_STANDARD_RTTI(AlienImage_SGIRGBAlienImage)

protected:




private: 


Handle_AlienImage_SGIRGBAlienData myData;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif