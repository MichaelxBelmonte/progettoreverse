// Function: FUN_01f98990
// Address: 01f98990
// Size: 772 bytes
// Class: GNColor
// String references:
//   "GNColor"


/* WARNING: Removing unreachable block (ram,0x01f98b2c) */
/* WARNING: Removing unreachable block (ram,0x01f98b35) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f98990(double param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  float fVar6;
  longlong local_38;
  char local_30;
  
  plVar1 = *(longlong **)(unaff_RSI + 0x20);
  if ((DAT_026e9ce0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026fd0e8 = FUN_00d4fe50();
    DAT_026fd0d0 = "GNColor";
    _DAT_026fd0d8 = 0x30;
    _DAT_026fd0e0 = FUN_001b8c30;
    _DAT_026fd0f0 = 0;
    uRam00000000026fd0f8 = 0;
    _DAT_026fd100 = 0;
    uRam00000000026fd108 = 0;
    _DAT_026fd110 = 0;
    uRam00000000026fd118 = 0;
    _DAT_026fd120 = 0;
    uRam00000000026fd128 = 0;
    _DAT_026fd130 = 0;
    uRam00000000026fd138 = 0;
    _DAT_026fd140 = 0;
    uRam00000000026fd148 = 0;
    _DAT_026fd150 = 0;
    uRam00000000026fd158 = 0;
    _DAT_026fd160 = 0;
    uRam00000000026fd168 = 0;
    _DAT_026fd170 = 0;
    uRam00000000026fd178 = 0;
    _DAT_026fd180 = 0;
    uRam00000000026fd188 = 0;
    _DAT_026fd190 = 0;
    ___cxa_guard_release();
  }
  lVar2 = DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    lVar2 = DAT_02802688;
    if (cVar4 != '\0') {
      lVar2 = *(longlong *)(unaff_RSI + 0x20);
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  plVar1 = *(longlong **)(unaff_RSI + 0x28);
  if ((DAT_026e9ce0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026fd0e8 = FUN_00d4fe50();
    DAT_026fd0d0 = "GNColor";
    _DAT_026fd0d8 = 0x30;
    _DAT_026fd0e0 = FUN_001b8c30;
    _DAT_026fd0f0 = 0;
    uRam00000000026fd0f8 = 0;
    _DAT_026fd100 = 0;
    uRam00000000026fd108 = 0;
    _DAT_026fd110 = 0;
    uRam00000000026fd118 = 0;
    _DAT_026fd120 = 0;
    uRam00000000026fd128 = 0;
    _DAT_026fd130 = 0;
    uRam00000000026fd138 = 0;
    _DAT_026fd140 = 0;
    uRam00000000026fd148 = 0;
    _DAT_026fd150 = 0;
    uRam00000000026fd158 = 0;
    _DAT_026fd160 = 0;
    uRam00000000026fd168 = 0;
    _DAT_026fd170 = 0;
    uRam00000000026fd178 = 0;
    _DAT_026fd180 = 0;
    uRam00000000026fd188 = 0;
    _DAT_026fd190 = 0;
    ___cxa_guard_release();
  }
  lVar3 = DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    lVar3 = DAT_02802688;
    if (cVar4 != '\0') {
      lVar3 = *(longlong *)(unaff_RSI + 0x28);
    }
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  fVar6 = (float)param_1;
  FUN_01cfcdc0((*(float *)(lVar3 + 0x10) - *(float *)(lVar2 + 0x10)) * fVar6 +
               *(float *)(lVar2 + 0x10),
               (*(float *)(lVar3 + 0x14) - *(float *)(lVar2 + 0x14)) * fVar6 +
               *(float *)(lVar2 + 0x14),
               (*(float *)(lVar3 + 0x18) - *(float *)(lVar2 + 0x18)) * fVar6 +
               *(float *)(lVar2 + 0x18),
               (*(float *)(lVar3 + 0x1c) - *(float *)(lVar2 + 0x1c)) * fVar6 +
               *(float *)(lVar2 + 0x1c));
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      *unaff_RDI = local_38;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      goto LAB_01f98af1;
    }
    local_38 = 0;
  }
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_01f98af1:
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}


