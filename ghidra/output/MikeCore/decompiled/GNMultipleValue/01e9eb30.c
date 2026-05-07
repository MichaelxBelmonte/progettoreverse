// Function: FUN_01e9eb30
// Address: 01e9eb30
// Size: 809 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNFont"


/* WARNING: Removing unreachable block (ram,0x01e9eccc) */
/* WARNING: Removing unreachable block (ram,0x01e9ecd5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e9eb30(void)

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
LAB_01e9eb80:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = unaff_RSI;
    if (cVar4 == '\0') goto LAB_01e9eb80;
  }
  lVar2 = plVar6[1];
  if (((char)lVar2 == '\0') || (*plVar6 == 0)) {
    if (*plVar6 == 0) goto LAB_01e9ec6c;
  }
  else {
    FUN_00d50b00();
  }
  FUN_00e987e0();
  lVar1 = *unaff_RSI;
  if (lVar1 == local_50) {
    if (((char)unaff_RSI[1] != '\0') || (local_50 == 0)) goto LAB_01e9ec4a;
    if (local_48 == '\0') {
      FUN_00d50b00();
      goto LAB_01e9ec43;
    }
LAB_01e9ec0d:
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
      goto LAB_01e9ec0d;
    }
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    *unaff_RSI = local_50;
    if (((char)lVar3 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_01e9ec43:
    local_40 = unaff_RSI + 1;
    *(undefined1 *)local_40 = 1;
LAB_01e9ec4a:
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
LAB_01e9ec6c:
  plVar6 = (longlong *)*unaff_RSI;
  if ((DAT_026ecc58 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026ecba8 = FUN_00d4fe50();
    DAT_026ecb90 = "GNFont";
    _DAT_026ecb98 = 0x48;
    _DAT_026ecba0 = FUN_001c9760;
    _DAT_026ecbb0 = 0;
    uRam00000000026ecbb8 = 0;
    _DAT_026ecbc0 = 0;
    _DAT_026ecc38 = 0;
    uRam00000000026ecc40 = 0;
    _DAT_026ecc48 = 0;
    DAT_026ecc4a = 1;
    _DAT_026ecbc8 = 0;
    uRam00000000026ecbd0 = 0;
    _DAT_026ecbd8 = 0;
    uRam00000000026ecbe0 = 0;
    _DAT_026ecbe8 = 0;
    uRam00000000026ecbf0 = 0;
    _DAT_026ecbf8 = 0;
    uRam00000000026ecc00 = 0;
    _DAT_026ecc08 = 0;
    uRam00000000026ecc10 = 0;
    _DAT_026ecc18 = 0;
    uRam00000000026ecc20 = 0;
    _DAT_026ecc28 = 0;
    uRam00000000026ecc30 = 0;
    DAT_026ecc53 = 0;
    _DAT_026ecc4b = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    FUN_00e85ea0();
  }
  (**(code **)(*unaff_RDI + 0xab8))();
  return;
}


