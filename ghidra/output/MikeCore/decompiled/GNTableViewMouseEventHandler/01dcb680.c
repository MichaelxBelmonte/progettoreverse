// Function: FUN_01dcb680
// Address: 01dcb680
// Size: 1555 bytes
// Class: GNTableViewMouseEventHandler


void FUN_01dcb680(void)

{
  float fVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong *unaff_RDI;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM1 [16];
  longlong local_80;
  char local_78;
  float local_68;
  float local_64;
  undefined8 extraout_XMM0_Qb;
  
  if (*(int *)(unaff_RDI[0x2c] + 0xc) != 0) {
    (**(code **)(*unaff_RDI + 0x7b0))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      *(int *)(unaff_RDI + 0x50) = (int)unaff_RDI[0x50] + 1;
      (**(code **)(*unaff_RDI + 0x7b0))();
      FUN_01e3f820();
      auVar13 = in_XMM1;
      FUN_01e3f820();
      auVar12 = blendps(in_XMM1,auVar13,2);
      (**(code **)(*unaff_RDI + 0x4e8))(auVar12._0_8_);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      FUN_01e3f820();
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_025683c0;
      pcVar2 = DAT_025683d8;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025683c0;
      (*pcVar2)();
      FUN_00c92170();
      lVar5 = unaff_RDI[0x2c];
      fVar1 = auVar13._0_4_;
      if (0 < *(int *)(lVar5 + 0xc)) {
        local_64 = 0.0;
        lVar8 = 0;
        local_68 = 0.0;
        do {
          lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar8 * 8);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          fVar9 = (float)(**(code **)(*unaff_RDI + 0x960))();
          fVar10 = (float)(**(code **)(*unaff_RDI + 0x968))();
          fVar11 = (float)FUN_01db9a50();
          if (fVar11 < fVar9) {
            FUN_01db96b0();
          }
          fVar11 = (float)FUN_01db9a50();
          if (fVar10 < fVar11) {
            FUN_01db96b0();
          }
          auVar13._0_8_ = FUN_01db9a50();
          iVar7 = *(int *)(puVar3 + 3);
          FUN_00c8e340(auVar13._0_8_,1);
          *(int *)(puVar3[2] + (longlong)iVar7) = (int)auVar13._0_8_;
          iVar7 = *(int *)(puVar4 + 3);
          FUN_00c8e340();
          *(bool *)(puVar4[2] + (longlong)iVar7) = fVar9 != fVar10;
          if ((fVar9 != fVar10) || (NAN(fVar9) || NAN(fVar10))) {
            fVar9 = (float)FUN_01db9a50();
            local_68 = local_68 + fVar9;
          }
          else {
            fVar9 = (float)FUN_01db9a50();
            local_64 = local_64 + fVar9;
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
          lVar5 = unaff_RDI[0x2c];
        } while (lVar8 < *(int *)(lVar5 + 0xc));
        if (0 < *(int *)(lVar5 + 0xc)) {
          lVar8 = 0;
          do {
            if (*(char *)(puVar4[2] + lVar8) != '\0') {
              lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar8 * 8);
              if (lVar5 != 0) {
                FUN_00d50b00();
              }
              fVar9 = *(float *)(puVar3[2] + lVar8 * 4);
              fVar10 = (float)(**(code **)(*unaff_RDI + 0x960))();
              auVar13._0_8_ = (**(code **)(*unaff_RDI + 0x968))();
              auVar13._8_8_ = extraout_XMM0_Qb;
              auVar12 = ZEXT416((uint)(fVar9 * ((fVar1 - local_64) / local_68)));
              auVar12 = roundss(auVar12,auVar12,9);
              if (fVar10 <= auVar12._0_4_) {
                fVar10 = auVar12._0_4_;
              }
              if (fVar10 <= (float)auVar13._0_8_) {
                auVar12._4_12_ = auVar13._4_12_;
                auVar12._0_4_ = fVar10;
                auVar13._0_8_ = auVar12._0_8_;
              }
              FUN_01db96b0(auVar13._0_8_);
              if (lVar5 != 0) {
                FUN_00d50b20();
              }
            }
            lVar8 = lVar8 + 1;
            lVar5 = unaff_RDI[0x2c];
          } while (lVar8 < *(int *)(lVar5 + 0xc));
        }
      }
      iVar7 = 0;
      do {
        fVar9 = (float)FUN_01dd38e0();
        if (fVar1 <= fVar9) break;
        lVar5 = *(longlong *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + (longlong)iVar7 * 8);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        fVar9 = (float)FUN_01db9a50();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        fVar10 = (float)(**(code **)(*unaff_RDI + 0x968))();
        if (fVar9 < fVar10) {
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + (longlong)iVar7 * 8);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          FUN_01db96b0(fVar9 + DAT_02390124);
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        iVar7 = iVar7 + 1;
        if (*(int *)(unaff_RDI[0x2c] + 0xc) <= iVar7) {
          iVar7 = 0;
        }
        fVar9 = (float)FUN_01dd38e0();
        if (*(int *)(unaff_RDI[0x2c] + 0xc) < 1) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = 0.0;
          iVar6 = 0;
          do {
            fVar11 = (float)(**(code **)(*unaff_RDI + 0x968))();
            fVar10 = fVar10 + fVar11;
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(unaff_RDI[0x2c] + 0xc));
        }
      } while (fVar9 < fVar10);
      do {
        fVar9 = (float)FUN_01dd38e0();
        if (fVar9 <= fVar1) break;
        lVar5 = *(longlong *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + (longlong)iVar7 * 8);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        fVar9 = (float)FUN_01db9a50();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        fVar10 = (float)(**(code **)(*unaff_RDI + 0x960))();
        if (fVar10 < fVar9) {
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + (longlong)iVar7 * 8);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          FUN_01db96b0(fVar9 + DAT_02390d00);
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        iVar7 = iVar7 + 1;
        if (*(int *)(unaff_RDI[0x2c] + 0xc) <= iVar7) {
          iVar7 = 0;
        }
        fVar9 = (float)FUN_01dd38e0();
        if (*(int *)(unaff_RDI[0x2c] + 0xc) < 1) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = 0.0;
          iVar6 = 0;
          do {
            fVar11 = (float)(**(code **)(*unaff_RDI + 0x960))();
            fVar10 = fVar10 + fVar11;
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(unaff_RDI[0x2c] + 0xc));
        }
      } while (fVar10 < fVar9);
      *(int *)(unaff_RDI + 0x50) = (int)unaff_RDI[0x50] + -1;
      (**(code **)(*unaff_RDI + 0xa20))();
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


