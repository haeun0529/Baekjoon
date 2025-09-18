#include <stdio.h>
#include <string.h>

struct major {
    char str[50];
    double score;
    char grade[2];
};

int main() {

    struct major m[20];

    // 전공평점 = (학점 x 과목평점) / 학점의 총합
    for(int i=0; i<20; i++) { 
        scanf("%s %lf %s", m[i].str, &m[i].score, m[i].grade);
        getchar();
    }

    double num=0, sum=0;
    for(int i=0; i<20; i++) {
        if(strcmp(m[i].grade, "A+")==0) num += m[i].score * 4.5;
        else if(strcmp(m[i].grade, "A0")==0) num += m[i].score * 4.0;
        else if(strcmp(m[i].grade, "B+")==0) num += m[i].score * 3.5;
        else if(strcmp(m[i].grade, "B0")==0) num += m[i].score * 3.0;
        else if(strcmp(m[i].grade, "C+")==0) num += m[i].score * 2.5;
        else if(strcmp(m[i].grade, "C0")==0) num += m[i].score * 2.0;
        else if(strcmp(m[i].grade, "D+")==0) num += m[i].score * 1.5;
        else if(strcmp(m[i].grade, "D0")==0) num += m[i].score * 1.0;
        else if(strcmp(m[i].grade, "F")==0) num += m[i].score * 0;
        else if(strcmp(m[i].grade, "P")==0) num += 0.0;

        if(strcmp(m[i].grade, "P") == 0) sum += 0;
        else sum += m[i].score;
    }
    printf("%lf", num/sum);

    return 0;
}

/*
ObjectOrientedProgramming1 3.0 A+
IntroductiontoComputerEngineering 3.0 A+
ObjectOrientedProgramming2 3.0 A0
CreativeComputerEngineeringDesign 3.0 A+
AssemblyLanguage 3.0 A+
InternetProgramming 3.0 B0
ApplicationProgramminginJava 3.0 A0
SystemProgramming 3.0 B0
OperatingSystem 3.0 B0
WirelessCommunicationsandNetworking 3.0 C+
LogicCircuits 3.0 B0
DataStructure 4.0 A+
MicroprocessorApplication 3.0 B+
EmbeddedSoftware 3.0 C0
ComputerSecurity 3.0 D+
Database 3.0 C+
Algorithm 3.0 B0
CapstoneDesigninCSE 3.0 B+
CompilerDesign 3.0 D0
ProblemSolving 4.0 P
*/