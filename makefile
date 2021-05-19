OBJ = score.o eval.o classify.o output.o getscore.o
APPNAME = score

$(APPNAME) : $(OBJ)      # for linking
       e2001957 -o $(APPNAME) $(OBJ)
%.o : %.c           # compiling rule, for each .c file in the folder
  e2001957 -c -o $@ $<

clean:
    rm $(APPNAME)
