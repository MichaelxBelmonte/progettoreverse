// Function: FUN_00adb250
// Address: 00adb250
// Size: 785 bytes
// Class: TSocket
// String references:
//   "<Host: "
//   " Port: "
//   "<Path: "

uint64_t FUN_00adb250(void)

{
  void**this;
  int iVar1;
  int64_t arg1;
  uint64_t this_ptr;
  byte local_48;
  
  this = &PTR__ostream_02517318;
  std::ios_base::init(&PTR__ostream_02517318);
  std::streambuf::streambuf((streambuf *)this);
  if ((*(byte *)(arg1 + 0x28) & 1) == 0) {
    if (*(byte *)(arg1 + 0x28) >> 1 == 0) {
LAB_00adb364:
      if ((*(byte *)(arg1 + 8) & 1) == 0) {
        if (*(byte *)(arg1 + 8) >> 1 != 0) {
LAB_00adb3ae:
          if (*(int *)(arg1 + 0x20) != 0) {
            FUN_009ad920();
            FUN_009ad920();
            iVar1 = 7;
            FUN_009ad920();
            std::ostream::operator<<((ostream *)this,iVar1);
            FUN_009ad920();
            goto LAB_00adb4de;
          }
        }
      }
      else if (*(int64_t *)(arg1 + 0x10) != 0) goto LAB_00adb3ae;
      FUN_009ad920();
      FUN_00ade570();
      FUN_009ad920();
      if ((local_48 & 1) != 0) {
        operator_delete(this);
      }
      iVar1 = 7;
      FUN_009ad920();
      FUN_00ade570();
      if ((local_48 & 1) != 0) {
        operator_delete(this);
      }
      std::ostream::operator<<((ostream *)this,iVar1);
      FUN_009ad920();
      goto LAB_00adb4de;
    }
  }
  else if (*(int64_t *)(arg1 + 0x30) == 0) goto LAB_00adb364;
  FUN_009ad920();
  FUN_009ad920();
  FUN_009ad920();
LAB_00adb4de:
  FUN_00892260();
  std::streambuf::~streambuf((streambuf *)this);
  std::ostream::~ostream((ostream *)this);
  std::ios::~ios((ios *)this);
  return this_ptr;
}

