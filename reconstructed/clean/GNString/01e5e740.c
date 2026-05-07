// Function: FUN_01e5e740
// Address: 01e5e740
// Size: 821 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e5e740(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  char cVar4;
  int64_t *this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t in_stack_ffffffffffffffc0;
  char local_38;
  
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d8b200();
  if (in_stack_ffffffffffffffc0 == 0) {
    bVar3 = false;
  }
  else if (this_ptr[3] == 0) {
    bVar3 = false;
  }
  else {
    FUN_00d50b00();
    bVar3 = true;
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
    FUN_00d50b20();
  }
  if (bVar3) {
    lVar1 = this_ptr[3];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01d88f70();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  plVar2 = (int64_t *)this_ptr[4];
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x558))();
  }
  FUN_01e58640();
  lVar1 = local_70;
  FUN_00d50b00();
  cVar4 = FUN_00d23d70();
  FUN_00d50b20();
  if ((local_68 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_01e58640();
    FUN_00d50b00();
    FUN_00d23f50();
    FUN_00d50b20();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01f27fe0();
  FUN_00d50b00();
  FUN_01f30670();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  (*PTR__objc_msgSend_024a9998)();
  (*PTR__objc_release_024a99a0)();
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x550))();
  }
  FUN_01f27fe0();
  (**(code **)(*this_ptr + 0x4b8))();
  FUN_00d403d0();
  lVar1 = g_027f3de8;
  if (g_027f3de8 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_80 = 0;
  local_78 = '\0';
  FUN_00d40470(&local_80,&stack0xffffffffffffffb0,1,3);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

