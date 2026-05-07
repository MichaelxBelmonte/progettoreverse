// Function: FUN_01e9acb0
// Address: 01e9acb0
// Size: 2096 bytes
// Class: Unknown

uint64_t FUN_01e9acb0(uint64_t param_1,char param_2)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar6;
  int64_t *local_58;
  char local_50;
  undefined7 uVar7;
  
  FUN_01ccad60();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01e9ad12;
    }
LAB_01e9adfa:
    bVar1 = true;
LAB_01e9ae00:
    uVar5 = FUN_01d827c0();
    uVar6 = (uint64_t)uVar5;
LAB_01e9b4c3:
    if (bVar1) goto LAB_01e9b4cf;
  }
  else {
    if (local_58 == (int64_t *)0x0) goto LAB_01e9adfa;
LAB_01e9ad12:
    FUN_01cae990();
    lVar2 = g_027fdca8;
    if (g_027fdca8 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_58 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      bVar1 = false;
      goto LAB_01e9ae00;
    }
    uVar7 = (undefined7)((uint64_t)arg1 >> 8);
    uVar6 = CONCAT71(uVar7,1);
    if (param_2 == '\0') {
LAB_01e9b4c1:
      bVar1 = false;
      goto LAB_01e9b4c3;
    }
    iVar4 = FUN_01d0a910();
    if (iVar4 == 0) {
      (**(code **)(*local_58 + 0x970))();
      lVar2 = g_027e7c20;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
          lVar2 = g_027e7c20;
        }
      }
      else {
        local_50 = '\0';
      }
      g_027e7c20 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x4d0))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    iVar4 = FUN_01d0a910();
    if (iVar4 == 2) {
      FUN_01d0adc0();
      lVar2 = g_027e7c20;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
          lVar2 = g_027e7c20;
        }
      }
      else {
        local_50 = '\0';
      }
      g_027e7c20 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x4d0))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    iVar4 = FUN_01d0a910();
    if ((iVar4 == 1) && (iVar4 = FUN_01d0aed0(), iVar4 != -1)) {
      FUN_01d0aed0();
      FUN_00d46530();
      lVar2 = g_027e7c20;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
          lVar2 = g_027e7c20;
        }
      }
      else {
        local_50 = '\0';
      }
      g_027e7c20 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x4d0))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    iVar4 = FUN_01d0a910();
    lVar2 = g_027edfd8;
    if (iVar4 != 3) goto LAB_01e9b4c1;
    if (g_027edfd8 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccaae0();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = g_027fdc88;
    if (local_58 == (int64_t *)0x0) {
      if (g_027fdc88 != 0) {
        FUN_00d50b00();
      }
      FUN_01ccaae0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01e9b4c1;
    }
    FUN_01d0b1d0();
    lVar2 = g_027edfd8;
    if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b00();
      lVar2 = g_027edfd8;
    }
    g_027edfd8 = lVar2;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x4d0))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    uVar6 = CONCAT71(uVar7,1);
  }
  FUN_00d50b20();
LAB_01e9b4cf:
  return uVar6 & 0xffffffff;
}

