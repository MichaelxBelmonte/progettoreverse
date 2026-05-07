// Function: FUN_00de7070
// Address: 00de7070
// Size: 536 bytes
// Class: GNHashAlgorithm
// String references:
//   "GNHashAlgorithm"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00de7070(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 == unaff_RDI) {
    uVar9 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    goto LAB_00de71b1;
  }
  if (plVar1 == (longlong *)0x0) {
LAB_00de719e:
    uVar9 = 0;
  }
  else {
    if ((DAT_027789b0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      _DAT_02778900 = FUN_00d4fe50();
      _DAT_027788e8 = "GNHashAlgorithm";
      _DAT_027788f0 = 0x20;
      _DAT_027788f8 = FUN_00cf8fe0;
      _DAT_02778908 = 0;
      uRam0000000002778910 = 0;
      _DAT_02778918 = 0;
      _DAT_02778990 = 0;
      uRam0000000002778998 = 0;
      _DAT_027789a0 = 0;
      DAT_027789a2 = 3;
      _DAT_02778920 = 0;
      uRam0000000002778928 = 0;
      _DAT_02778930 = 0;
      uRam0000000002778938 = 0;
      _DAT_02778940 = 0;
      uRam0000000002778948 = 0;
      _DAT_02778950 = 0;
      uRam0000000002778958 = 0;
      _DAT_02778960 = 0;
      uRam0000000002778968 = 0;
      _DAT_02778970 = 0;
      uRam0000000002778978 = 0;
      _DAT_02778980 = 0;
      uRam0000000002778988 = 0;
      DAT_027789ab = 0;
      _DAT_027789a3 = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') {
      unaff_RSI = &DAT_02802688;
    }
    plVar1 = (longlong *)*unaff_RSI;
    lVar4 = unaff_RSI[1];
    if (((char)lVar4 == '\0') || (plVar1 == (longlong *)0x0)) {
      if (plVar1 == (longlong *)0x0) goto LAB_00de719e;
    }
    else {
      FUN_00d50b00();
    }
    iVar6 = (**(code **)(*unaff_RDI + 0x370))();
    iVar7 = (**(code **)(*plVar1 + 0x370))();
    if (iVar6 == iVar7) {
      if ((char)unaff_RDI[3] == '\0') {
        (**(code **)(*unaff_RDI + 0x380))();
      }
      plVar2 = (longlong *)unaff_RDI[2];
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if ((char)plVar1[3] == '\0') {
        (**(code **)(*plVar1 + 0x380))();
      }
      lVar3 = plVar1[2];
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      uVar8 = (**(code **)(*plVar2 + 0x50))();
      uVar9 = (ulonglong)uVar8;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      uVar9 = 0;
    }
    if ((char)lVar4 != '\0') {
      FUN_00d50b20();
    }
  }
LAB_00de71b1:
  return uVar9 & 0xffffffff;
}


