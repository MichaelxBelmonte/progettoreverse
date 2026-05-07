// Function: FUN_00b2b4d0
// Address: 00b2b4d0
// Size: 690 bytes
// Class: GNData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b2b4d0(void)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  char *pcVar11;
  ulonglong uVar12;
  longlong *unaff_RDI;
  float fVar13;
  float fVar14;
  uint uVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar16 [16];
  undefined1 local_78 [16];
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  
  if (0 < *(int *)(unaff_RDI[0x27] + 0xc)) {
    FUN_00d23310();
    pcVar11 = local_38;
    if (local_58[0] != '\0') {
      pcVar11 = local_58;
    }
    local_38[0] = local_58[0];
    *pcVar11 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    if (local_60 != 0) {
      FUN_00d50b20();
      bVar1 = *(byte *)(unaff_RDI + 0x28);
      if ((ulonglong)bVar1 != 0) {
        uVar12 = 0;
        do {
          if (unaff_RDI[0x27] == 0) {
            uVar15 = 0;
          }
          else {
            local_58[0] = '\0';
            local_48 = 0xffffffff;
            local_40 = 0;
            local_78 = ZEXT816(0);
            local_50 = unaff_RDI[0x27];
            while( true ) {
              iVar10 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar10);
              uVar15 = local_78._4_4_;
              if (*(int *)(local_50 + 0xc) <= iVar10) break;
              bVar9 = FUN_00b33590();
              if (uVar12 < bVar9) {
                uVar7 = FUN_00b29d30();
                uVar4 = FUN_00b29d60();
                auVar6._8_4_ = extraout_XMM0_Dc;
                auVar6._0_8_ = uVar7;
                auVar6._12_4_ = extraout_XMM0_Dd;
                auVar16._8_4_ = extraout_XMM0_Dc_00;
                auVar16._0_8_ = uVar4;
                auVar16._12_4_ = extraout_XMM0_Dd_00;
                auVar16 = insertps(auVar6,auVar16,0x10);
                auVar5._4_4_ = -(uint)((float)(uVar15 & _UNK_02390144) <
                                      (float)(auVar16._4_4_ & _UNK_02390144));
                auVar5._0_4_ = -(uint)((float)(local_78._0_4_ & _DAT_02390140) <
                                      (float)(auVar16._0_4_ & _DAT_02390140));
                auVar5._8_4_ = -(uint)((float)(local_78._8_4_ & _UNK_02390148) <
                                      (float)(auVar16._8_4_ & _UNK_02390148));
                auVar5._12_4_ =
                     -(uint)((float)(local_78._12_4_ & _UNK_0239014c) <
                            (float)(auVar16._12_4_ & _UNK_0239014c));
                local_78 = blendvps(local_78,auVar16,auVar5);
              }
              else {
              }
              if (local_48._4_4_ != 0) {
                if (local_48._4_4_ < 1) {
                  iVar10 = -local_48._4_4_;
                }
                else {
                  iVar10 = (int)local_48 - local_48._4_4_;
                  local_48._4_4_ = (int)((ulonglong)local_48 >> 0x20);
                  local_48 = CONCAT44(local_48._4_4_,iVar10);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar10 = 0;
                }
                local_48 = CONCAT44(iVar10,(int)local_48);
              }
            }
            FUN_00b2e140();
          }
          fVar13 = (float)FUN_00aea6b0();
          fVar14 = 0.0;
          if (0.0 <= fVar13 / *(float *)(unaff_RDI + 0x2a)) {
            fVar14 = fVar13 / *(float *)(unaff_RDI + 0x2a);
          }
          fVar13 = DAT_02390124;
          if (fVar14 <= DAT_02390124) {
            fVar13 = fVar14;
          }
          fVar14 = *(float *)(*(longlong *)(unaff_RDI[0x2b] + 0x10) + uVar12 * 4);
          if ((fVar13 != fVar14) || (NAN(fVar13) || NAN(fVar14))) {
            *(float *)(*(longlong *)(unaff_RDI[0x2b] + 0x10) + uVar12 * 4) = fVar13;
            bVar8 = true;
            fVar14 = fVar13;
          }
          else {
            bVar8 = false;
          }
          lVar2 = *(longlong *)(unaff_RDI[0x2c] + 0x10);
          lVar3 = *(longlong *)(unaff_RDI[0x2e] + 0x10);
          fVar13 = *(float *)(lVar2 + uVar12 * 4);
          if (fVar14 <= fVar13) {
            iVar10 = *(int *)(lVar3 + uVar12 * 4);
            if (iVar10 < 0x28) goto LAB_00b2b728;
            if (fVar13 <= DAT_0239424c) goto LAB_00b2b72e;
            *(float *)(lVar2 + uVar12 * 4) = fVar13 + _DAT_023d5650;
LAB_00b2b732:
            (**(code **)(*unaff_RDI + 0x620))();
          }
          else {
            *(float *)(lVar2 + uVar12 * 4) = fVar14;
            iVar10 = 0;
            bVar8 = true;
LAB_00b2b728:
            *(int *)(lVar3 + uVar12 * 4) = iVar10 + 1;
LAB_00b2b72e:
            if (bVar8) goto LAB_00b2b732;
          }
          fVar13 = (float)FUN_00aea6b0(uVar15);
          fVar13 = fVar13 / *(float *)(unaff_RDI + 0x2a);
          fVar14 = *(float *)(*(longlong *)(unaff_RDI[0x2d] + 0x10) + uVar12 * 4);
          if ((fVar14 != fVar13) || (NAN(fVar14) || NAN(fVar13))) {
            *(float *)(*(longlong *)(unaff_RDI[0x2d] + 0x10) + uVar12 * 4) = fVar13;
            (**(code **)(*unaff_RDI + 0x620))();
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != bVar1);
      }
    }
  }
  return;
}


