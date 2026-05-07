// Function: FUN_003a1510
// Address: 003a1510
// Size: 851 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

uint32_t FUN_003a1510(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint32_t uVar4;
  char *pcVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar8 = this_ptr;
  do {
    (**(code **)(*plVar8 + 0x370))();
    if (local_48 == plVar8) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_003a15a7;
      }
    }
    else {
      plVar8 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar5 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar5 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_003a15a7:
        local_38[0] = '\x01';
        pcVar5 = local_40;
      }
      *pcVar5 = '\0';
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
    plVar6 = &g_02802688;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar6 = (int64_t *)&stack0xffffffffffffffa8;
      if (cVar2 == '\0') {
        plVar6 = &g_02802688;
      }
    }
    if (*plVar6 != 0) {
      plVar6 = plVar8;
      if ((local_38[0] == '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x003a171c;
    }
  } while (plVar8 != (int64_t *)0x0);
  plVar6 = (int64_t *)0x0;
joined_r0x003a171c:
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_003a17d0:
    uVar4 = FUN_019f3ac0();
    if (plVar6 == (int64_t *)0x0) {
      return uVar4;
    }
  }
  else {
    (**(code **)(*plVar6 + 0x5e0))();
    if (local_48 == (int64_t *)0x0) {
      bVar1 = false;
      plVar7 = (int64_t *)0x0;
joined_r0x003a176c:
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (int64_t *)0x0) goto LAB_003a17d0;
    }
    else {
      plVar7 = local_48;
      if (local_40[0] == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        goto joined_r0x003a176c;
      }
      bVar1 = true;
    }
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_48 + 0x450))();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      FUN_00752180();
      if (local_48 == (int64_t *)0x0) {
        uVar4 = 0;
      }
      else {
        FUN_00752180();
        uVar4 = FUN_00108e10();
        if ((local_50 != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar4 = FUN_0076f070();
    }
    if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return uVar4;
}

