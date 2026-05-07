// Function: FUN_00b4c8e0
// Address: 00b4c8e0
// Size: 2632 bytes
// Class: GNDate


/* WARNING: Removing unreachable block (ram,0x00b4d24e) */
/* WARNING: Removing unreachable block (ram,0x00b4d257) */
/* WARNING: Removing unreachable block (ram,0x00b4cc8d) */
/* WARNING: Removing unreachable block (ram,0x00b4cc9a) */
/* WARNING: Removing unreachable block (ram,0x00b4d117) */
/* WARNING: Removing unreachable block (ram,0x00b4d123) */
/* WARNING: Removing unreachable block (ram,0x00b4cc56) */
/* WARNING: Removing unreachable block (ram,0x00b4cc62) */
/* WARNING: Removing unreachable block (ram,0x00b4c937) */
/* WARNING: Removing unreachable block (ram,0x00b4c940) */
/* WARNING: Removing unreachable block (ram,0x00b4d14e) */
/* WARNING: Removing unreachable block (ram,0x00b4d15b) */

void FUN_00b4c8e0(int param_1,longlong param_2,size_t param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong unaff_RSI;
  longlong lVar17;
  longlong *unaff_RDI;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong *local_50;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x530))();
  if (local_40 == (longlong *)0x0) {
    bVar5 = true;
    plVar20 = (longlong *)0x0;
  }
  else {
    plVar20 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar5 = false;
    }
    else {
      bVar5 = false;
    }
  }
  FUN_00d216c0();
  lVar17 = unaff_RDI[0x15];
  if (0 < *(int *)(lVar17 + 0xc)) {
    lVar18 = 0;
    local_50 = (longlong *)0x0;
    bVar3 = false;
    bVar4 = false;
    plVar15 = (longlong *)0x0;
    bVar9 = false;
LAB_00b4c9e3:
    plVar14 = *(longlong **)(*(longlong *)(lVar17 + 0x10) + lVar18 * 8);
    if (local_50 == plVar14) {
      if ((!bVar3) && (local_50 != (longlong *)0x0)) {
        bVar3 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (plVar14 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if ((bVar3) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
        bVar3 = true;
        local_50 = plVar14;
      }
      else {
        bVar3 = true;
        local_50 = plVar14;
      }
    }
    plVar14 = (longlong *)0x0;
    do {
      FUN_00b713c0();
      if (local_40 == plVar14) {
        if ((bVar4) || (local_40 == (longlong *)0x0)) {
joined_r0x00b4cb26:
          plVar16 = plVar14;
          bVar6 = bVar4;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_00b4cb40;
          }
          plVar16 = plVar14;
          bVar6 = true;
        }
      }
      else {
        plVar16 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar6 = true;
          if ((bVar4) && (plVar14 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar14 = local_40;
LAB_00b4cb40:
            bVar4 = true;
            goto joined_r0x00b4cb26;
          }
        }
        else {
          if ((bVar4) && (plVar14 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar6 = true;
        }
      }
      bVar4 = bVar6;
      plVar14 = plVar16;
      if (plVar14 == (longlong *)0x0) goto LAB_00b4c9c0;
      FUN_00b37f00(0,0);
      if (plVar15 == local_40) {
        if ((!bVar9) && (plVar15 != (longlong *)0x0)) {
          plVar16 = plVar15;
          if (local_38 != '\0') goto LAB_00b4cbc4;
          FUN_00d50b00();
          goto LAB_00b4cc30;
        }
        if (local_38 == '\0') goto LAB_00b4cc67;
LAB_00b4cc36:
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      else if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar16 = local_40;
        if ((bVar9) && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_00b4cc30:
        bVar9 = true;
        plVar15 = plVar16;
        if (local_38 != '\0') goto LAB_00b4cc36;
      }
      else {
        plVar16 = local_40;
        if ((bVar9) && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_00b4cbc4:
        bVar9 = true;
        plVar15 = plVar16;
      }
LAB_00b4cc67:
      local_38 = '\0';
      FUN_00d21140();
      local_40 = plVar15;
    } while( true );
  }
  bVar9 = false;
  plVar15 = (longlong *)0x0;
  bVar4 = false;
  bVar3 = false;
  local_50 = (longlong *)0x0;
LAB_00b4cd00:
  if (0 < *(int *)(unaff_RDI[0x12] + 0xc)) {
    lVar17 = 0;
    do {
      FUN_00b513b0();
      if (local_40 == local_50) {
        if ((!bVar3) && (local_40 != (longlong *)0x0)) {
          plVar14 = local_50;
          if (local_38 != '\0') goto LAB_00b4cda4;
          bVar3 = true;
          FUN_00d50b00();
        }
      }
      else {
        plVar14 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
            local_50 = local_40;
            bVar3 = true;
            goto LAB_00b4ce10;
          }
        }
        else {
          if ((bVar3) && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_00b4cda4:
          local_38 = '\0';
        }
        local_50 = plVar14;
        bVar3 = true;
      }
LAB_00b4ce10:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_50 != (longlong *)0x0) {
        plVar14 = (longlong *)0x0;
LAB_00b4ce43:
        FUN_00b713c0();
        if (local_40 == plVar14) {
          if ((!bVar4) && (local_40 != (longlong *)0x0)) {
            plVar16 = plVar14;
            if (local_38 != '\0') goto LAB_00b4ce93;
            bVar4 = true;
            FUN_00d50b00();
          }
        }
        else {
          plVar16 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar4) && (plVar14 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar14 = local_40;
              bVar4 = true;
              goto LAB_00b4cee0;
            }
          }
          else {
            if ((bVar4) && (plVar14 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_00b4ce93:
            local_38 = '\0';
          }
          plVar14 = plVar16;
          bVar4 = true;
        }
LAB_00b4cee0:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar14 != (longlong *)0x0) {
          cVar7 = FUN_00b51d00();
          if (cVar7 == -0x50) {
            cVar7 = FUN_00b51df0();
            iVar10 = *(int *)(unaff_RDI[0x14] + 0x18);
            iVar13 = iVar10 + 7;
            if (-1 < iVar10) {
              iVar13 = iVar10;
            }
            uVar19 = (ulonglong)(uint)(iVar13 >> 3);
            do {
              if ((int)uVar19 < 1) goto LAB_00b4d020;
              lVar2 = *(longlong *)(unaff_RDI[0x14] + 0x10);
              uVar1 = uVar19 - 1;
              lVar18 = uVar19 * 8;
              uVar19 = uVar1;
            } while (*(char *)(lVar2 + -8 + lVar18) != cVar7);
            if (*(int *)(lVar2 + 4 + (uVar1 & 0xffffffff) * 8) == -1) goto LAB_00b4d020;
            bVar8 = FUN_00b51e10();
            fVar21 = (float)bVar8 / DAT_023d5000;
            if (plVar20 != (longlong *)0x0) {
              fVar22 = (float)(**(code **)(*plVar20 + 0x460))();
              fVar23 = (float)(**(code **)(*plVar20 + 0x468))();
              fVar21 = fVar21 * (fVar23 - fVar22) + fVar22;
            }
            FUN_00b38040(fVar21);
            if (plVar15 == local_40) {
              if ((bVar9) || (plVar15 == (longlong *)0x0)) goto joined_r0x00b4d206;
              bVar9 = true;
              if (local_38 == '\0') {
                FUN_00d50b00();
                plVar16 = plVar15;
                goto LAB_00b4d1e9;
              }
            }
            else if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              plVar16 = local_40;
              if ((bVar9) && (plVar15 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_00b4d1e9:
              bVar9 = true;
              plVar15 = plVar16;
joined_r0x00b4d206:
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if ((bVar9) && (plVar15 != (longlong *)0x0)) {
              FUN_00d50b20();
              bVar9 = true;
              plVar15 = local_40;
            }
            else {
              bVar9 = true;
              plVar15 = local_40;
            }
            local_38 = '\0';
            FUN_00d21140();
            local_40 = plVar15;
          }
          else {
LAB_00b4d020:
            FUN_00b37f00(0,0);
            if (plVar15 == local_40) {
              if ((!bVar9) && (plVar15 != (longlong *)0x0)) {
                plVar16 = plVar15;
                if (local_38 != '\0') goto LAB_00b4d084;
                FUN_00d50b00();
                goto LAB_00b4d0f0;
              }
              if (local_38 == '\0') goto LAB_00b4d128;
LAB_00b4d0f6:
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            else if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              plVar16 = local_40;
              if ((bVar9) && (plVar15 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_00b4d0f0:
              bVar9 = true;
              plVar15 = plVar16;
              if (local_38 != '\0') goto LAB_00b4d0f6;
            }
            else {
              plVar16 = local_40;
              if ((bVar9) && (plVar15 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_00b4d084:
              bVar9 = true;
              plVar15 = plVar16;
            }
LAB_00b4d128:
            local_38 = '\0';
            FUN_00d21140();
            local_40 = plVar15;
          }
          goto LAB_00b4ce43;
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(unaff_RDI[0x12] + 0xc));
  }
  if ((unaff_RSI != 0) && (param_2 != 0)) {
    iVar10 = FUN_00b33130();
    uVar11 = FUN_00b33120();
    if (0 < (int)uVar11) {
      uVar19 = 0;
      pvVar12 = (void *)((longlong)param_1 << 2);
      do {
        if ((longlong)uVar19 < (longlong)iVar10) {
          if (*(longlong *)(unaff_RSI + uVar19 * 8) != *(longlong *)(param_2 + uVar19 * 8)) {
            _memcpy(pvVar12,(void *)((longlong)param_1 << 2),param_3);
          }
        }
        else {
          ___bzero();
        }
        uVar19 = uVar19 + 1;
      } while (uVar11 != uVar19);
    }
  }
  if (plVar20 != (longlong *)0x0) {
    FUN_00b31a00();
    FUN_00bc4760();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar17 = unaff_RDI[0x13];
    if (lVar17 != 0) {
      FUN_00d50b00();
    }
    FUN_00b332c0();
    if (lVar17 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar20 + 0x5b0))();
    if (!bVar5) {
      FUN_00d50b20();
    }
  }
  if ((bVar9) && (plVar15 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
LAB_00b4c9c0:
  lVar18 = lVar18 + 1;
  lVar17 = unaff_RDI[0x15];
  if (*(int *)(lVar17 + 0xc) <= lVar18) goto LAB_00b4cd00;
  goto LAB_00b4c9e3;
}


