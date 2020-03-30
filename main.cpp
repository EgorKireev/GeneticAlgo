#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int dim, D, PopSize;    // ���������� ����������: dim - ���������� ���������, D - ��������� �������, PopSize - ������ ���������
double seconds;         // seconds - ����� ������ ���������

void ReadCSV()
{
    //from csv
    // TODO MAX
}


void WriteCSV()
{
    //to csv
    // TODO MAX
}

vector<int> TaskGeneration(int dimension, int Density)
{
    // ���������� ���� ��������� vector<int> (dim + int TargetWeight)
    // TODO MAX
}

void GeneticAlgo(vector<int> Task)
{
    /*
    ��������� ��������� ����������
    ���� �� i
    TODO VANES
    */
}


void DynamicAlgo(vector<int> Task)
{
    /*
    TODO AZA
    */
}

int main()
{
    ReadCSV();                                              //��������� �������� ������ �� �����
    for (int k = 1; k <= 100; k++)                          //���� ��� ��������� �����
    {
        vector<int> Task = TaskGeneration(dim, D);          //Task - ������� ������
        clock_t start1 = clock();                           //������ ������� ������� ������ ���������
        GeneticAlgo(Task);                                  //���������� ������ ������� ������������� ���������
        clock_t end1 = clock();                             //����� ������� ������� ������ ���������
        seconds = (double)(end1 - start1) / CLOCKS_PER_SEC; //���������� ������� ������ ���������
        WriteCSV();                                         //������ ����������� ������ ��������� � ����
        clock_t start2 = clock();                           //������ ������� ������� ������ ���������
        DynamicAlgo(Task);                                  //���������� ������ ������� ������������� ����������������
        clock_t end2 = clock();                             //����� ������� ������� ������ ���������
        seconds = (double)(end2 - start2) / CLOCKS_PER_SEC; //���������� ������� ������ ���������
        WriteCSV();                                         //������ ����������� ������ ��������� � ����
    };
    return 0;
}
