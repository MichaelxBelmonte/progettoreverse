// Function: FUN_009ca8f2
// Address: 009ca8f2
// Size: 521 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_009ca8f2(char param_1,uint64_t param_2)

{
  void**this;
  void *pvVar1;
  byte *arg1;
  int64_t *this_ptr;
  uint64_t local_60;
  streambuf *local_58;
  uint64_t local_50;
  
  this = &PTR__ostream_02517318;
  std::ios_base::init(&PTR__ostream_02517318);
  std::streambuf::streambuf((streambuf *)this);
  if (param_1 == '\0') {
    (**(code **)(*this_ptr + 0x60))(0,param_2,1);
  }
  if ((char)this_ptr[0x1a] == '\0') {
    FUN_009cb542(0,param_2,1);
  }
  (**(code **)(*this_ptr + 0x68))(0,param_2,1);
  (**(code **)(*this_ptr + 0x70))(0,param_2,0,1);
  pvVar1 = (void *)((int64_t)&MACH_HEADER.magic + 1);
  (**(code **)(*this_ptr + 0x78))(1,param_2,0);
  FUN_00892260();
  if ((*arg1 & 1) != 0) {
    operator_delete(pvVar1);
  }
  *(void*)(arg1 + 0x10) = local_50;
  *(streambuf **)(arg1 + 8) = local_58;
  *(void*)arg1 = local_60;
  std::streambuf::~streambuf(local_58);
  std::ostream::~ostream((ostream *)local_58);
  std::ios::~ios((ios *)local_58);
  return;
}

