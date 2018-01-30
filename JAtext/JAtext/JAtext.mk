##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=JAtext
ConfigurationName      :=Release
WorkspacePath          :=C:/Users/alberto/Documents/Alberto-C/jatext/JAtext
ProjectPath            :=C:/Users/alberto/Documents/Alberto-C/jatext/JAtext/JAtext
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=alberto
Date                   :=29/01/2018
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=./bin/$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="JAtext.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)./Includes 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Source_main.c$(ObjectSuffix) $(IntermediateDirectory)/Source_JAtext_menu.c$(ObjectSuffix) $(IntermediateDirectory)/Source_appdata.c$(ObjectSuffix) $(IntermediateDirectory)/Source_JAtext_Main.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Source_main.c$(ObjectSuffix): Source/main.c $(IntermediateDirectory)/Source_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/alberto/Documents/Alberto-C/jatext/JAtext/JAtext/Source/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Source_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Source_main.c$(DependSuffix): Source/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Source_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Source_main.c$(DependSuffix) -MM Source/main.c

$(IntermediateDirectory)/Source_main.c$(PreprocessSuffix): Source/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Source_main.c$(PreprocessSuffix) Source/main.c

$(IntermediateDirectory)/Source_JAtext_menu.c$(ObjectSuffix): Source/JAtext_menu.c $(IntermediateDirectory)/Source_JAtext_menu.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/alberto/Documents/Alberto-C/jatext/JAtext/JAtext/Source/JAtext_menu.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Source_JAtext_menu.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Source_JAtext_menu.c$(DependSuffix): Source/JAtext_menu.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Source_JAtext_menu.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Source_JAtext_menu.c$(DependSuffix) -MM Source/JAtext_menu.c

$(IntermediateDirectory)/Source_JAtext_menu.c$(PreprocessSuffix): Source/JAtext_menu.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Source_JAtext_menu.c$(PreprocessSuffix) Source/JAtext_menu.c

$(IntermediateDirectory)/Source_appdata.c$(ObjectSuffix): Source/appdata.c $(IntermediateDirectory)/Source_appdata.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/alberto/Documents/Alberto-C/jatext/JAtext/JAtext/Source/appdata.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Source_appdata.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Source_appdata.c$(DependSuffix): Source/appdata.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Source_appdata.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Source_appdata.c$(DependSuffix) -MM Source/appdata.c

$(IntermediateDirectory)/Source_appdata.c$(PreprocessSuffix): Source/appdata.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Source_appdata.c$(PreprocessSuffix) Source/appdata.c

$(IntermediateDirectory)/Source_JAtext_Main.c$(ObjectSuffix): Source/JAtext_Main.c $(IntermediateDirectory)/Source_JAtext_Main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/alberto/Documents/Alberto-C/jatext/JAtext/JAtext/Source/JAtext_Main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Source_JAtext_Main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Source_JAtext_Main.c$(DependSuffix): Source/JAtext_Main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Source_JAtext_Main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Source_JAtext_Main.c$(DependSuffix) -MM Source/JAtext_Main.c

$(IntermediateDirectory)/Source_JAtext_Main.c$(PreprocessSuffix): Source/JAtext_Main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Source_JAtext_Main.c$(PreprocessSuffix) Source/JAtext_Main.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


