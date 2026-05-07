// Function: FUN_019be470
// Address: 019be470
// Size: 506 bytes
// Class: MUEditorElementView


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019be470(double param_1)

{
  float fVar1;
  char cVar2;
  char cVar3;
  longlong *unaff_RDI;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((longlong *)unaff_RDI[0x69] == (longlong *)0x0) {
    dVar8 = (double)unaff_RDI[0x53];
    cVar2 = '\0';
    if ((dVar8 == param_1) && (cVar2 = '\0', !NAN(dVar8) && !NAN(param_1))) goto LAB_019be59f;
  }
  else {
    cVar2 = (**(code **)(*(longlong *)unaff_RDI[0x69] + 0x50))();
    dVar8 = (double)unaff_RDI[0x53];
    if ((dVar8 == param_1) && (!NAN(dVar8) && !NAN(param_1))) {
LAB_019be59f:
      if (*(char *)((longlong)unaff_RDI + 0x454) != cVar2) {
        (**(code **)(&UNK_00001560 + *unaff_RDI))(param_1);
      }
      goto LAB_019be64c;
    }
  }
  uVar4 = (**(code **)(*unaff_RDI + 0x938))
                    (~-(ulonglong)(!NAN(dVar8) && !NAN(dVar8)) & (ulonglong)param_1 |
                     (ulonglong)dVar8 & -(ulonglong)(!NAN(dVar8) && !NAN(dVar8)));
  unaff_RDI[0x53] = (longlong)param_1;
  local_38 = (**(code **)(*unaff_RDI + 0x938))();
  uStack_30 = extraout_XMM0_Qb_00;
  auVar10 = _local_38;
  (**(code **)(&UNK_00001560 + *unaff_RDI))(param_1);
  cVar3 = (**(code **)(*unaff_RDI + 0xef8))();
  if (cVar3 != '\0') {
    auVar6._8_8_ = extraout_XMM0_Qb;
    auVar6._0_8_ = uVar4;
    fVar1 = (float)uVar4;
    local_38._4_4_ = (uint)((ulonglong)local_38 >> 0x20);
    uStack_30._0_4_ = (uint)extraout_XMM0_Qb_00;
    uStack_30._4_4_ = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    if (DAT_023908ec <= (float)(_DAT_02390140 & (uint)(fVar1 - (float)local_38))) {
      auVar12._0_4_ = fVar1 + DAT_023b8b2c;
      auVar12._4_12_ = auVar6._4_12_;
      insertps(_DAT_0241b5f0,(int)unaff_RDI[0x23],0x10);
      blendps(auVar12,ZEXT416(0),0xe);
      (**(code **)(*unaff_RDI + 0x618))();
      auVar7._4_12_ = auVar10._4_12_;
      auVar7._0_4_ = (float)local_38 + DAT_023b8b2c;
      auVar10 = blendps(auVar7,_DAT_0238ff00,0xe);
      uVar4 = auVar10._0_8_;
      auVar10 = _DAT_0241b5f0;
    }
    else {
      if ((float)local_38 <= fVar1) {
        auVar6._0_4_ = (float)local_38;
      }
      auVar11._4_12_ = auVar6._4_12_;
      auVar11._0_4_ = auVar6._0_4_ + DAT_023b8b2c;
      auVar9._4_4_ = local_38._4_4_ & (uint)((ulonglong)uVar4 >> 0x20);
      auVar9._0_4_ = (uint)((float)local_38 - fVar1) & -(uint)(fVar1 < (float)local_38);
      auVar9._8_4_ = (uint)uStack_30 & (uint)extraout_XMM0_Qb;
      auVar9._12_4_ = uStack_30._4_4_ & (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar9 = ZEXT416(~-(uint)(fVar1 < (float)local_38) & (uint)(fVar1 - (float)local_38)) | auVar9
      ;
      auVar10._4_12_ = auVar9._4_12_;
      auVar10._0_4_ = auVar9._0_4_ + DAT_02390d28;
      auVar5._0_12_ = ZEXT812(0);
      auVar5._12_4_ = 0;
      auVar6 = blendps(auVar5,auVar11,1);
      uVar4 = auVar6._0_8_;
    }
    auVar10 = insertps(auVar10,(int)unaff_RDI[0x23],0x10);
    (**(code **)(*unaff_RDI + 0x618))();
    if (cVar2 != '\0') {
      local_28 = auVar10._0_8_;
      (**(code **)(*unaff_RDI + 0x910))(uVar4,local_28);
    }
  }
LAB_019be64c:
  (**(code **)(&DAT_000015b0 + *unaff_RDI))();
  *(char *)((longlong)unaff_RDI + 0x454) = cVar2;
  return;
}


