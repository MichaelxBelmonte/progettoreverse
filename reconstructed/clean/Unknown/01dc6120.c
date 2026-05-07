// Function: FUN_01dc6120
// Address: 01dc6120
// Size: 1313 bytes
// Class: Unknown

uint64_t FUN_01dc6120(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int64_t this_ptr;
  undefined7 uVar7;
  uint64_t uVar6;
  bool bVar8;
  int64_t local_d8;
  char local_d0;
  int64_t *local_40;
  char local_38;
  
  FUN_01dc0d60();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01cae990();
  lVar1 = g_027f2788;
  if (g_027f2788 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar7 = (undefined7)((uint64_t)local_40 >> 8);
  if (cVar3 == '\0') {
    FUN_01cae990();
    lVar1 = g_027f2798;
    if (g_027f2798 != 0) {
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
      FUN_01cae990();
      lVar1 = g_027f2768;
      if (g_027f2768 != 0) {
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
        FUN_01cae990();
        lVar1 = g_027f2778;
        if (g_027f2778 != 0) {
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
          uVar5 = FUN_01e47f50();
          uVar6 = (uint64_t)uVar5;
        }
        else {
          if (*(char *)(this_ptr + 0x148) == '\0') goto LAB_01dc658c;
          bVar8 = *(int64_t *)(this_ptr + 0x140) != 0;
          uVar6 = CONCAT71(uVar7,bVar8);
          if ((bVar8) && (param_2 != '\0')) {
            cVar3 = FUN_01db9d40();
            if (cVar3 == '\0') {
              FUN_01db9b10();
              uVar6 = CONCAT71(uVar7,1);
              FUN_01db9d50();
            }
            else {
              iVar4 = FUN_01db9f80();
              uVar6 = CONCAT71(uVar7,1);
              if (iVar4 == 1) {
                FUN_01db9b10();
              }
              else {
                FUN_01db9d50();
              }
            }
          }
        }
      }
      else if (*(char *)(this_ptr + 0x148) == '\0') {
LAB_01dc658c:
        uVar6 = 0;
      }
      else {
        bVar8 = *(int64_t *)(this_ptr + 0x140) != 0;
        uVar6 = CONCAT71(uVar7,bVar8);
        if ((bVar8) && (param_2 != '\0')) {
          cVar3 = FUN_01db9d40();
          if (cVar3 == '\0') {
            FUN_01db9b10();
            uVar6 = CONCAT71(uVar7,1);
            FUN_01db9d50();
          }
          else {
            iVar4 = FUN_01db9f80();
            uVar6 = CONCAT71(uVar7,1);
            if (iVar4 == 0) {
              FUN_01db9b10();
            }
            else {
              FUN_01db9d50();
            }
          }
        }
      }
    }
    else {
      uVar6 = CONCAT71(uVar7,local_40 != (int64_t *)0x0);
      if ((local_40 != (int64_t *)0x0) && (param_2 != '\0')) {
        FUN_01dcd300();
        FUN_01caeae0();
        iVar4 = FUN_01d654a0();
        lVar1 = *(int64_t *)(local_40[2] + (int64_t)iVar4 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        lVar2 = *(int64_t *)(this_ptr + 0x140);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_01dcc980();
        FUN_01dcca80();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar6 = CONCAT71(uVar7,1);
        goto LAB_01dc6624;
      }
    }
    if (local_40 == (int64_t *)0x0) goto LAB_01dc662c;
  }
  else {
    if (local_40 == (int64_t *)0x0) {
      uVar6 = 0;
      goto LAB_01dc662c;
    }
    lVar1 = *(int64_t *)(this_ptr + 0x140);
    uVar6 = CONCAT71(uVar7,lVar1 != 0);
    if ((lVar1 != 0) && (param_2 != '\0')) {
      FUN_00d50b00();
      FUN_01dcd050();
      uVar6 = CONCAT71(uVar7,1);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
LAB_01dc6624:
  FUN_00d50b20();
LAB_01dc662c:
  return uVar6 & 0xffffffff;
}

