// Function: FUN_01d57aa0
// Address: 01d57aa0
// Size: 835 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNImage"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d57aa0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_50;
  char local_48;
  longlong *local_40;
  
  plVar6 = (longlong *)*unaff_RSI;
  if ((DAT_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026d3c38 = FUN_00d4fe50();
    _DAT_026d3c20 = "GNMultipleValue";
    _DAT_026d3c28 = 0x18;
    _DAT_026d3c30 = FUN_00050c70;
    _DAT_026d3c40 = 0;
    uRam00000000026d3c48 = 0;
    _DAT_026d3c50 = 0;
    uRam00000000026d3c58 = 0;
    _DAT_026d3c60 = 0;
    uRam00000000026d3c68 = 0;
    _DAT_026d3c70 = 0;
    uRam00000000026d3c78 = 0;
    _DAT_026d3c80 = 0;
    uRam00000000026d3c88 = 0;
    _DAT_026d3c90 = 0;
    uRam00000000026d3c98 = 0;
    _DAT_026d3ca0 = 0;
    uRam00000000026d3ca8 = 0;
    _DAT_026d3cb0 = 0;
    uRam00000000026d3cb8 = 0;
    _DAT_026d3cc0 = 0;
    uRam00000000026d3cc8 = 0;
    _DAT_026d3cd0 = 0;
    uRam00000000026d3cd8 = 0;
    _DAT_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_01d57af0:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = unaff_RSI;
    if (cVar4 == '\0') goto LAB_01d57af0;
  }
  lVar2 = plVar6[1];
  if (((char)lVar2 == '\0') || (*plVar6 == 0)) {
    if (*plVar6 != 0) goto LAB_01d57b1c;
  }
  else {
    FUN_00d50b00();
LAB_01d57b1c:
    FUN_00e987e0();
    lVar1 = *unaff_RSI;
    if (lVar1 == local_50) {
      if (((char)unaff_RSI[1] != '\0') || (local_50 == 0)) goto LAB_01d57bba;
      if (local_48 == '\0') {
        FUN_00d50b00();
        goto LAB_01d57bb3;
      }
LAB_01d57b7d:
      local_40 = unaff_RSI + 1;
      *(undefined1 *)local_40 = 1;
    }
    else {
      lVar3 = unaff_RSI[1];
      if (local_48 != '\0') {
        *unaff_RSI = local_50;
        if (((char)lVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01d57b7d;
      }
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = local_50;
      if (((char)lVar3 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01d57bb3:
      local_40 = unaff_RSI + 1;
      *(undefined1 *)local_40 = 1;
LAB_01d57bba:
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((char)lVar2 != '\0') {
      FUN_00d50b20();
    }
  }
  plVar6 = (longlong *)*unaff_RSI;
  if ((DAT_026ed470 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027f7318 = FUN_00d4fe50();
    DAT_027f7300 = "GNImage";
    _DAT_027f7308 = 0x68;
    _DAT_027f7310 = FUN_001cdcc0;
    _DAT_027f7320 = 0;
    uRam00000000027f7328 = 0;
    _DAT_027f7330 = 0;
    uRam00000000027f7338 = 0;
    _DAT_027f7340 = 0;
    uRam00000000027f7348 = 0;
    _DAT_027f7350 = 0;
    uRam00000000027f7358 = 0;
    _DAT_027f7360 = 0;
    uRam00000000027f7368 = 0;
    _DAT_027f7370 = 0;
    uRam00000000027f7378 = 0;
    _DAT_027f7380 = 0;
    uRam00000000027f7388 = 0;
    _DAT_027f7390 = 0;
    uRam00000000027f7398 = 0;
    _DAT_027f73a0 = 0;
    uRam00000000027f73a8 = 0;
    _DAT_027f73b0 = 0;
    uRam00000000027f73b8 = 0;
    _DAT_027f73c0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_01d57c15:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = unaff_RSI;
    if (cVar4 == '\0') goto LAB_01d57c15;
  }
  if (*plVar6 == 0) {
    if (unaff_RDI[0x39] == 0) {
      return;
    }
    unaff_RDI[0x39] = 0;
  }
  else {
    lVar2 = *unaff_RSI;
    lVar1 = unaff_RDI[0x39];
    if (lVar2 == lVar1) {
      return;
    }
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x39] = lVar2;
    if (lVar1 == 0) goto LAB_01d57c74;
  }
  FUN_00d50b20();
LAB_01d57c74:
  (**(code **)(*unaff_RDI + 0x620))();
  return;
}


