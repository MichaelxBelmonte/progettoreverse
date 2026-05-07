// Function: FUN_009d4418
// Address: 009d4418
// Size: 614 bytes
// Class: Unknown
// String references:
//   "Path = \"%s\""
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libpaceutil/MemoryMappedFi...
//   "void pace::MemoryMappedFile::setFileSize(const boost::uintmax_t)"
//   "Error = %d, Path = \"%s\""

void FUN_009d4418(char *param_1)

{
  int iVar1;
  int iVar2;
  off_t oVar3;
  int64_t this_ptr;
  
  if ((*(byte *)(this_ptr + 0x24) & 0x10) == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    param_1 = "void pace::MemoryMappedFile::setFileSize(const boost::uintmax_t)";
    FUN_00928ab0("void pace::MemoryMappedFile::setFileSize(const boost::uintmax_t)",0xfb);
    FUN_009cbbdb();
  }
  oVar3 = 0x1c0;
  iVar1 = _open(param_1,0x1c0);
  iVar2 = (int)param_1;
  if (iVar1 == -1) {
    FUN_00925fd0();
    oVar3 = FUN_00926010();
    ___error();
    FUN_00983230();
    FUN_00983230();
    iVar2 = 0x1ff2777;
    FUN_00928ab0("void pace::MemoryMappedFile::setFileSize(const boost::uintmax_t)",0x11e);
    FUN_009cbbdb();
  }
  iVar1 = _ftruncate(iVar2,oVar3);
  if (iVar1 == -1) {
    _close(iVar2);
    FUN_00925fd0();
    FUN_00926010();
    ___error();
    FUN_00983230();
    FUN_00983230();
    iVar2 = 0x1ff2777;
    FUN_00928ab0("void pace::MemoryMappedFile::setFileSize(const boost::uintmax_t)",0x127);
    FUN_009cbbdb();
  }
  _close(iVar2);
  return;
}

