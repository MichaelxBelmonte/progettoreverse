// Function: FUN_01d38830
// Address: 01d38830
// Size: 624 bytes
// Class: MUSpectrumShaper


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d38830(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong unaff_RDI;
  undefined8 uVar8;
  undefined8 in_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  float local_48;
  float fStack_44;
  longlong local_38;
  char local_30;
  
  local_48 = (float)param_1;
  fStack_44 = (float)((ulonglong)param_1 >> 0x20);
  *(undefined1 *)(unaff_RDI + 0x48) = 0;
  FUN_01d38ea0();
  iVar3 = *(int *)(local_38 + 0x18);
  if (local_30 != '\0') {
    FUN_00d50b20();
  }
  if (0x36 < iVar3 + 0x1bU) {
    if (0x53 < iVar3) {
      FUN_01d38ea0();
      lVar4 = *(longlong *)(local_38 + 0x10);
      if (local_30 != '\0') {
        FUN_00d50b20();
      }
      FUN_01d38ea0();
      lVar5 = *(longlong *)(local_38 + 0x10);
      if (local_30 != '\0') {
        FUN_00d50b20();
      }
      lVar6 = (ulonglong)(iVar3 / 0x1c - 1) * 0x1c;
      lVar7 = (ulonglong)(iVar3 / 0x1c - 2) * 0x1c;
      if (((*(int *)(lVar4 + lVar7) == 0) || (*(int *)(lVar4 + lVar7) == 1)) &&
         (*(int *)(lVar5 + lVar6) == 1)) {
        fVar1 = *(float *)(lVar5 + 4 + lVar6);
        fVar11 = *(float *)(lVar5 + 8 + lVar6);
        fVar2 = *(float *)(lVar4 + 4 + lVar7);
        fVar13 = *(float *)(lVar4 + 8 + lVar7);
        auVar9 = insertps(ZEXT416((uint)fVar1),local_48,0x1c);
        auVar12 = insertps(ZEXT416((uint)fVar2),ZEXT416((uint)fVar1),0x10);
        auVar10._0_4_ = auVar9._0_4_ - auVar12._0_4_;
        auVar10._4_4_ = auVar9._4_4_ - auVar12._4_4_;
        auVar10._8_4_ = auVar9._8_4_ - auVar12._8_4_;
        auVar10._12_4_ = auVar9._12_4_ - auVar12._12_4_;
        if (((auVar10._0_4_ != auVar10._4_4_) || (auVar10._0_4_ != 0.0)) || (NAN(auVar10._0_4_))) {
          auVar9._8_8_ = in_XMM0_Qb;
          auVar9._0_8_ = param_1;
          auVar9 = blendps(auVar9,ZEXT416((uint)fVar11),1);
          auVar14 = insertps(ZEXT416((uint)fVar13),ZEXT416((uint)fVar11),0x10);
          fVar11 = auVar9._0_4_ - auVar14._0_4_;
          fVar13 = auVar9._4_4_ - auVar14._4_4_;
          auVar12._0_8_ = CONCAT44(fVar13,fVar11);
          auVar12._8_4_ = auVar9._8_4_ - auVar14._8_4_;
          auVar12._12_4_ = auVar9._12_4_ - auVar14._12_4_;
          if (((fVar11 != fVar13) || (fVar11 != 0.0)) || (NAN(fVar11))) {
            fVar1 = *(float *)(unaff_RDI + 0xc);
            if (((fVar1 != 0.0) || (NAN(fVar1))) &&
               ((((auVar10._0_4_ != 0.0 || (NAN(auVar10._0_4_))) &&
                 ((auVar10._4_4_ != 0.0 || (NAN(auVar10._4_4_))))) &&
                ((auVar14._8_4_ = auVar12._8_4_, auVar14._0_8_ = auVar12._0_8_,
                 auVar14._12_4_ = auVar12._12_4_, auVar9 = divps(auVar14,auVar10),
                 (float)((uint)(auVar9._0_4_ - auVar9._4_4_) & _DAT_02390140) <= fVar1 ||
                 (auVar9 = divps(auVar10,auVar12),
                 (float)((uint)(auVar9._0_4_ - auVar9._4_4_) & _DAT_02390140) <= fVar1)))))) {
              *(undefined8 *)(lVar5 + 4 + lVar6) = param_1;
              return;
            }
          }
          else if (((fVar2 <= fVar1) && (fVar1 <= local_48)) ||
                  ((fVar1 <= fVar2 && (local_48 <= fVar1)))) {
            *(float *)(lVar6 + lVar5 + 4) = local_48;
            return;
          }
        }
        else if (((fVar13 <= fVar11) && (fVar11 <= fStack_44)) ||
                ((fVar11 <= fVar13 && (fStack_44 <= fVar11)))) {
          *(float *)(lVar6 + lVar5 + 8) = fStack_44;
          return;
        }
      }
    }
    uVar8 = FUN_01d38ea0();
    iVar3 = *(int *)(local_38 + 0x18);
    FUN_00c8e340(uVar8,1);
    lVar4 = *(longlong *)(local_38 + 0x10);
    *(undefined4 *)(lVar4 + iVar3) = 1;
    *(undefined8 *)(lVar4 + 4 + (longlong)iVar3) = param_1;
    if (local_30 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  FUN_01d39180();
  return;
}


