// Function: FUN_01d086f0
// Address: 01d086f0
// Size: 688 bytes
// Class: GNMultipleValue

void FUN_01d086f0(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint8_t uVar4;
  int64_t *this_ptr;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Dc;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  cVar3 = (**(code **)(*this_ptr + 0xac8))();
  if (cVar3 != '\0') {
    (**(code **)(*this_ptr + 0x878))();
  }
  (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_38;
  if ((((local_30 == '\0') && (local_38 != (int64_t *)0x0)) && (FUN_00d50b00(), local_30 != '\0'))
     && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = FUN_01e07410();
  if (cVar3 != '\0') {
    uVar5 = FUN_01e3f820();
    uVar6 = extraout_XMM0_Dc;
    cVar3 = (**(code **)(*this_ptr + 0x9a0))();
    if (cVar3 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_01e05890();
    }
    (**(code **)(*plVar1 + 0x3f0))(uVar5,0x18,0,uVar4,uVar5,uVar6);
  }
  cVar3 = (**(code **)(*this_ptr + 0xac8))();
  if (cVar3 == '\0') {
    uVar6 = FUN_01e3f820();
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
    uVar5 = *(void*)((int64_t)this_ptr + 0x174);
    (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*plVar1 + 0x400))(uVar6,param_2,&local_48,uVar5);
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
  }
  else if (plVar1 == (int64_t *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}

