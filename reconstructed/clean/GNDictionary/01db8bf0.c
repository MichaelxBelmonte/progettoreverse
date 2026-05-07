// Function: FUN_01db8bf0
// Address: 01db8bf0
// Size: 676 bytes
// Class: GNDictionary

void FUN_01db8bf0(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint8_t uVar4;
  uint32_t uVar5;
  int64_t *this_ptr;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Dc;
  int64_t local_78;
  char local_70;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  cVar3 = FUN_01e420b0();
  if (cVar3 != '\0') {
    (**(code **)(*this_ptr + 0x878))();
  }
  (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar6 = FUN_01e3f820();
  uVar7 = extraout_XMM0_Dc;
  uVar5 = (**(code **)(*this_ptr + 0x920))();
  uVar4 = (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*plVar1 + 0x3f0))(uVar6,2,uVar5,uVar4,uVar6,uVar7);
  uVar7 = FUN_01e3f820();
  (**(code **)(*this_ptr + 0x960))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*this_ptr + 0x9e0))();
  local_48 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_78;
  (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*plVar1 + 0x400))(uVar7,param_2,&local_50,0);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

