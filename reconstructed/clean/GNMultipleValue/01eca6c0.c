// Function: FUN_01eca6c0
// Address: 01eca6c0
// Size: 735 bytes
// Class: GNMultipleValue

uint64_t FUN_01eca6c0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar6;
  int64_t *local_40;
  char local_38;
  undefined7 uVar7;
  
  FUN_01cae990();
  lVar1 = g_027fe668;
  if (g_027fe668 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    uVar4 = FUN_01ec81d0();
    uVar6 = (uint64_t)uVar4;
    goto LAB_01eca98d;
  }
  (**(code **)(*this_ptr + 0x520))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01eca7d5;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_01eca7d5:
    FUN_01ccad60();
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) goto LAB_01eca935;
      FUN_00d50b00();
LAB_01eca827:
      lVar1 = g_027e7c20;
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      FUN_01ccaae0();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      uVar7 = (undefined7)((uint64_t)arg1 >> 8);
      uVar6 = CONCAT71(uVar7,local_40 != (int64_t *)0x0);
      if (local_40 != (int64_t *)0x0) {
        if (param_2 != '\0') {
          iVar5 = FUN_01d70da0();
          lVar1 = *(int64_t *)(local_40[2] + (int64_t)iVar5 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          lVar2 = g_027e7c20;
          if (g_027e7c20 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*this_ptr + 0x4d0))();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          uVar6 = CONCAT71(uVar7,1);
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    else {
      if (local_40 != (int64_t *)0x0) goto LAB_01eca827;
LAB_01eca935:
      uVar6 = 0;
    }
    FUN_00d50b20();
    goto LAB_01eca98d;
  }
  uVar6 = 0;
LAB_01eca98d:
  return uVar6 & 0xffffffff;
}

