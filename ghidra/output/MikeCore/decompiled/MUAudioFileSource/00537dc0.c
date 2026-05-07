// Function: FUN_00537dc0
// Address: 00537dc0
// Size: 1418 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x0053825c) */
/* WARNING: Removing unreachable block (ram,0x00538269) */
/* WARNING: Removing unreachable block (ram,0x005380be) */
/* WARNING: Removing unreachable block (ram,0x005380c7) */
/* WARNING: Removing unreachable block (ram,0x00538087) */
/* WARNING: Removing unreachable block (ram,0x00538040) */
/* WARNING: Removing unreachable block (ram,0x00538049) */
/* WARNING: Removing unreachable block (ram,0x00537ecf) */
/* WARNING: Removing unreachable block (ram,0x00537ed8) */
/* WARNING: Removing unreachable block (ram,0x00537fb9) */
/* WARNING: Removing unreachable block (ram,0x00537fc2) */
/* WARNING: Removing unreachable block (ram,0x005380e9) */
/* WARNING: Removing unreachable block (ram,0x005380f2) */
/* WARNING: Removing unreachable block (ram,0x0053816b) */
/* WARNING: Removing unreachable block (ram,0x00538174) */
/* WARNING: Removing unreachable block (ram,0x005381ae) */
/* WARNING: Removing unreachable block (ram,0x005381bb) */
/* WARNING: Removing unreachable block (ram,0x005381c7) */
/* WARNING: Removing unreachable block (ram,0x005382e3) */
/* WARNING: Removing unreachable block (ram,0x005382ef) */
/* WARNING: Removing unreachable block (ram,0x00537efa) */
/* WARNING: Removing unreachable block (ram,0x00537f03) */
/* WARNING: Removing unreachable block (ram,0x00537e51) */
/* WARNING: Removing unreachable block (ram,0x00537e5a) */
/* WARNING: Removing unreachable block (ram,0x00537f7b) */
/* WARNING: Removing unreachable block (ram,0x00537f84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00537dc0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar8;
  double dVar9;
  undefined8 uVar10;
  longlong local_60;
  char local_58;
  undefined8 local_50;
  longlong *local_40;
  char local_38;
  
  lVar3 = DAT_026f6fd0;
  if (DAT_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar7 = (ulonglong)(dVar9 * DAT_023907c0);
  dVar9 = dVar9 * DAT_023907c0 - _DAT_023907c8;
  uVar10 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b00();
  }
  bVar5 = (byte)(((longlong)dVar9 & (longlong)uVar7 >> 0x3f | uVar7) / 3);
  local_60 = lVar3;
  local_58 = '\0';
  FUN_000175c0(uVar10,&local_60);
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    local_38 = '\0';
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((local_40 != (longlong *)0x0 & bVar5) == 0) {
    cVar6 = *(char *)((longlong)unaff_RDI + 0x35a);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar6 == '\0') goto LAB_00537f8b;
    uVar10 = FUN_0051be00();
    if (local_40 == (longlong *)0x0) {
      local_50 = 0;
    }
    else {
      local_50 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
LAB_00537f8b:
    local_50 = 0;
    local_40 = (longlong *)0x0;
  }
  plVar1 = (longlong *)*unaff_RSI;
  FUN_00d21140();
  lVar3 = DAT_026f6fd0;
  if (DAT_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar7 = (ulonglong)(dVar9 * DAT_023907c0);
  dVar9 = dVar9 * DAT_023907c0 - _DAT_023907c8;
  uVar10 = FUN_0071a120();
  if (plVar1 != (longlong *)0x0) {
    uVar10 = FUN_00d50b00();
  }
  bVar5 = (byte)(((longlong)dVar9 & (longlong)uVar7 >> 0x3f | uVar7) / 3);
  local_60 = lVar3;
  local_58 = '\0';
  FUN_000175c0(uVar10,&local_60);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((plVar1 != (longlong *)0x0 & bVar5) != 0) {
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00538328;
  }
  cVar6 = *(char *)((longlong)unaff_RDI + 0x35a);
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') goto LAB_00538328;
  FUN_0051be00();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  if (local_40 != plVar1) {
    FUN_000ba510();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    plVar2 = (longlong *)unaff_RDI[0x66];
    plVar8 = plVar1;
    if (plVar1 == plVar2) {
      if (plVar1 == (longlong *)0x0) goto LAB_00538231;
LAB_00538278:
      FUN_00d50b20();
      bVar4 = true;
      plVar8 = (longlong *)0x0;
    }
    else {
      bVar4 = false;
      if ((plVar1 != (longlong *)0x0) && (bVar4 = false, plVar2 != (longlong *)0x0)) {
        FUN_00d50b00();
        cVar6 = (**(code **)(*plVar1 + 0x50))();
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') goto LAB_00538278;
LAB_00538231:
        bVar4 = false;
      }
    }
    lVar3 = unaff_RDI[0x65];
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0x618))(unaff_RDI[0x69],unaff_RDI[0x6a]);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (!bVar4 && plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00538328:
  if (((char)local_50 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


