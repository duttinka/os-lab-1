#pragma once

// ��� ������������ ������
#define PIPE_NAME L"\\\\.\\pipe\\lab5_pipe"

// ��������� ��� ������ � �����
struct employee {
  int num;  // ����������������� ����� ����������
  char name[10];  // ��� ����������
  double hours;   // ���������� ������������ �����
};

// ��������� ��� ������� �� ������� � �������
struct Request {
  enum class Type { READ, MODIFY, RELEASE, EXIT } type;
  int employee_id;
  employee record;
};