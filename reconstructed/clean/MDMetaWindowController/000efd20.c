// Function: FUN_000efd20
// Address: 000efd20
// Size: 905 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

uint64_t FUN_000efd20(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  uint64_t unaff_R14;
  uint64_t uVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar7 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
  if (param_2 != 0) {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar6 = this_ptr;
    do {
      (**(code **)(*plVar6 + 0x370))();
      if (local_48 == plVar6) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_000efdc7;
        }
      }
      else {
        plVar6 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar4 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar4 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_000efdc7:
          local_38[0] = '\x01';
          pcVar4 = local_40;
        }
        *pcVar4 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026fddb0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_026e0ab8 = FUN_00015ff0();
        g_026e0aa0 = "MDMetaWindowController";
        g_026e0aa8 = 0x198;
        g_026e0ab0 = FUN_0006dea0;
        g_026e0ac0 = 0;
        ram_00000000026e0ac8 = 0;
        g_026e0ad0 = 0;
        g_026e0b48 = 0;
        ram_00000000026e0b50 = 0;
        g_026e0b58 = 0;
        g_026e0b5a = 1;
        g_026e0ad8 = 0;
        ram_00000000026e0ae0 = 0;
        g_026e0ae8 = 0;
        ram_00000000026e0af0 = 0;
        g_026e0af8 = 0;
        ram_00000000026e0b00 = 0;
        g_026e0b08 = 0;
        ram_00000000026e0b10 = 0;
        g_026e0b18 = 0;
        ram_00000000026e0b20 = 0;
        g_026e0b28 = 0;
        ram_00000000026e0b30 = 0;
        g_026e0b38 = 0;
        ram_00000000026e0b40 = 0;
        g_026e0b63 = 0;
        g_026e0b5b = 0;
        ___cxa_guard_release();
      }
      plVar5 = &g_02802688;
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x360))();
        cVar2 = FUN_00e85ea0();
        plVar5 = (int64_t *)&stack0xffffffffffffffa8;
        if (cVar2 == '\0') {
          plVar5 = &g_02802688;
        }
      }
      if (*plVar5 != 0) {
        if ((local_38[0] == '\0') && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        if (this_ptr == (int64_t *)0x0) goto LAB_000eff52;
        goto LAB_000eff4d;
      }
    } while (plVar6 != (int64_t *)0x0);
    plVar6 = (int64_t *)0x0;
    if (this_ptr != (int64_t *)0x0) {
LAB_000eff4d:
      FUN_00d50b20();
    }
LAB_000eff52:
    if (plVar6 == (int64_t *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar8 = FUN_00d6f370();
      lVar1 = g_026df108;
      if (g_026df108 != 0) {
        uVar8 = FUN_00d50b00();
      }
      iVar3 = FUN_00d708a0(uVar8,0);
      uVar7 = CONCAT71((int7)((uint64_t)local_48 >> 8),1);
      uVar8 = extraout_XMM0_Da;
      if (lVar1 != 0) {
        uVar8 = FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
      if (iVar3 == 0) {
        FUN_0061d5f0(uVar8,1);
      }
      else if (iVar3 == 1) {
        FUN_0061d890(uVar8,1);
      }
      else if (iVar3 == 2) {
        FUN_0061d740(uVar8,1);
      }
      FUN_00d50b20();
    }
  }
  return uVar7 & 0xffffffff;
}

