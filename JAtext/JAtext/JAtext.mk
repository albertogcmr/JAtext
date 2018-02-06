##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=JAtext
ConfigurationName      :=Release
WorkspacePath          :=D:/Programacion/C/JAtext/JAtext
ProjectPath            :=D:/Programacion/C/JAtext/JAtext/JAtext
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Jesus
Date                   :=07/02/2018
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=gcc
SharedObjectLinkerName :=gcc -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
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
RcCompilerName         :=windres
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
AR       := ar rcus
CXX      := gcc
CC       := gcc
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Source_main.c$(ObjectSuffix) $(IntermediateDirectory)/Source_JAtext_Main.c$(ObjectSuffix) $(IntermediateDirectory)/Source_appdata.c$(ObjectSuffix) $(IntermediateDirectory)/Source_JAtext_operations.c$(ObjectSuffix) $(IntermediateDirectory)/Source_JAtext_menu.c$(ObjectSuffix) 



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
	$(CC) $(SourceSwitch) "D:/Programacion/C/JAtext/JAtext/JAtext/Source/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Source_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Source_main.c$(DependSuffix): Source/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Source_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Source_main.c$(DependSuffix) -MM Source/main.c

$(IntermediateDirectory)/Source_main.c$(PreprocessSuffix): Source/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Source_main.c$(PreprocessSuffix) Source/main.c

$(IntermediateDirectory)/Source_JAtext_Main.c$(ObjectSuffix): Source/JAtext_Main.c $(IntermediateDirectory)/Source_JAtext_Main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "D:/Programacion/C/JAtext/JAtext/JAtext/Source/JAtext_Main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Source_JAtext_Main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Source_JAtext_Main.c$(DependSuffix): Source/JAtext_Main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Source_JAtext_Main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Source_JAtext_Main.c$(DependSuffix) -MM Source/JAtext_Main.c

$(IntermediateDirectory)/Source_JAtext_Main.c$(PreprocessSuffix): Source/JAtext_Main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Source_JAtext_Main.c$(PreprocessSuffix) Source/JAtext_Main.c

$(IntermediateDirectory)/Source_appdata.c$(ObjectSuffix): Source/appdata.c $(IntermediateDirectory)/Source_appdata.c$(DependSuffix)
	$(CC) $(SourceSwitch) "D:/Programacion/C/JAtext/JAtext/JAtext/Source/appdata.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Source_appdata.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Source_appdata.c$(DependSuffix): Source/appdata.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Source_appdata.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Source_appdata.c$(DependSuffix) -MM Source/appdata.c

$(IntermediateDirectory)/Source_appdata.c$(PreprocessSuffix): Source/appdata.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Source_appdata.c$(PreprocessSuffix) Source/appdata.c

$(IntermediateDirectory)/Source_JAtext_operations.c$(ObjectSuffix): Source/JAtext_operations.c $(IntermediateDirectory)/Source_JAtext_operations.c$(DependSuffix)
	$(CC) $(SourceSwitch) "D:/Programacion/C/JAtext/JAtext/JAtext/Source/JAtext_operations.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Source_JAtext_operations.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Source_JAtext_operations.c$(DependSuffix): Source/JAtext_operations.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Source_JAtext_operations.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Source_JAtext_operations.c$(DependSuffix) -MM Source/JAtext_operations.c

$(IntermediateDirectory)/Source_JAtext_operations.c$(PreprocessSuffix): Source/JAtext_operations.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Source_JAtext_operations.c$(PreprocessSuffix) Source/JAtext_operations.c

$(IntermediateDirectory)/Source_JAtext_menu.c$(ObjectSuffix): Source/JAtext_menu.c $(IntermediateDirectory)/Source_JAtext_menu.c$(DependSuffix)
	$(CC) $(SourceSwitch) "D:/Programacion/C/JAtext/JAtext/JAtext/Source/JAtext_menu.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Source_JAtext_menu.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Source_JAtext_menu.c$(DependSuffix): Source/JAtext_menu.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Source_JAtext_menu.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Source_JAtext_menu.c$(DependSuffix) -MM Source/JAtext_menu.c

$(IntermediateDirectory)/Source_JAtext_menu.c$(PreprocessSuffix): Source/JAtext_menu.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Source_JAtext_menu.c$(PreprocessSuffix) Source/JAtext_menu.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


