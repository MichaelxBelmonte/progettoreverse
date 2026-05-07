// Function: FUN_00c9f7e0
// Address: 00c9f7e0
// Size: 1260 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

bool FUN_00c9f7e0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar10;
  uint uVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  int64_t *local_60;
  uint8_t local_58;
  int64_t *local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar1 = (int64_t *)*arg1;
  if (plVar1 == this_ptr) {
    return true;
  }
  if ((g_026fdd40 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
    g_026cd0e0 = FUN_00022d20;
    g_026cd0f0 = 0;
    ram_00000000026cd0f8 = 0;
    g_026cd100 = 0;
    g_026cd178 = 0;
    ram_00000000026cd180 = 0;
    g_026cd188 = 0;
    g_026cd18a = 6;
    g_026cd108 = 0;
    ram_00000000026cd110 = 0;
    g_026cd118 = 0;
    ram_00000000026cd120 = 0;
    g_026cd128 = 0;
    ram_00000000026cd130 = 0;
    g_026cd138 = 0;
    ram_00000000026cd140 = 0;
    g_026cd148 = 0;
    ram_00000000026cd150 = 0;
    g_026cd158 = 0;
    ram_00000000026cd160 = 0;
    g_026cd168 = 0;
    ram_00000000026cd170 = 0;
    g_026cd193 = 0;
    g_026cd18b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') goto LAB_00c9f845;
  }
  arg1 = &g_02802688;
LAB_00c9f845:
  if ((*arg1 != 0) &&
     (lVar2 = this_ptr[2],
     *(int *)(lVar2 + 0xc) == *(int *)(*(int64_t *)(*arg1 + 0x10) + 0xc))) {
    cVar5 = FUN_00d24990();
    cVar6 = FUN_00d24990();
    if (cVar5 == cVar6) {
      cVar5 = FUN_00d24990();
      if (cVar5 != '\0') {
        if (0 < *(int *)(lVar2 + 0xc)) {
          lVar10 = 0;
          uVar12 = extraout_XMM0_Da;
          do {
            plVar1 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar10 * 8);
            local_58 = 0;
            local_60 = plVar1;
            uVar12 = FUN_00c9fe40(uVar12,&local_60);
            plVar3 = local_50;
            local_40[0] = local_48[0];
            pcVar9 = local_48;
            if (local_48[0] == '\0') {
              pcVar9 = local_40;
            }
            *pcVar9 = '\0';
            if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            local_58 = 0;
            local_60 = plVar1;
            uVar12 = FUN_00c9fe40(uVar12,&local_60);
            plVar4 = local_50;
            local_38[0] = local_48[0];
            pcVar9 = local_48;
            if (local_48[0] == '\0') {
              pcVar9 = local_38;
            }
            *pcVar9 = '\0';
            if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            if (plVar4 == plVar3) {
              uVar11 = 3;
              if (plVar3 == (int64_t *)0x0) {
                local_48[0] = '\0';
                local_50 = plVar1;
                bVar7 = FUN_00c9ff50();
                uVar11 = (uint)bVar7 + (uint)bVar7 + 1;
                uVar12 = extraout_XMM0_Da_01;
              }
            }
            else {
              uVar11 = 1;
              if ((plVar4 != (int64_t *)0x0) && (plVar3 != (int64_t *)0x0)) {
                bVar7 = (**(code **)(*plVar4 + 0x50))();
                uVar11 = (uint)(bVar7 ^ 1);
                uVar12 = extraout_XMM0_Da_00;
              }
            }
            if ((local_38[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            if ((local_40[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            if ((uVar11 != 0) && (uVar11 != 3)) goto LAB_00c9fbd0;
            lVar10 = lVar10 + 1;
          } while ((int)lVar10 < *(int *)(lVar2 + 0xc));
        }
        uVar11 = 0;
LAB_00c9fbd0:
        FUN_00083b20();
        return (uVar11 & 1) == 0;
      }
      lVar10 = 0;
      uVar12 = extraout_XMM0_Da;
      do {
        if (*(int *)(lVar2 + 0xc) <= (int)lVar10) {
          FUN_00083b20();
          return true;
        }
        plVar1 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar10 * 8);
        local_58 = 0;
        local_60 = plVar1;
        uVar12 = FUN_00c9fe40(uVar12,&local_60);
        plVar3 = local_50;
        local_40[0] = local_48[0];
        pcVar9 = local_48;
        if (local_48[0] == '\0') {
          pcVar9 = local_40;
        }
        *pcVar9 = '\0';
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        if (plVar3 == (int64_t *)0x0) break;
        local_58 = 0;
        local_60 = plVar1;
        FUN_00c9fe40(uVar12,&local_60);
        plVar1 = local_50;
        local_38[0] = local_48[0];
        pcVar9 = local_48;
        if (local_48[0] == '\0') {
          pcVar9 = local_38;
        }
        *pcVar9 = '\0';
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        cVar5 = (**(code **)(*plVar1 + 0x50))();
        uVar12 = extraout_XMM0_Da_02;
        if (local_38[0] != '\0') {
          uVar12 = FUN_00d50b20();
        }
        if (local_40[0] != '\0') {
          uVar12 = FUN_00d50b20();
        }
        lVar10 = lVar10 + 1;
      } while (cVar5 != '\0');
      FUN_00083b20();
    }
  }
  return false;
}

