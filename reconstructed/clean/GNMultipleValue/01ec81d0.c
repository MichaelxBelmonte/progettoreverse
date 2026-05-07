// Function: FUN_01ec81d0
// Address: 01ec81d0
// Size: 1517 bytes
// Class: GNMultipleValue

uint64_t FUN_01ec81d0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  uint32_t uVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  uint64_t uVar7;
  int64_t *plVar8;
  bool bVar9;
  int64_t local_118;
  char local_110;
  int64_t *local_40;
  char local_38;
  
  FUN_01ccad60();
  if (local_40 == (int64_t *)0x0) {
    plVar8 = (int64_t *)0x0;
    if (local_38 != '\0') {
      plVar8 = (int64_t *)0x0;
    }
  }
  else {
    plVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_01cae990();
    lVar6 = g_027fe668;
    if (g_027fe668 != 0) {
      FUN_00d50b00();
    }
    uVar3 = (**(code **)(*local_40 + 0x50))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar3 != '\0') {
      uVar7 = CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
      if (param_2 != '\0') {
        FUN_01e42030();
        FUN_01d8b200();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_110 != '\0') && (local_118 != 0)) {
          FUN_00d50b20();
        }
        FUN_01e42030();
        FUN_01d88f70();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (int64_t *)0x0) {
          FUN_01e42030();
          FUN_01d8c820();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        lVar6 = g_027edfd0;
        if (g_027edfd0 != 0) {
          FUN_00d50b00();
        }
        FUN_01ccaae0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        lVar6 = g_027edfe0;
        if (local_40 == (int64_t *)0x0) {
          if (g_027edfe0 != 0) {
            FUN_00d50b00();
          }
          FUN_01ccaae0();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          FUN_01d70da0();
          FUN_00d46530();
          lVar6 = g_027e7c20;
          if (g_027e7c20 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*this_ptr + 0x4d0))();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          iVar4 = FUN_01d70da0();
          if ((iVar4 == -1) ||
             (((cVar2 = (**(code **)(*this_ptr + 0x508))(), cVar2 != '\0' &&
               (bVar9 = iVar4 == 0, iVar4 = iVar4 + -1, bVar9)) ||
              (lVar6 = *(int64_t *)(*(int64_t *)(this_ptr[9] + 0x10) + (int64_t)iVar4 * 8),
              lVar6 == 0)))) {
            lVar6 = 0;
          }
          else {
            FUN_00d50b00();
          }
          lVar1 = g_027e7c20;
          if (g_027e7c20 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*this_ptr + 0x4d0))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
        }
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      goto LAB_01ec8791;
    }
  }
  uVar5 = FUN_01d827c0();
  uVar7 = (uint64_t)uVar5;
LAB_01ec8791:
  if ((local_40 != (int64_t *)0x0) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return uVar7;
}

