// Function: FUN_01b64ab0
// Address: 01b64ab0
// Size: 2670 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01b65283) */
/* WARNING: Removing unreachable block (ram,0x01b6528c) */
/* WARNING: Removing unreachable block (ram,0x01b65307) */
/* WARNING: Removing unreachable block (ram,0x01b651fc) */
/* WARNING: Removing unreachable block (ram,0x01b65205) */
/* WARNING: Removing unreachable block (ram,0x01b650fc) */
/* WARNING: Removing unreachable block (ram,0x01b65105) */
/* WARNING: Removing unreachable block (ram,0x01b6547e) */
/* WARNING: Removing unreachable block (ram,0x01b65487) */
/* WARNING: Removing unreachable block (ram,0x01b6517c) */
/* WARNING: Removing unreachable block (ram,0x01b65185) */
/* WARNING: Removing unreachable block (ram,0x01b64ca3) */
/* WARNING: Removing unreachable block (ram,0x01b64caf) */
/* WARNING: Removing unreachable block (ram,0x01b653c5) */
/* WARNING: Removing unreachable block (ram,0x01b64b8d) */
/* WARNING: Removing unreachable block (ram,0x01b64b96) */
/* WARNING: Removing unreachable block (ram,0x01b65366) */
/* WARNING: Removing unreachable block (ram,0x01b65428) */
/* WARNING: Removing unreachable block (ram,0x01b65431) */
/* WARNING: Removing unreachable block (ram,0x01b654d0) */
/* WARNING: Removing unreachable block (ram,0x01b654d9) */
/* WARNING: Removing unreachable block (ram,0x01b64fb0) */
/* WARNING: Removing unreachable block (ram,0x01b64fb9) */
/* WARNING: Removing unreachable block (ram,0x01b64fe9) */
/* WARNING: Removing unreachable block (ram,0x01b64ff5) */
/* WARNING: Removing unreachable block (ram,0x01b65021) */
/* WARNING: Removing unreachable block (ram,0x01b6502d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b64ab0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar8 = local_40;
  fVar20 = (float)((ulonglong)param_2 >> 0x20);
  fVar11 = (float)param_2;
  if (unaff_RDI[0x27] == 0) goto LAB_01b64c7a;
  iVar7 = FUN_01d3a5a0();
  if (iVar7 != 7) {
    if (((unaff_RDI[0x27] != 0) && (iVar7 = FUN_01d3a5a0(), iVar7 == 1)) &&
       (iVar7 = FUN_01d3b630(), iVar7 == 1)) {
      FUN_01b57f70();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e3f820();
      if (*(int *)((longlong)unaff_RDI + 0x144) < (int)unaff_RDI[0x28]) {
        local_64 = 0.0;
        local_58 = DAT_02390124;
        local_60 = DAT_0239011c;
        local_5c = DAT_0239011c;
      }
      else {
        lVar10 = (longlong)(int)unaff_RDI[0x28] + -1;
        do {
          local_64 = (float)FUN_00d459e0();
          local_60 = (float)FUN_00d459e0();
          local_5c = (float)FUN_00d459e0();
          local_58 = (float)FUN_00d459e0();
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((longlong)unaff_RDI + 0x144));
      }
      FUN_01d3abf0();
      fVar12 = (float)FUN_01e466c0();
      bVar2 = fVar12 < DAT_023908ec;
      fVar21 = DAT_02394248 + fVar11;
      fVar17 = fVar20 + DAT_02390d00;
      fVar22 = DAT_02390d00 + fVar11;
LAB_01b64de0:
      (**(code **)(*unaff_RDI + 0x658))();
      lVar10 = *unaff_RSI;
      if (lVar10 == local_40) {
        if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01b64e74;
          }
LAB_01b64e32:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          local_38 = '\0';
        }
        lVar10 = *unaff_RSI;
      }
      else {
        lVar4 = unaff_RSI[1];
        if (local_38 != '\0') {
          *unaff_RSI = local_40;
          if (((char)lVar4 != '\0') && (lVar10 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01b64e32;
        }
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = local_40;
        if (((char)lVar4 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
LAB_01b64e74:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        lVar10 = *unaff_RSI;
      }
      if (lVar10 != 0) {
        iVar7 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (iVar7 == 6) goto LAB_01b6550c;
        iVar7 = FUN_01d3a5a0();
        if (iVar7 == 5) {
          FUN_01d3abf0();
          auVar16._0_8_ = FUN_01e466c0();
          auVar16._8_8_ = extraout_XMM0_Qb;
          if ((float)auVar16._0_8_ <= fVar21) {
            if ((float)auVar16._0_8_ < DAT_023908ec) {
              auVar16 = blendps(auVar16,_DAT_023b1e70,0xd);
            }
          }
          else {
            auVar16 = blendps(auVar16,ZEXT416((uint)fVar21),1);
          }
          uVar15 = auVar16._0_8_;
          if (auVar16._4_4_ <= fVar20) {
            if (auVar16._4_4_ < 0.0) {
              auVar16 = blendps(auVar16,_DAT_0238ff00,2);
              uVar15 = auVar16._0_8_;
            }
          }
          else {
            auVar3._4_4_ = fVar20;
            auVar3._0_4_ = fVar11;
            auVar3._8_4_ = in_XMM1_Dc;
            auVar3._12_4_ = in_XMM1_Dd;
            auVar16 = blendps(auVar16,auVar3,2);
            uVar15 = auVar16._0_8_;
          }
          fVar18 = (fVar20 - (float)((ulonglong)uVar15 >> 0x20)) / fVar17;
          fVar5 = fVar18;
          fVar6 = local_58;
          if ((DAT_023908ec <= fVar12) &&
             (fVar5 = local_64, fVar6 = fVar18, fVar12 < fVar21 || bVar2)) {
            local_60 = (float)uVar15 / fVar22;
            local_5c = fVar18;
            fVar6 = local_58;
          }
          local_58 = fVar6;
          local_64 = fVar5;
          iVar7 = (int)unaff_RDI[0x28];
          if (iVar7 <= *(int *)((longlong)unaff_RDI + 0x144)) {
            dVar13 = (double)local_64;
            dVar14 = (double)local_58;
            iVar9 = iVar7 * 4;
            do {
              uVar15 = FUN_00d46dc0();
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar15 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d233f0(uVar15,iVar9);
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              uVar15 = FUN_00d46dc0();
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar15 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d233f0(uVar15,iVar9 + 1);
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              uVar15 = FUN_00d46dc0();
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar15 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d233f0(uVar15,iVar9 + 2);
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              uVar15 = FUN_00d46dc0();
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar15 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_40 = local_50;
              FUN_00d233f0(uVar15,iVar9 + 3);
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              uVar19 = SUB84((double)local_60,0);
              uVar23 = SUB84((double)local_5c,0);
              if (iVar7 == 0) {
                FUN_01b57fb0(dVar13,uVar19,uVar23,dVar14);
                lVar10 = unaff_RDI[0x29];
                if (lVar10 != local_50) {
                  if (local_50 == 0) {
                    unaff_RDI[0x29] = 0;
                  }
                  else {
                    FUN_00d50b00();
                    lVar10 = unaff_RDI[0x29];
                    unaff_RDI[0x29] = local_50;
                  }
                  if (lVar10 != 0) {
                    FUN_00d50b20();
                  }
                }
              }
              else if (iVar7 == 1) {
                FUN_01b57fb0(dVar13,uVar19,uVar23,dVar14);
                lVar10 = unaff_RDI[0x2a];
                if (lVar10 != local_50) {
                  if (local_50 == 0) {
                    unaff_RDI[0x2a] = 0;
                  }
                  else {
                    FUN_00d50b00();
                    lVar10 = unaff_RDI[0x2a];
                    unaff_RDI[0x2a] = local_50;
                  }
                  if (lVar10 != 0) {
                    FUN_00d50b20();
                  }
                }
              }
              else if (iVar7 == 2) {
                FUN_01b57fb0(dVar13,uVar19,uVar23,dVar14);
                lVar10 = unaff_RDI[0x2b];
                if (lVar10 != local_50) {
                  if (local_50 == 0) {
                    unaff_RDI[0x2b] = 0;
                  }
                  else {
                    FUN_00d50b00();
                    lVar10 = unaff_RDI[0x2b];
                    unaff_RDI[0x2b] = local_50;
                  }
                  if (lVar10 != 0) {
                    FUN_00d50b20();
                  }
                }
              }
              local_38 = '\0';
              iVar9 = iVar9 + 4;
              bVar1 = iVar7 < *(int *)((longlong)unaff_RDI + 0x144);
              iVar7 = iVar7 + 1;
            } while (bVar1);
          }
          FUN_01b57e50();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          FUN_01b57030();
          FUN_01b57030();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
        goto LAB_01b64de0;
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
LAB_01b6550c:
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
    }
    goto LAB_01b64c7a;
  }
  fVar11 = (float)FUN_01d3b640();
  iVar7 = (int)unaff_RDI[0x28];
  if (fVar11 <= 0.0) {
    if (iVar7 == 2) {
      if (*(int *)((longlong)unaff_RDI + 0x144) == 2) {
LAB_01b64c36:
        lVar8 = 0x100000001;
        goto LAB_01b64c65;
      }
    }
    else if (iVar7 == 1) {
      if (*(int *)((longlong)unaff_RDI + 0x144) == 1) goto LAB_01b64c4d;
    }
    else if ((iVar7 == 0) && (*(int *)((longlong)unaff_RDI + 0x144) == 0)) goto LAB_01b64c12;
LAB_01b64c5b:
    lVar8 = 0x200000002;
LAB_01b64c65:
    unaff_RDI[0x28] = lVar8;
  }
  else {
    if (iVar7 == 2) {
      if (*(int *)((longlong)unaff_RDI + 0x144) == 2) {
LAB_01b64c12:
        lVar8 = 0x200000000;
        goto LAB_01b64c65;
      }
    }
    else if (iVar7 == 1) {
      if (*(int *)((longlong)unaff_RDI + 0x144) == 1) goto LAB_01b64c5b;
    }
    else if ((iVar7 == 0) && (*(int *)((longlong)unaff_RDI + 0x144) == 0)) goto LAB_01b64c36;
LAB_01b64c4d:
    unaff_RDI[0x28] = 0;
  }
  (**(code **)(*unaff_RDI + 0x620))();
LAB_01b64c7a:
  FUN_01e459c0();
  return;
}


