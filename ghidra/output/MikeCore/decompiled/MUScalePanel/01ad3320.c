// Function: FUN_01ad3320
// Address: 01ad3320
// Size: 525 bytes
// Class: MUScalePanel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad3320(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  float fVar3;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  fVar3 = *(float *)(unaff_RSI + 0x61);
  if ((fVar3 == 0.0) && (!NAN(fVar3))) {
    FUN_00d50b00();
    uVar4 = FUN_01a1da00();
    fVar3 = (float)uVar4 * DAT_02390438;
    auVar7._0_4_ = (uint)fVar3 & _DAT_023945e0;
    auVar7._4_4_ = (uint)((ulonglong)uVar4 >> 0x20) & _UNK_023945e4;
    auVar7._8_4_ = (uint)extraout_XMM0_Qb & _UNK_023945e8;
    auVar7._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20) & _UNK_023945ec;
    auVar8._4_12_ = SUB1612(auVar7 | ZEXT416(DAT_02394dc8),4);
    auVar8._0_4_ = SUB164(auVar7 | ZEXT416(DAT_02394dc8),0) + fVar3;
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    auVar5 = roundss(auVar5,auVar8,0xb);
    fVar3 = DAT_02392fd8;
    if (auVar5._0_4_ <= DAT_02392fd8) {
      fVar3 = auVar5._0_4_;
    }
    auVar5 = roundss(ZEXT816(0),
                     ZEXT416((uint)((float)(_DAT_023945e0 & (uint)(fVar3 * DAT_0241f368) |
                                           DAT_02394dc8) + fVar3 * DAT_0241f368)),0xb);
    fVar3 = DAT_023908ec;
    if (auVar5._0_4_ <= DAT_023908ec) {
      fVar3 = auVar5._0_4_;
    }
    *(float *)(unaff_RSI + 0x61) = fVar3;
    FUN_00d50b20();
    fVar3 = *(float *)(unaff_RSI + 0x61);
  }
  if (fVar3 < DAT_02390d30) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  lVar2 = unaff_RSI[0x60];
  if (lVar2 != 0) goto LAB_01ad34fe;
  (**(code **)(*unaff_RSI + 0x640))();
  (**(code **)(*local_40 + 0x370))();
  auVar5 = ZEXT416(_DAT_023945e0 & (uint)*(float *)(unaff_RSI + 0x61)) | _DAT_023945f0;
  auVar6._4_12_ = auVar5._4_12_;
  auVar6._0_4_ = auVar5._0_4_ + *(float *)(unaff_RSI + 0x61);
  auVar5 = roundss(ZEXT816(0),auVar6,0xb);
  FUN_01d44d80(auVar5._0_8_);
  lVar2 = unaff_RSI[0x60];
  lVar1 = lVar2;
  if (lVar2 != local_30) {
    lVar1 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar1 = 0;
        goto LAB_01ad3474;
      }
      FUN_00d50b00();
      lVar2 = unaff_RSI[0x60];
      unaff_RSI[0x60] = local_30;
    }
    else {
      local_28 = '\0';
LAB_01ad3474:
      unaff_RSI[0x60] = lVar1;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar1 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = unaff_RSI[0x60];
LAB_01ad34fe:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


