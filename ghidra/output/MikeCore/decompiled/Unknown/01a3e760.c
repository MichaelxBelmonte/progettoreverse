// Function: FUN_01a3e760
// Address: 01a3e760
// Size: 1245 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a3e8e1) */
/* WARNING: Removing unreachable block (ram,0x01a3ebf3) */
/* WARNING: Removing unreachable block (ram,0x01a3ebfc) */
/* WARNING: Removing unreachable block (ram,0x01a3ea6b) */
/* WARNING: Removing unreachable block (ram,0x01a3ea74) */
/* WARNING: Removing unreachable block (ram,0x01a3e8ee) */
/* WARNING: Removing unreachable block (ram,0x01a3eb0a) */
/* WARNING: Removing unreachable block (ram,0x01a3eb13) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a3e760(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  longlong local_40;
  char local_38;
  float fVar7;
  
  fVar10 = (float)((ulonglong)param_2 >> 0x20);
  fVar8 = (float)param_2;
  fVar9 = (float)((ulonglong)param_1 >> 0x20);
  if ((DAT_028b2ba8 == 0) || (DAT_028b2bb1 == '\0')) {
    FUN_00e8cb50();
    lVar4 = DAT_027e1ff0;
    if (DAT_028b2ba8 != 0) {
      DAT_028b2bb1 = '\x01';
      FUN_00e8cb70();
      goto LAB_01a3e7ad;
    }
    if (DAT_027e1ff0 != 0) {
      FUN_00d50b00();
    }
    FUN_01d51a40();
    if (local_40 == 0) {
      lVar5 = 0;
      bVar1 = false;
    }
    else {
      lVar5 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
      }
      else {
        local_38 = '\0';
        bVar1 = true;
      }
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    FUN_01d530c0();
    fVar10 = fVar10 * _UNK_023945d4;
    FUN_01d20ca0(fVar8 * _DAT_023945d0);
    lVar4 = DAT_028b2ba8;
    if (DAT_028b2ba8 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_00d50b00();
          lVar4 = local_40;
        }
      }
      else {
        local_38 = '\0';
        lVar4 = local_40;
      }
      bVar2 = DAT_028b2ba8 != 0;
      DAT_028b2ba8 = lVar4;
      if (bVar2) {
        FUN_00d50b20();
        lVar4 = local_40;
      }
    }
    if ((lVar4 != 0) && (DAT_028b2bb0 == '\0')) {
      DAT_028b2bb0 = '\x01';
      FUN_00e8cb90();
      lVar4 = local_40;
    }
    if ((local_38 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    DAT_028b2bb1 = '\x01';
    FUN_00e8cb70();
  }
  else {
LAB_01a3e7ad:
    lVar5 = 0;
    bVar1 = false;
  }
  FUN_01e3f820();
  if ((DAT_0241e624 <= fVar9) || (fVar8 = fVar10 + DAT_02394248, fVar9 < fVar8)) {
    FUN_01e4ace0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_01e4ac90();
    }
    goto LAB_01a3ea8f;
  }
  uVar6 = FUN_01a362b0();
  fVar7 = (float)((ulonglong)uVar6 >> 0x20);
  fVar9 = (float)uVar6;
  auVar11._8_4_ = extraout_XMM0_Dc;
  auVar11._0_8_ = uVar6;
  auVar11._12_4_ = extraout_XMM0_Dd;
  if (((((fVar9 != (float)DAT_023dccec) || (NAN(fVar9) || NAN((float)DAT_023dccec))) ||
       (fVar7 != DAT_023dccec._4_4_)) ||
      ((NAN(fVar7) || NAN(DAT_023dccec._4_4_) || (fVar8 != (float)DAT_023dccf4)))) ||
     (NAN(fVar8) || NAN((float)DAT_023dccf4))) {
LAB_01a3e82d:
    auVar11 = blendps(auVar11,ZEXT416((uint)(DAT_02394248 + fVar9)),1);
    uVar6 = auVar11._0_8_;
  }
  else {
    if ((fVar10 != DAT_023dccf4._4_4_) || (NAN(fVar10) || NAN(DAT_023dccf4._4_4_)))
    goto LAB_01a3e82d;
    uVar6 = CONCAT44(DAT_023dccec._4_4_,(float)DAT_023dccec);
  }
  fVar10 = (float)uVar6;
  fVar9 = (float)((ulonglong)uVar6 >> 0x20);
  cVar3 = FUN_00d05410((int)param_1);
  lVar4 = local_40;
  if (cVar3 == '\0') {
LAB_01a3e94e:
    uVar6 = FUN_01a36510();
    fVar8 = (float)((ulonglong)uVar6 >> 0x20);
    if (((float)uVar6 == (float)DAT_023dccec) && (!NAN((float)uVar6) && !NAN((float)DAT_023dccec)))
    {
      if ((fVar8 == DAT_023dccec._4_4_) && (!NAN(fVar8) && !NAN(DAT_023dccec._4_4_))) {
        if ((fVar10 == (float)DAT_023dccf4) && (!NAN(fVar10) && !NAN((float)DAT_023dccf4))) {
          if ((fVar9 == DAT_023dccf4._4_4_) && (!NAN(fVar9) && !NAN(DAT_023dccf4._4_4_))) {
            uVar6 = CONCAT44(DAT_023dccec._4_4_,(float)DAT_023dccec);
          }
        }
      }
    }
    cVar3 = FUN_00d05410((int)param_1);
    if (cVar3 != '\0') {
      (**(code **)(*unaff_RDI + 0x938))();
      fVar10 = (float)DAT_023dccf4;
      if (0.0 < (float)((ulonglong)uVar6 >> 0x20)) {
        fVar10 = (float)uVar6;
      }
      fVar9 = (float)DAT_023dccf4;
      if (0.0 < (float)uVar6) {
        fVar9 = fVar10;
      }
      if (((0.0 < fVar9) && ((longlong *)unaff_RDI[0x28] != (longlong *)0x0)) &&
         (cVar3 = (**(code **)(*(longlong *)unaff_RDI[0x28] + 0xb0))(), cVar3 != '\0')) {
        FUN_01a3e470();
        if (local_40 == 0) goto LAB_01a3ec12;
        bVar2 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_01a3ea29;
      }
    }
    bVar2 = false;
    lVar4 = 0;
  }
  else {
    (**(code **)(*unaff_RDI + 0x938))();
    fVar8 = (float)DAT_023dccf4;
    if (0.0 < fVar9) {
      fVar8 = fVar10;
    }
    fVar7 = (float)DAT_023dccf4;
    if (0.0 < fVar10) {
      fVar7 = fVar8;
    }
    if (((fVar7 <= 0.0) || ((longlong *)unaff_RDI[0x28] == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*(longlong *)unaff_RDI[0x28] + 0xb0))(), cVar3 == '\0'))
    goto LAB_01a3e94e;
    FUN_01a3e180();
    if (local_40 == 0) {
LAB_01a3ec12:
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
  }
LAB_01a3ea29:
  FUN_01e4ace0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != lVar4) {
    FUN_01e4ac90();
  }
  if ((bVar2) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
LAB_01a3ea8f:
  if ((bVar1) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}


