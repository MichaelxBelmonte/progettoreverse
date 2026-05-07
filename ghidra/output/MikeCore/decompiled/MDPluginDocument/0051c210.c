// Function: FUN_0051c210
// Address: 0051c210
// Size: 899 bytes
// Class: MDPluginDocument


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051c210(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  double dVar3;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_30;
  char local_28;
  
  if (*(char *)(unaff_RDI + 0x2d1) != '\0') {
    *(undefined1 *)(unaff_RDI + 0x2d1) = 0;
    FUN_00d403d0();
    FUN_00d50b00();
    local_c0 = DAT_026de568;
    if (DAT_026de568 != 0) {
      FUN_00d50b00();
    }
    local_b8 = '\x01';
    local_b0 = 0;
    local_a8 = '\0';
    FUN_00d41430(&local_b0,&local_c0);
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_a0 = DAT_0270b7e0;
    if (DAT_0270b7e0 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    local_90 = 0;
    local_88 = '\0';
    FUN_00d41430(&local_90,&local_a0);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(char *)(unaff_RDI + 0x24c) != *(char *)(unaff_RDI + 0x24b)) {
    *(char *)(unaff_RDI + 0x24c) = *(char *)(unaff_RDI + 0x24b);
    FUN_00d403d0();
    local_80 = DAT_026fdeb8;
    if (DAT_026fdeb8 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00d50b00();
    local_70 = 0;
    local_68 = '\0';
    FUN_00d40470(&local_70,&stack0xffffffffffffffc0,1,3);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x2b0) == 0) {
    plVar2 = (longlong *)FUN_0053fcd0();
    (**(code **)(*plVar2 + 0x18))();
    plVar1 = *(longlong **)(unaff_RDI + 0x2b0);
    if (plVar1 == plVar2) {
      FUN_00d50b20();
    }
    else {
      *(longlong **)(unaff_RDI + 0x2b0) = plVar2;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (((*(longlong *)(unaff_RDI + 0x308) != 0) ||
      (FUN_0051c820(), *(longlong *)(unaff_RDI + 0x308) != 0)) &&
     (*(longlong *)(unaff_RDI + 0xe8) != 0)) {
    FUN_0051c9f0();
  }
  if ((DAT_02809fd0 != 0) && (dVar3 = (double)FUN_00e7d6f0(), DAT_023b3bc0 < dVar3 - _DAT_02801610))
  {
    do {
      FUN_0051d020();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    } while (local_30 != 0);
    _DAT_02801610 = (double)FUN_00e7d6f0();
  }
  return;
}


