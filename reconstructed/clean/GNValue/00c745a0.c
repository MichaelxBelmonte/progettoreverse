// Function: FUN_00c745a0
// Address: 00c745a0
// Size: 512 bytes
// Class: GNValue

uint64_t FUN_00c745a0(uint64_t param_1)

{
  bool bVar1;
  uint8_t uVar2;
  uint64_t uVar3;
  uint64_t unaff_RBX;
  undefined7 uVar5;
  uint64_t uVar4;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  uint32_t local_34;
  
  FUN_00ccb910();
  plVar6 = local_48;
  if (local_48 == (int64_t *)0x0) {
    uVar5 = (undefined7)((uint64_t)unaff_RBX >> 8);
    bVar1 = true;
    plVar6 = (int64_t *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      uVar5 = 0;
      if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_00c7460b;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    bVar1 = false;
    uVar5 = 0;
  }
LAB_00c7460b:
  if (plVar6 == (int64_t *)0x0) {
    uVar4 = 0;
    goto LAB_00c74783;
  }
  uVar3 = FUN_00daa700();
  plVar7 = local_48;
  if (local_48 == (int64_t *)0x0) {
    local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
    plVar7 = (int64_t *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_34 = 0;
      if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_00c74689;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    local_34 = 0;
  }
LAB_00c74689:
  if (plVar7 == (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x368))();
    if ((local_a0 == '\0') || (local_a8 == 0)) {
      uVar4 = 0;
    }
    else {
      FUN_00d50b20();
      uVar4 = 0;
    }
  }
  else {
    local_50 = '\0';
    local_58 = plVar7;
    uVar2 = (**(code **)(*this_ptr + 0x618))(param_1,&local_58);
    *(void*)(this_ptr + 0xd) = uVar2;
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar6 + 0x368))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    uVar4 = CONCAT71(uVar5,(char)this_ptr[0xd] != '\0');
    if ((char)local_34 == '\0') {
      FUN_00d50b20();
    }
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
LAB_00c74783:
  return uVar4 & 0xffffffff;
}

