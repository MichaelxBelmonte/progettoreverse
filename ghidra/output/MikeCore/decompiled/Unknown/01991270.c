// Function: FUN_01991270
// Address: 01991270
// Size: 1764 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01991692) */
/* WARNING: Removing unreachable block (ram,0x0199169e) */
/* WARNING: Removing unreachable block (ram,0x019914f5) */
/* WARNING: Removing unreachable block (ram,0x01991501) */
/* WARNING: Removing unreachable block (ram,0x019913f1) */
/* WARNING: Removing unreachable block (ram,0x019913fd) */
/* WARNING: Removing unreachable block (ram,0x0199132c) */
/* WARNING: Removing unreachable block (ram,0x01991338) */
/* WARNING: Removing unreachable block (ram,0x019912c2) */
/* WARNING: Removing unreachable block (ram,0x019912ce) */
/* WARNING: Removing unreachable block (ram,0x019913a3) */
/* WARNING: Removing unreachable block (ram,0x019913af) */
/* WARNING: Removing unreachable block (ram,0x0199145a) */
/* WARNING: Removing unreachable block (ram,0x01991466) */
/* WARNING: Removing unreachable block (ram,0x0199162d) */
/* WARNING: Removing unreachable block (ram,0x01991633) */
/* WARNING: Removing unreachable block (ram,0x01991640) */
/* WARNING: Removing unreachable block (ram,0x01991645) */
/* WARNING: Removing unreachable block (ram,0x0199164d) */
/* WARNING: Removing unreachable block (ram,0x0199192d) */
/* WARNING: Removing unreachable block (ram,0x01991939) */
/* WARNING: Removing unreachable block (ram,0x019915de) */
/* WARNING: Removing unreachable block (ram,0x019915e7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01991270(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 in_XMM1_Qb;
  undefined8 uVar11;
  undefined1 auVar10 [16];
  undefined4 local_a8;
  undefined4 local_98;
  longlong *local_78;
  char local_70;
  longlong local_58;
  char local_50;
  
  (**(code **)(*unaff_RDI + 0xb78))();
  if ((*(int *)(unaff_RDI[0x41] + 0xc) == 0) || (*(char *)((longlong)unaff_RDI + 0x21c) == '\0')) {
    cVar3 = (**(code **)(&DAT_00001478 + *unaff_RDI))();
    if (cVar3 != '\0') {
      fVar5 = (float)(**(code **)(&UNK_00001448 + *unaff_RDI))();
      if ((fVar5 != 0.0) || (NAN(fVar5))) {
        (**(code **)(*unaff_RDI + 0xb88))();
      }
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0xb80))();
  }
  uVar9 = param_2;
  uVar11 = in_XMM1_Qb;
  (**(code **)(&UNK_000015d0 + *unaff_RDI))(param_1);
  if (((char)unaff_RDI[0x54] != '\0') && (!NAN((double)unaff_RDI[0x53]))) {
    uVar9 = param_2;
    uVar11 = in_XMM1_Qb;
    (**(code **)(*unaff_RDI + 0xba0))(param_1);
  }
  if ((*(float *)(unaff_RDI + 100) == (float)DAT_023dccec) &&
     (!NAN(*(float *)(unaff_RDI + 100)) && !NAN((float)DAT_023dccec))) {
    if ((*(float *)((longlong)unaff_RDI + 0x324) == DAT_023dccec._4_4_) &&
       (!NAN(*(float *)((longlong)unaff_RDI + 0x324)) && !NAN(DAT_023dccec._4_4_))) {
      if ((*(float *)(unaff_RDI + 0x65) == (float)DAT_023dccf4) &&
         (!NAN(*(float *)(unaff_RDI + 0x65)) && !NAN((float)DAT_023dccf4))) {
        if ((*(float *)((longlong)unaff_RDI + 0x32c) == DAT_023dccf4._4_4_) &&
           (!NAN(*(float *)((longlong)unaff_RDI + 0x32c)) && !NAN(DAT_023dccf4._4_4_)))
        goto LAB_01991506;
      }
    }
  }
  uVar9 = param_2;
  uVar11 = in_XMM1_Qb;
  (**(code **)(*unaff_RDI + 0xba8))();
LAB_01991506:
  if (unaff_RDI[0x97] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    uVar6 = FUN_01e436c0();
    lVar1 = unaff_RDI[0x97];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d45bc0();
    uVar7 = (**(code **)(*unaff_RDI + 0x938))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    auVar8._8_8_ = extraout_XMM0_Qb;
    auVar8._0_8_ = uVar6;
    auVar2._8_8_ = extraout_XMM0_Qb_00;
    auVar2._0_8_ = uVar7;
    auVar8 = blendps(auVar8,auVar2,1);
    auVar10._8_8_ = uVar11;
    auVar10._0_8_ = uVar9;
    auVar10 = blendps(_DAT_023b1630,auVar10,2);
    local_98 = (undefined4)param_1;
    local_a8 = (undefined4)param_2;
    cVar3 = FUN_00d054a0(auVar8._0_8_,auVar10._0_8_,local_98,local_a8);
    if (cVar3 != '\0') {
      FUN_01c4b410();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      if (((*(float *)(unaff_RDI + 0x98) < DAT_02390124) && (FUN_01cfcdc0(), local_50 != '\0')) &&
         (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d488d0();
      FUN_01d48b40();
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(int *)(unaff_RDI[0xa6] + 0xc) != 0) {
    FUN_01d48370();
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_78 + 0x390))();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d488d0();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_78 + 0x378))();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d48a10();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e436c0();
    lVar1 = unaff_RDI[0xa6];
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar4 = 0;
        do {
          (**(code **)(*(longlong *)*unaff_RSI + 0x3f0))();
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(lVar1 + 0xc));
      }
      FUN_00018280();
    }
    FUN_01d48390();
  }
  return;
}


