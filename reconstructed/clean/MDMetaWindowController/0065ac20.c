// Function: FUN_0065ac20
// Address: 0065ac20
// Size: 840 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

uint64_t FUN_0065ac20(uint64_t param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  uint64_t uVar6;
  int64_t *plVar7;
  char local_58;
  int64_t *local_50;
  char local_48 [15];
  uint8_t local_39;
  char local_38 [8];
  
  uVar2 = FUN_01bd91b0();
  uVar6 = (uint64_t)uVar2;
  if (param_2 != '\0') {
    local_39 = (uint8_t)uVar2;
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar7 = this_ptr;
    do {
      (**(code **)(*plVar7 + 0x370))();
      if (local_50 == plVar7) {
        if (((local_38[0] == '\0') && (local_50 != (int64_t *)0x0)) && (local_48[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_0065acf7;
        }
      }
      else {
        plVar7 = local_50;
        if (local_48[0] == '\0') {
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
LAB_0065acf7:
          local_38[0] = '\x01';
          pcVar4 = local_48;
        }
        *pcVar4 = '\0';
      }
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
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
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar1 = FUN_00e85ea0();
        plVar5 = (int64_t *)&stack0xffffffffffffffa0;
        if (cVar1 == '\0') {
          plVar5 = &g_02802688;
        }
      }
      if (*plVar5 != 0) {
        if ((local_38[0] == '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        uVar6 = CONCAT71(0x28026,local_39);
        plVar5 = plVar7;
        if (this_ptr == (int64_t *)0x0) goto LAB_0065ae8c;
        goto LAB_0065ae84;
      }
    } while (plVar7 != (int64_t *)0x0);
    uVar6 = CONCAT71(0x28026,local_39);
    plVar5 = (int64_t *)0x0;
    if (this_ptr != (int64_t *)0x0) {
LAB_0065ae84:
      FUN_00d50b20();
    }
LAB_0065ae8c:
    if (plVar5 != (int64_t *)0x0) {
      FUN_00637870();
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_50 != (int64_t *)0x0) {
        FUN_00637870();
        FUN_01bd0b60();
        if (local_58 == '\0') {
          if (plVar7 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        FUN_006e3b90();
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
  return uVar6;
}

