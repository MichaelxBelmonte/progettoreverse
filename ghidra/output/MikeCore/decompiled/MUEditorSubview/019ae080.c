// Function: FUN_019ae080
// Address: 019ae080
// Size: 562 bytes
// Class: MUEditorSubview


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019ae080(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  char in_DL;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 in_XMM1_Dd;
  undefined1 local_48 [24];
  undefined8 uVar8;
  
  fVar6 = (float)((ulonglong)param_2 >> 0x20);
  lVar4 = *unaff_RSI;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0xc) < 1) {
      local_48._0_8_ = 0;
    }
    else {
      lVar5 = 0;
      local_48._0_16_ = ZEXT816(0);
      auVar9._0_4_ = 0.0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar5 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        fVar6 = (float)(**(code **)(*unaff_RDI + 0xc38))();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        fVar1 = fVar6;
        if (lVar5 == 0) {
          local_48._0_16_ = ZEXT416((uint)fVar6);
        }
        else {
          if (auVar9._0_4_ <= fVar6) {
            fVar1 = auVar9._0_4_;
          }
          if ((float)local_48._0_4_ < fVar6) {
            local_48._0_16_ = ZEXT416((uint)fVar6);
          }
        }
        in_XMM1_Dd = 0;
        fVar6 = 0.0;
        lVar5 = lVar5 + 1;
        lVar4 = *unaff_RSI;
        auVar9._0_4_ = fVar1;
      } while (lVar5 < *(int *)(lVar4 + 0xc));
      auVar9 = insertps(local_48._0_16_,fVar1,0x10);
      local_48._0_8_ = auVar9._0_8_;
    }
    FUN_01e436c0();
    if (DAT_023908ec <= fVar6) {
      dVar7 = (double)(**(code **)(*unaff_RDI + 0x928))();
      if (in_DL == '\0') {
        auVar3._4_4_ = fVar6;
        auVar3._0_4_ = fVar6;
        auVar3._8_4_ = in_XMM1_Dd;
        auVar3._12_4_ = in_XMM1_Dd;
        auVar11._4_12_ = auVar3._4_12_;
        auVar11._0_4_ =
             fVar6 / (((float)local_48._0_4_ + _DAT_0241b5b0) -
                     ((float)local_48._4_4_ + _UNK_0241b5b4));
        uVar8 = auVar11._0_8_;
      }
      else {
        auVar2._4_4_ = fVar6;
        auVar2._0_4_ = fVar6;
        auVar2._8_4_ = in_XMM1_Dd;
        auVar2._12_4_ = in_XMM1_Dd;
        do {
          local_48._0_4_ = (float)local_48._0_4_ + _DAT_0241b5b0;
          local_48._4_4_ = (float)local_48._4_4_ + _UNK_0241b5b4;
          auVar10._4_12_ = auVar2._4_12_;
          auVar10._0_4_ = fVar6 / ((float)local_48._0_4_ - (float)local_48._4_4_);
          uVar8 = auVar10._0_8_;
        } while ((float)dVar7 < auVar10._0_4_ * DAT_0241b644);
        auVar9._0_4_ = auVar10._0_4_;
        if (in_DL != '\0') {
          while (DAT_023908e0 * auVar9._0_4_ < DAT_02390d28) {
            local_48._0_4_ = (float)local_48._0_4_ + _DAT_0241b5c0;
            local_48._4_4_ = (float)local_48._4_4_ + _UNK_0241b5c4;
            auVar9._0_4_ = fVar6 / ((float)local_48._0_4_ - (float)local_48._4_4_);
            auVar9._4_12_ = auVar10._4_12_;
            uVar8 = auVar9._0_8_;
          }
        }
      }
      (**(code **)(*unaff_RDI + 0xc08))(uVar8);
      (**(code **)(*unaff_RDI + 0x540))();
      (**(code **)(*unaff_RDI + 0xa48))();
      FUN_00e7b4f0();
      (**(code **)(*unaff_RDI + 0xaa0))();
    }
  }
  return;
}


