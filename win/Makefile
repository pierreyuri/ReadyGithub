GSRC = ../code/GProject/src
GMGR = $(GSRC)/manager
GBIN = bin
GBUILD = build
GTARGET = $(GBIN)/GProject.exe

GINCS = \
    -I$(GSRC)/include \
    
GLIBS = \

GOBJS = \
    $(patsubst $(GSRC)/%.c, $(GBUILD)/%.o, $(wildcard $(GSRC)/*.c)) \
    $(patsubst $(GMGR)/%.c, $(GBUILD)/%.o, $(wildcard $(GMGR)/*.c)) \

GCFLAGS = \
    -std=c11 \

all: clean compile run
    
compile: $(GOBJS)
	@if not exist "$(GBIN)" @mkdir $(GBIN)
	gcc -o $(GTARGET) $(GOBJS) $(GLIBS) 
$(GBUILD)/%.o: $(GSRC)/%.c
	@if not exist "$(GBUILD)" @mkdir $(GBUILD)
	gcc $(GCFLAGS) -c $< -o $@ $(GINCS)
$(GBUILD)/%.o: $(GMGR)/%.c
	@if not exist "$(GBUILD)" @mkdir $(GBUILD)
	gcc $(GCFLAGS) -c $< -o $@ $(GINCS)
run:
	@echo.
	@bin\GProject.exe
	@echo.
clean:
	del /q $(GBUILD)\*.o $(GBIN)\*.exe
