// Function: FUN_01f92800
// Address: 01f92800
// Size: 622 bytes
// Class: GNActionRegistration
// String references:
//   "GNActionRegistration"


/* WARNING: Removing unreachable block (ram,0x01f9282f) */
/* WARNING: Removing unreachable block (ram,0x01f92838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f92800(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar4;
  undefined4 uVar5;
  longlong *local_68;
  char local_60;
  longlong *local_38;
  char local_30;
  
  FUN_01dd11e0();
  cVar2 = FUN_01e420b0();
  if (cVar2 == '\0') {
    return;
  }
  if ((int)unaff_RDI[0x5c] == -1) {
    return;
  }
  pplVar4 = &local_38;
  FUN_01eda0f0();
  plVar1 = local_38;
  if ((DAT_026e7b78 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026e7ac8 = FUN_00d4fe50();
    _DAT_026e7ab0 = "GNActionRegistration";
    _DAT_026e7ab8 = 0x38;
    _DAT_026e7ac0 = FUN_001a8af0;
    _DAT_026e7ad0 = 0;
    uRam00000000026e7ad8 = 0;
    _DAT_026e7ae0 = 0;
    uRam00000000026e7ae8 = 0;
    _DAT_026e7af0 = 0;
    uRam00000000026e7af8 = 0;
    _DAT_026e7b00 = 0;
    uRam00000000026e7b08 = 0;
    _DAT_026e7b10 = 0;
    uRam00000000026e7b18 = 0;
    _DAT_026e7b20 = 0;
    uRam00000000026e7b28 = 0;
    _DAT_026e7b30 = 0;
    uRam00000000026e7b38 = 0;
    _DAT_026e7b40 = 0;
    uRam00000000026e7b48 = 0;
    _DAT_026e7b50 = 0;
    uRam00000000026e7b58 = 0;
    _DAT_026e7b60 = 0;
    uRam00000000026e7b68 = 0;
    _DAT_026e7b70 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01f928a7;
  }
  pplVar4 = (longlong **)&DAT_02802688;
LAB_01f928a7:
  plVar1 = *pplVar4;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_01d48370();
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_68 + 0x4b8))();
    plVar1 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar5 = FUN_01d48b40(DAT_02390d34);
    plVar1 = (longlong *)*unaff_RSI;
    (**(code **)(*unaff_RDI + 0x950))(uVar5,1);
    FUN_00d05530();
    (**(code **)(*plVar1 + 0x3b8))();
    FUN_01d48390();
  }
  return;
}


