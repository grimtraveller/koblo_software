// Copyright 2004, 2005,2006,2007,2008,2009 Koblo http://koblo.com
//
// This file is part of the Koblo Stools.
//
// the Koblo Stools is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// the Koblo Stools is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with the Koblo Stools. If not, see <http://www.gnu.org/licenses/>.

class CMemAllocator : public virtual IMemAllocator
{
public:
	CMemAllocator(tint lAlignment);
	virtual ~CMemAllocator();

	// IMemAllocator overrides
	virtual void Destroy();
	virtual void* Alloc(tint Bytes);
	virtual void Free(void* pData);

protected:
	long mlAlignment;

	struct SMemHeader {
		// Pointer originally returned by the allocator we use
		void* pOrgPointer;
	};
};

