// Function: FUN_000eab90
// Address: 000eab90
// Size: 1031 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_000eab90(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar9;
  longlong *plVar10;
  char local_68;
  longlong *local_50;
  char local_48 [8];
  char local_38 [8];
  
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar10 = unaff_RSI;
  do {
    (**(code **)(*plVar10 + 0x370))();
    if (local_50 == plVar10) {
      if (((local_38[0] == '\0') && (local_50 != (longlong *)0x0)) && (local_48[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_000eac27;
      }
    }
    else {
      plVar10 = local_50;
      if (local_48[0] == '\0') {
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
LAB_000eac27:
        local_38[0] = '\x01';
        pcVar5 = local_48;
      }
      *pcVar5 = '\0';
    }
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026fddb0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
    plVar8 = &DAT_02802688;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar8 = (longlong *)&stack0xffffffffffffff90;
      if (cVar3 == '\0') {
        plVar8 = &DAT_02802688;
      }
    }
    if (*plVar8 != 0) {
      if ((local_38[0] == '\0') && (plVar10 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      plVar9 = plVar10;
      if (unaff_RSI == (longlong *)0x0) goto LAB_000eadb1;
      goto LAB_000eadac;
    }
  } while (plVar10 != (longlong *)0x0);
  plVar9 = (longlong *)0x0;
  if (unaff_RSI != (longlong *)0x0) {
LAB_000eadac:
    FUN_00d50b20();
  }
LAB_000eadb1:
  pVar7 = (pthread_key_t)plVar8;
  if (plVar9 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    bVar2 = false;
    local_50 = (longlong *)0x0;
    bVar1 = false;
    goto LAB_000eaf40;
  }
  (**(code **)(*plVar9 + 0x5e0))();
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) {
    bVar2 = false;
    plVar8 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0x5e0))();
    FUN_00756eb0();
    if (local_50 == (longlong *)0x0) {
      bVar2 = false;
    }
    else if (local_48[0] == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = '\0';
      bVar2 = true;
    }
    plVar8 = local_50;
    if ((local_68 != '\0') && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_006577f0();
  if (local_48[0] == '\0') {
    if (local_50 == (longlong *)0x0) goto LAB_000eaf27;
    FUN_00d50b00();
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_000eaebb:
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    if (local_50 == (longlong *)0x0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) &&
         (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  else {
    if (local_50 != (longlong *)0x0) goto LAB_000eaebb;
LAB_000eaf27:
    bVar1 = false;
    local_50 = (longlong *)0x0;
  }
  FUN_00d50b20();
LAB_000eaf40:
  FUN_000ebf80();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar2) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar1) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


