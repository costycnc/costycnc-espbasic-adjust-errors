void PrintAndWebOut(String itemToBePrinted);
String evaluate(String expr);
void SetMeThatVar(String VariableNameToFind, String NewContents);
String VarialbeLookup(String VariableNameToFind);
String LoadDataFromFile(String fileNameForSave);
void SaveDataToFile(String fileNameForSave, String DataToSave);
void LoadBasicProgramFromFlash(String fileNameForSave);
String GetRidOfurlCharacters(String urlChars);
String getValueforPrograming(String data, char separator, int index);
void SaveBasicProgramToFlash(String fileNameForSave);
String RunningProgramGui();
byte ConnectToTheWIFI(String NetworkName, String NetworkPassword);
void CreateAP(String NetworkName, String NetworkPassword);
void CheckFOrWebVarInput();
byte CheckFOrWebGOTO();
int RunBasicTillWait();
void ExicuteTheCurrentLine();
String GetMeThatVar(String VariableNameToFind);
String DoMathForMe(String cc, String f, String dd );
void PrintAllMyVars();
void SaveBasicProgramToFlash(String fileNameForSave);
String FetchWebUrl(String URLtoGet);
