#ifndef  UDCOUNTERM_H_INCLUDED   // Count.h�� �ߺ� include ���� �ʾҴ��� �˻���
#define  UDCOUNTERM_H_INCLUDED   // Count.h�� ó�� include �� �� ���ǵ�

class  UDCounterM {            // Ŭ���� Counter�� ���� ����
    const int  maxValue;     // ������� �ִ밪
    int  value;              // private ������ ���  
public:
    UDCounterM(int mVal) : maxValue(mVal+1), value(0) { }   // ������
    void  reset()             // ������� ���� 0���� ����
    {  value = 0;  }
    void  countUp() {           // ������� ���� 1 ������Ŵ
        value = (value + 1) % maxValue;
    }
	void  countDown() {
		value = (value + maxValue - 1) % maxValue;
	}
    int  getValue() const     // ������� ���� ���� ��ȯ��
    {  return value;  }
};

#endif  // UDCOUNTERM_H_INCLUDED
