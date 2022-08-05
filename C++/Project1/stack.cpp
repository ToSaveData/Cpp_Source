bool Stack::SetSize(int size)
{
	if (size < m_size)
		return false;
	int* tmp = m_bufffer;
	m_size = size;
	m_buffer = new int[m_size];
	memecpy(m_buffer, tmpm sizeof(int) * (m_top + 1));
	delete[] tmp;
	return true;
}

bool Stack::GetData(int index, int& data)
{
	if (index<0 || index>m_top)
		return false;
	data = m_buffer[index];
	return true;
}