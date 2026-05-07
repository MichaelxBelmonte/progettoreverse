// Function: FUN_01e54290
// Address: 01e54290
// Size: 777 bytes
// Class: Unknown

uint64_t FUN_01e54290(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  uint32_t uVar4;
  uint uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t this_ptr;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_40;
  char local_38;
  
  if (param_2 == 0) {
    if ((*(int64_t *)(this_ptr + 0x18) != 0) && (cVar2 = FUN_01e5c800(), cVar2 != '\0')) {
      FUN_01cae990();
      lVar1 = g_027f3d60;
      if (g_027f3d60 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*local_40 + 0x50))();
      cVar3 = '\x01';
      lVar6 = lVar1;
      if (cVar2 == '\0') {
        FUN_01cae990();
        lVar6 = g_027f0d08;
        if (g_027f0d08 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*local_b0 + 0x50))();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar7 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
      if (cVar3 != '\0') goto LAB_01e54585;
    }
LAB_01e54553:
    uVar5 = FUN_01d827c0(param_1,param_2 & 0xff);
    uVar7 = (uint64_t)uVar5;
  }
  else {
    FUN_01cae990();
    lVar1 = g_028000d0;
    if (g_028000d0 != 0) {
      FUN_00d50b00();
    }
    uVar4 = (**(code **)(*local_40 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar4 == '\0') {
      FUN_01cae990();
      lVar1 = g_027f3d60;
      if (g_027f3d60 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*local_40 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar4 == '\0') {
        FUN_01cae990();
        lVar1 = g_027f0d08;
        if (g_027f0d08 != 0) {
          FUN_00d50b00();
        }
        uVar4 = (**(code **)(*local_40 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)uVar4 == '\0') goto LAB_01e54553;
      }
      FUN_01e54790();
    }
    else {
      if ((*(char *)(this_ptr + 0x40) == '\0') || (*(int64_t *)(this_ptr + 0x18) == 0)) {
        uVar7 = 0;
        goto LAB_01e54585;
      }
      FUN_01e5eda0();
    }
    uVar7 = CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
  }
LAB_01e54585:
  return uVar7 & 0xffffffff;
}

