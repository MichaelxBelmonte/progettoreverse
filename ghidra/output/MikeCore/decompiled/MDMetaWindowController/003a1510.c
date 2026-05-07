// Function: FUN_003a1510
// Address: 003a1510
// Size: 851 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_003a1510(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong *unaff_RDI;
  longlong *plVar7;
  longlong *plVar8;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar8 = unaff_RDI;
  do {
    (**(code **)(*plVar8 + 0x370))();
    if (local_48 == plVar8) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
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
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026fddb0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_026e0ab8 = FUN_00015ff0();
      _DAT_026e0aa0 = "MDMetaWindowController";
      _DAT_026e0aa8 = 0x198;
      _DAT_026e0ab0 = FUN_0006dea0;
      _DAT_026e0ac0 = 0;
      uRam00000000026e0ac8 = 0;
      _DAT_026e0ad0 = 0;
      _DAT_026e0b48 = 0;
      uRam00000000026e0b50 = 0;
      _DAT_026e0b58 = 0;
      DAT_026e0b5a = 1;
      _DAT_026e0ad8 = 0;
      uRam00000000026e0ae0 = 0;
      _DAT_026e0ae8 = 0;
      uRam00000000026e0af0 = 0;
      _DAT_026e0af8 = 0;
      uRam00000000026e0b00 = 0;
      _DAT_026e0b08 = 0;
      uRam00000000026e0b10 = 0;
      _DAT_026e0b18 = 0;
      uRam00000000026e0b20 = 0;
      _DAT_026e0b28 = 0;
      uRam00000000026e0b30 = 0;
      _DAT_026e0b38 = 0;
      uRam00000000026e0b40 = 0;
      DAT_026e0b63 = 0;
      _DAT_026e0b5b = 0;
      ___cxa_guard_release();
    }
    plVar6 = &DAT_02802688;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar6 = (longlong *)&stack0xffffffffffffffa8;
      if (cVar2 == '\0') {
        plVar6 = &DAT_02802688;
      }
    }
    if (*plVar6 != 0) {
      plVar6 = plVar8;
      if ((local_38[0] == '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x003a171c;
    }
  } while (plVar8 != (longlong *)0x0);
  plVar6 = (longlong *)0x0;
joined_r0x003a171c:
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_003a17d0:
    uVar4 = FUN_019f3ac0();
    if (plVar6 == (longlong *)0x0) {
      return uVar4;
    }
  }
  else {
    (**(code **)(*plVar6 + 0x5e0))();
    if (local_48 == (longlong *)0x0) {
      bVar1 = false;
      plVar7 = (longlong *)0x0;
joined_r0x003a176c:
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (longlong *)0x0) goto LAB_003a17d0;
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
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      FUN_00752180();
      if (local_48 == (longlong *)0x0) {
        uVar4 = 0;
      }
      else {
        FUN_00752180();
        uVar4 = FUN_00108e10();
        if ((local_50 != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar4 = FUN_0076f070();
    }
    if ((bVar1) && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return uVar4;
}


