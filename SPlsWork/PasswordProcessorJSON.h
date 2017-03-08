namespace PasswordProcessorJSON;
        // class declarations
         class File_IO;
         class CrestronTrace;
         class PasswordOperations;
     class File_IO 
    {
        // class delegates

        // class events

        // class functions
        static STRING_FUNCTION ReadFileContents ( STRING sFilePath );
        static FUNCTION WriteFileContents ( STRING sFilePath , STRING payLoad );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class CrestronTrace 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class PasswordOperations 
    {
        // class delegates
        delegate FUNCTION pushToSimplPlus ( );

        // class events

        // class functions
        FUNCTION setDebugFromSimpl ( INTEGER arg );
        INTEGER_FUNCTION getDebugFromSimpl ();
        FUNCTION BuildPasswordDBase ();
        STRING_FUNCTION CreateJSONPayloadForWrite ();
        FUNCTION UpdateFile ();
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        STRING json[];
        STRING CodeArray[][];

        // class properties
        STRING ProjectLocation[];
        STRING FileLastModifiedDate[];
        STRING ProgrammerName[];
        STRING PasswordCount[];
        STRING FileName[];
        DelegateProperty pushToSimplPlus onPasswordDataBaseUpdate;
    };

