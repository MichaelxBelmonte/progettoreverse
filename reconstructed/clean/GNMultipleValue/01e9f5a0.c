// Function: FUN_01e9f5a0
// Address: 01e9f5a0
// Size: 614 bytes
// Class: GNMultipleValue

void FUN_01e9f5a0(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint8_t uVar3;
  int64_t *this_ptr;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t extraout_XMM0_Dc;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_38;
  if ((((local_30 == '\0') && (local_38 != (int64_t *)0x0)) && (FUN_00d50b00(), local_30 != '\0'))
     && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_01e3f820();
  uVar5 = extraout_XMM0_Dc;
  uVar3 = (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*plVar1 + 0x3f0))(uVar4,0x11,0,uVar3,uVar4,uVar5);
  uVar5 = FUN_01e3f820();
  (**(code **)(*this_ptr + 0x960))();
  plVar2 = local_38;
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*this_ptr + 0x9e0))();
  local_40 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_40 = '\x01';
  local_48 = local_68;
  uVar4 = *(void*)((int64_t)this_ptr + 0x174);
  (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*plVar1 + 0x400))(uVar5,param_2,&local_48,uVar4);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

