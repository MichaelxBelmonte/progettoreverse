// Function: FUN_00dd4a40
// Address: 00dd4a40
// Size: 551 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_00dd4a40(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t arg1;
  void*this_ptr;
  bool bVar3;
  int64_t local_90;
  char local_88;
  int64_t *local_40;
  char local_38;
  
  FUN_00da5ad0();
  if ((char)local_40[3] == '\0') {
    bVar3 = false;
  }
  else {
    FUN_00d3a520();
    bVar3 = local_90 == 0;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar3) {
    FUN_00d3a4d0();
    (**(code **)(**(int64_t **)(arg1 + 0x10) + 0x368))();
    FUN_00d3aaa0();
    FUN_00d3a4d0();
    FUN_00d3aa50();
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    uVar1 = FUN_00d3a4c0();
    uVar2 = FUN_00d3a550();
    FUN_00d3af80(uVar2,uVar1,g_025908a0);
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d3a4b0();
    (**(code **)(*local_40 + 0x368))();
    FUN_00d3aaa0();
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  return this_ptr;
}

