// ===== MULSSComponentRenderer — Annotated small functions =====
// 14 readable functions

// ==================================================
// @012b84d0 (2937 bytes) — math_loop

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 uVar10;
  int unaff_ESI;
  longlong this;
  longlong lVar11;
  longlong lVar12;
  
  if (*(char *)(this + 0x265) != '\0') {
    iVar1 = param_2 * 8;
    uVar8 = (ulonglong)*(uint *)(this + 0x160);
    bVar9 = true;
    if (0 < (int)*(uint *)(this + 0x160)) {
      lVar12 = 0;
      do {
        lVar11 = *(longlong *)(*(longlong *)(this + 0x170) + lVar12 * 8);
        if (lVar11 == 0) {
          if (*(int *)(this + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(this + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(this + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(this + 0x310) + uVar8) = 1;
                lVar11 = *(longlong *)(*(longlong *)(this + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8647;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(this + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar11 = 0;
LAB_012b8647:
          *(longlong *)(*(longlong *)(this + 0x170) + lVar12 * 8) = lVar11;
          lVar11 = *(longlong *)(*(longlong *)(this + 0x170) + lVar12 * 8);
        }
        lVar7 = *(longlong *)(*(longlong *)(this + 0x178) + lVar12 * 8);
        if (lVar7 == 0) {
          if (*(int *)(this + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(this + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(this + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(this + 0x310) + uVar8) = 1;
                lVar7 = *(longlong *)(*(longlong *)(this + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b86e7;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(this + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar7 = 0;
LAB_012b86e7:
          *(longlong *)(*(longlong *)(this + 0x178) + lVar12 * 8) = lVar7;
          lVar7 = *(longlong *)(*(longlong *)(this + 0x178) + lVar12 * 8);
        }
        lVar2 = *(longlong *)(*(longlong *)(this + 0x180) + lVar12 * 8);
        if (lVar2 == 0) {
          if (*(int *)(this + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(this + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(this + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(this + 0x310) + uVar8) = 1;
                lVar2 = *(longlong *)(*(longlong *)(this + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8787;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(this + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar2 = 0;
LAB_012b8787:
          *(longlong *)(*(longlong *)(this + 0x180) + lVar12 * 8) = lVar2;
          lVar2 = *(longlong *)(*(longlong *)(this + 0x180) + lVar12 * 8);
        }
        lVar3 = *(longlong *)(*(longlong *)(this + 0x188) + lVar12 * 8);
        if (lVar3 == 0) {
          if (*(int *)(this + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(this + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(this + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(this + 0x310) + uVar8) = 1;
                lVar3 = *(longlong *)(*(longlong *)(this + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8827;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(this + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar3 = 0;
LAB_012b8827:
          *(longlong *)(*(longlong *)(this + 0x188) + lVar12 * 8) = lVar3;
          lVar3 = *(longlong *)(*(longlong *)(this + 0x188) + lVar12 * 8);
        }
        lVar4 = *(longlong *)(*(longlong *)(this + 0x198) + lVar12 * 8);
        if (lVar4 == 0) {
          if (*(int *)(this + 0x304) < param_2) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(this + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(this + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(this + 0x310) + uVar8) = 1;
                lVar4 = *(longlong *)(*(longlong *)(this + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8907;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(this + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar4 = 0;
LAB_012b8907:
          *(longlong *)(*(longlong *)(this + 0x198) + lVar12 * 8) = lVar4;
          lVar4 = *(longlong *)(*(longlong *)(this + 0x198) + lVar12 * 8);
          lVar5 = *(longlong *)(*(longlong *)(this + 0x1a0) + lVar12 * 8);
          if (lVar5 == 0) goto LAB_012b8934;
LAB_012b8869:
          lVar6 = *(longlong *)(*(longlong *)(this + 400) + lVar12 * 8);
        }
        else {
          lVar5 = *(longlong *)(*(longlong *)(this + 0x1a0) + lVar12 * 8);
          if (lVar5 != 0) goto LAB_012b8869;
LAB_012b8934:
          if (*(int *)(this + 0x304) < param_2) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(this + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(this + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(this + 0x310) + uVar8) = 1;
                lVar5 = *(longlong *)(*(longlong *)(this + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b89a7;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(this + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar5 = 0;
LAB_012b89a7:
          *(longlong *)(*(longlong *)(this + 0x1a0) + lVar12 * 8) = lVar5;
          lVar5 = *(longlong *)(*(longlong *)(this + 0x1a0) + lVar12 * 8);
          lVar6 = *(longlong *)(*(longlong *)(this + 400) + lVar12 * 8);
        }
        if (lVar6 == 0) {
          if (*(int *)(this + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(this + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(this + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(this + 0x310) + uVar8) = 1;
                lVar6 = *(longlong *)(*(longlong *)(this + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8552;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(this + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar6 = 0;
LAB_012b8552:
          *(longlong *)(*(longlong *)(this + 400) + lVar12 * 8) = lVar6;
          lVar6 = *(longlong *)(*(longlong *)(this + 400) + lVar12 * 8);
        }
        if (lVar11 == 0) {
          bVar9 = false;
        }
        if (lVar7 == 0) {
          bVar9 = false;
        }
        if (lVar2 == 0) {
          bVar9 = false;
        }
        if (lVar3 == 0) {
          bVar9 = false;
        }
        if (lVar4 == 0) {
          bVar9 = false;
        }
        if (lVar5 == 0) {
          bVar9 = false;
        }
        if (lVar6 == 0) {
          bVar9 = false;
        }
        lVar12 = lVar12 + 1;
        uVar8 = (ulonglong)*(int *)(this + 0x160);
      } while (lVar12 < (longlong)uVar8);
    }
    lVar12 = *(longlong *)(this + 0x1a8);
    if (lVar12 == 0) {
      if (*(int *)(this + 0x304) * 4 < param_2) {
        FUN_00e828a0();
      }
      if (0 < (int)*(uint *)(this + 0x300)) {
        uVar8 = 0;
        do {
          if (*(char *)(*(longlong *)(this + 0x310) + uVar8) == '\0') {
            *(undefined1 *)(*(longlong *)(this + 0x310) + uVar8) = 1;
            lVar12 = *(longlong *)(*(longlong *)(this + 0x308) + uVar8 * 8) + 0x10;
            goto LAB_012b8ac7;
          }
          uVar8 = uVar8 + 1;
        } while (*(uint *)(this + 0x300) != uVar8);
      }
      FUN_00e828a0();
      lVar12 = 0;
LAB_012b8ac7:
      *(longlong *)(this + 0x1a8) = lVar12;
      uVar8 = (ulonglong)*(uint *)(this + 0x160);
    }
    if (lVar12 == 0) {
      bVar9 = false;
    }
    if (0 < (int)uVar8) {
      lVar12 = *(longlong *)(this + 0x1e8);
      lVar11 = 0;
      do {
        lVar7 = *(longlong *)(lVar12 + lVar11 * 8);
        if (lVar7 == 0) {
          if (*(int *)(this + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(this + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(this + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(this + 0x310) + uVar8) = 1;
                lVar12 = *(longlong *)(*(longlong *)(this + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8b1e;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(this + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar12 = 0;
LAB_012b8b1e:
          *(longlong *)(*(longlong *)(this + 0x1e8) + lVar11 * 8) = lVar12;
          lVar12 = *(longlong *)(this + 0x1e8);
          uVar8 = (ulonglong)*(uint *)(this + 0x160);
          lVar7 = *(longlong *)(lVar12 + lVar11 * 8);
        }
        if (lVar7 == 0) {
          bVar9 = false;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)uVar8);
    }
    lVar12 = *(longlong *)(this + 0x1c8);
    if (lVar12 == 0) {
      if (*(int *)(this + 0x304) < unaff_ESI) {
        FUN_00e828a0();
      }
      if (0 < (int)*(uint *)(this + 0x300)) {
        uVar8 = 0;
        do {
          if (*(char *)(*(longlong *)(this + 0x310) + uVar8) == '\0') {
            *(undefined1 *)(*(longlong *)(this + 0x310) + uVar8) = 1;
            lVar12 = *(longlong *)(*(longlong *)(this + 0x308) + uVar8 * 8) + 0x10;
            goto LAB_012b8c78;
          }
          uVar8 = uVar8 + 1;
        } while (*(uint *)(this + 0x300) != uVar8);
      }
      FUN_00e828a0();
      lVar12 = 0;
LAB_012b8c78:
      *(longlong *)(this + 0x1c8) = lVar12;
      lVar11 = *(longlong *)(this + 0x1d8);
    }
    else {
      lVar11 = *(longlong *)(this + 0x1d8);
    }
    if (lVar11 == 0) {
      if (*(int *)(this + 0x304) * 4 < iVar1) {
        FUN_00e828a0();
      }
      if (0 < (int)*(uint *)(this + 0x300)) {
        uVar8 = 0;
        do {
          if (*(char *)(*(longlong *)(this + 0x310) + uVar8) == '\0') {
            *(undefined1 *)(*(longlong *)(this + 0x310) + uVar8) = 1;
            lVar11 = *(longlong *)(*(longlong *)(this + 0x308) + uVar8 * 8) + 0x10;
            goto LAB_012b8d07;
          }
          uVar8 = uVar8 + 1;
        } while (*(uint *)(this + 0x300) != uVar8);
      }
      FUN_00e828a0();
      lVar11 = 0;
LAB_012b8d07:
      *(longlong *)(this + 0x1d8) = lVar11;
    }
    if (((lVar11 == 0) || (lVar12 == 0)) || (!bVar9)) {
      *(undefined8 *)(this + 0x228) = param_1;
      *param_4 = 1;
      *(undefined1 *)(this + 0x265) = 0;
    }
  }
  if (*param_3 == '\0') {
    return;
  }
  iVar1 = *(int *)(this + 0x160);
  if (iVar1 < 1) {
    uVar10 = true;
    lVar12 = *(longlong *)(this + 0x1b8);
  }
  else {
    lVar12 = *(longlong *)(this + 0x1e8);
    uVar10 = true;
    lVar11 = 0;
    do {
      lVar7 = *(longlong *)(lVar12 + lVar11 * 8);
      if (lVar7 == 0) {
        if (*(int *)(this + 0x304) * 4 < param_2 * 8) {
          FUN_00e828a0();
        }
        if (0 < (int)*(uint *)(this + 0x300)) {
          uVar8 = 0;
          do {
            if (*(char *)(*(longlong *)(this + 0x310) + uVar8) == '\0') {
              *(undefined1 *)(*(longlong *)(this + 0x310) + uVar8) = 1;
              lVar12 = *(longlong *)(*(longlong *)(this + 0x308) + uVar8 * 8) + 0x10;
              goto LAB_012b8da2;
            }
            uVar8 = uVar8 + 1;
          } while (*(uint *)(this + 0x300) != uVar8);
        }
        FUN_00e828a0();
        lVar12 = 0;
LAB_012b8da2:
        *(longlong *)(*(longlong *)(this + 0x1e8) + lVar11 * 8) = lVar12;
        lVar12 = *(longlong *)(this + 0x1e8);
        iVar1 = *(int *)(this + 0x160);
        lVar7 = *(longlong *)(lVar12 + lVar11 * 8);
      }
      if (lVar7 == 0) {
        uVar10 = false;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar1);
    lVar12 = *(longlong *)(this + 0x1b8);
  }
  if (lVar12 == 0) {
    if (*(int *)(this + 0x304) < param_2) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this + 0x300)) {
      uVar8 = 0;
      do {
        if (*(char *)(*(longlong *)(this + 0x310) + uVar8) == '\0') {
          *(undefined1 *)(*(longlong *)(this + 0x310) + uVar8) = 1;
          lVar12 = *(longlong *)(*(longlong *)(this + 0x308) + uVar8 * 8) + 0x10;
          goto LAB_012b8f18;
        }
        uVar8 = uVar8 + 1;
      } while (*(uint *)(this + 0x300) != uVar8);
    }
    FUN_00e828a0();
    lVar12 = 0;
LAB_012b8f18:
    *(longlong *)(this + 0x1b8) = lVar12;
    lVar11 = *(longlong *)(this + 0x1c0);
  }
  else {
    lVar11 = *(longlong *)(this + 0x1c0);
  }
  if (lVar11 == 0) {
    if (*(int *)(this + 0x304) < param_2) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this + 0x300)) {
      uVar8 = 0;
      do {
        if (*(char *)(*(longlong *)(this + 0x310) + uVar8) == '\0') {
          *(undefined1 *)(*(longlong *)(this + 0x310) + uVar8) = 1;
          lVar11 = *(longlong *)(*(longlong *)(this + 0x308) + uVar8 * 8) + 0x10;
          goto LAB_012b8fa8;
        }
        uVar8 = uVar8 + 1;
      } while (*(uint *)(this + 0x300) != uVar8);
    }
    FUN_00e828a0();
    lVar11 = 0;
LAB_012b8fa8:
    *(longlong *)(this + 0x1c0) = lVar11;
    lVar7 = *(longlong *)(this + 0x1d0);
  }
  else {
    lVar7 = *(longlong *)(this + 0x1d0);
  }
  if (lVar7 == 0) {
    if (*(int *)(this + 0x304) < *(int *)(this + 0x15c)) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this + 0x300)) {
      uVar8 = 0;
      do {
        if (*(char *)(*(longlong *)(this + 0x310) + uVar8) == '\0') {
          *(undefined1 *)(*(longlong *)(this + 0x310) + uVar8) = 1;
          lVar7 = *(longlong *)(*(longlong *)(this + 0x308) + uVar8 * 8) + 0x10;
          *(longlong *)(this + 0x1d0) = lVar7;
          goto joined_r0x012b8e86;
        }
        uVar8 = uVar8 + 1;
      } while (*(uint *)(this + 0x300) != uVar8);
    }
    FUN_00e828a0();
    *(undefined8 *)(this + 0x1d0) = 0;
  }
  else {
joined_r0x012b8e86:
    if (((lVar7 != 0) && (lVar11 != 0)) && ((lVar12 != 0 && ((bool)uVar10)))) {
      return;
    }
  }
  *param_3 = '\0';
  return;
}




// ==================================================
// @012bcdc0 (2341 bytes) — math_loop

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  char cVar5;
  float *pfVar6;
  float *pfVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint in_ECX;
  longlong lVar21;
  ulonglong uVar22;
  float *pfVar23;
  ulonglong uVar24;
  uint in_EDX;
  longlong lVar25;
  uint uVar26;
  longlong arg1;
  longlong lVar27;
  longlong this;
  ulonglong uVar28;
  ulonglong uVar29;
  uint in_R8D;
  longlong in_R9;
  longlong lVar30;
  uint uVar31;
  ulonglong uVar32;
  float fVar33;
  double dVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  char local_res8;
  longlong local_90;
  char local_88;
  double local_40;
  
  uVar18 = in_ECX + in_EDX;
  uVar31 = in_ECX;
  uVar26 = in_EDX;
  if ((in_R9 != 0) && (local_res8 != '\0')) {
    *(undefined8 *)(this + 0x2a8) = 0;
    *(undefined1 *)(this + 0x2a3) = 1;
    uVar26 = 0;
    uVar31 = uVar18;
  }
  local_40 = (double)*(int *)(this + 0x164) / *(double *)(this + 0x2b0);
  dVar8 = ((double)*(int *)(this + 0x164) / (double)param_2 - local_40) / (double)(int)uVar31;
  *(double *)(this + 0x2b0) = (double)param_2;
  if (in_R9 == 0) {
    FUN_012a61d0();
    if ((local_88 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    FUN_012a6280();
    if ((local_88 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    if (0 < (int)uVar31) {
      fVar40 = (param_1 + DAT_0241b660) * DAT_0239425c;
      fVar38 = 0.0;
      if (0.0 <= fVar40) {
        fVar38 = fVar40;
      }
      fVar40 = DAT_02390124;
      if (fVar38 <= DAT_02390124) {
        fVar40 = fVar38;
      }
      fVar38 = DAT_02390124 - fVar40;
      lVar30 = (longlong)(int)uVar26;
      dVar34 = *(double *)(this + 0x2a8);
      uVar26 = 0;
      do {
        iVar20 = FUN_00e7d850(dVar34 * _DAT_0240d1d0);
        iVar19 = iVar20 + -0x4000;
        if (iVar20 < 0x4000) {
          iVar19 = iVar20;
        }
        *(float *)(*(longlong *)(this + 0x2b8) + lVar30 * 4) =
             *(float *)(*(longlong *)(local_90 + 0x10) + (longlong)iVar19 * 4) * fVar40 +
             *(float *)(*(longlong *)(local_90 + 0x10) + (longlong)iVar19 * 4) * fVar38;
        for (dVar34 = *(double *)(this + 0x2a8) + local_40; DAT_0238fee8 <= dVar34;
            dVar34 = dVar34 + DAT_023b19a0) {
        }
        *(double *)(this + 0x2a8) = dVar34;
        local_40 = local_40 + dVar8;
        lVar30 = lVar30 + 1;
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar31);
    }
    if (local_90 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  else if (0 < (int)uVar31) {
    lVar30 = (longlong)(int)uVar26;
    dVar34 = *(double *)(this + 0x2a8);
    uVar26 = 0;
    do {
      iVar19 = FUN_00e7d850(dVar34 * DAT_024110f0);
      cVar5 = *(char *)(this + 0x2a3);
      if (cVar5 == '\0') {
        iVar20 = iVar19 + -0x200;
        if (iVar19 < 0x200) {
          iVar20 = iVar19;
        }
        iVar20 = iVar20 + 0x1e00;
      }
      else {
        iVar20 = iVar19 + -0x200;
        if (iVar19 < 0x2000) {
          iVar20 = iVar19;
        }
      }
      *(undefined4 *)(*(longlong *)(this + 0x2b8) + lVar30 * 4) =
           *(undefined4 *)(in_R9 + (longlong)iVar20 * 4);
      dVar34 = *(double *)(this + 0x2a8) + local_40;
      *(double *)(this + 0x2a8) = dVar34;
      if (cVar5 == '\0') {
        if (DAT_0238fee8 <= dVar34) {
          do {
            dVar34 = dVar34 + DAT_023b19a0;
          } while (DAT_0238fee8 <= dVar34);
          *(double *)(this + 0x2a8) = dVar34;
        }
      }
      else if (DAT_023b2560 <= dVar34) {
        dVar34 = dVar34 + _DAT_0240d1c8;
        *(double *)(this + 0x2a8) = dVar34;
        *(undefined1 *)(this + 0x2a3) = 0;
      }
      local_40 = local_40 + dVar8;
      lVar30 = lVar30 + 1;
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar31);
  }
  if (0 < *(int *)(this + 0x160)) {
    pfVar6 = *(float **)(this + 0x1d0);
    lVar30 = *(longlong *)(this + 0x2c0);
    fVar40 = DAT_02390124 - param_4;
    param_3 = param_3 * param_4;
    fVar42 = DAT_023d5f44 / (float)(int)in_EDX;
    pfVar1 = pfVar6 + (int)in_EDX;
    fVar38 = DAT_023d5f44 / (float)(int)in_ECX;
    uVar32 = (ulonglong)uVar18;
    uVar28 = (ulonglong)(uVar18 & 0xfffffff8);
    uVar29 = (uVar28 - 8 >> 3) + 1;
    lVar27 = 0;
    do {
      pfVar7 = *(float **)(*(longlong *)(this + 0x1e0) + lVar27 * 8);
      ___bzero();
      if (0 < (int)uVar18) {
        pfVar23 = *(float **)(this + 0x2b8);
        if (uVar18 < 8) {
LAB_012bd6c0:
          uVar24 = 0;
        }
        else {
          if (pfVar6 < pfVar7 + uVar32 && pfVar7 < pfVar6 + uVar32) goto LAB_012bd6c0;
          uVar24 = 0;
          if (pfVar23 + uVar32 <= pfVar6 || pfVar6 + uVar32 <= pfVar23) {
            if (uVar28 - 8 == 0) {
              lVar21 = 0;
LAB_012bd3b4:
              pfVar2 = pfVar7 + lVar21;
              fVar33 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar36 = pfVar2[3];
              pfVar3 = pfVar7 + lVar21 + 4;
              fVar37 = *pfVar3;
              fVar41 = pfVar3[1];
              fVar39 = pfVar3[2];
              fVar10 = pfVar3[3];
              pfVar3 = pfVar23 + lVar21;
              fVar11 = pfVar3[1];
              fVar12 = pfVar3[2];
              fVar13 = pfVar3[3];
              pfVar4 = pfVar23 + lVar21 + 4;
              fVar14 = *pfVar4;
              fVar15 = pfVar4[1];
              fVar16 = pfVar4[2];
              fVar17 = pfVar4[3];
              pfVar4 = pfVar6 + lVar21;
              *pfVar4 = *pfVar3 * param_3 + *pfVar2 * fVar40;
              pfVar4[1] = fVar11 * param_3 + fVar33 * fVar40;
              pfVar4[2] = fVar12 * param_3 + fVar9 * fVar40;
              pfVar4[3] = fVar13 * param_3 + fVar36 * fVar40;
              pfVar2 = pfVar6 + lVar21 + 4;
              *pfVar2 = fVar14 * param_3 + fVar37 * fVar40;
              pfVar2[1] = fVar15 * param_3 + fVar41 * fVar40;
              pfVar2[2] = fVar16 * param_3 + fVar39 * fVar40;
              pfVar2[3] = fVar17 * param_3 + fVar10 * fVar40;
            }
            else {
              lVar21 = 0;
              lVar25 = -(uVar29 & 0xfffffffffffffffe);
              do {
                pfVar2 = pfVar7 + lVar21;
                fVar33 = pfVar2[1];
                fVar9 = pfVar2[2];
                fVar36 = pfVar2[3];
                pfVar3 = pfVar7 + lVar21 + 4;
                fVar37 = *pfVar3;
                fVar41 = pfVar3[1];
                fVar39 = pfVar3[2];
                fVar10 = pfVar3[3];
                pfVar3 = pfVar23 + lVar21;
                fVar11 = pfVar3[1];
                fVar12 = pfVar3[2];
                fVar13 = pfVar3[3];
                pfVar4 = pfVar23 + lVar21 + 4;
                fVar14 = *pfVar4;
                fVar15 = pfVar4[1];
                fVar16 = pfVar4[2];
                fVar17 = pfVar4[3];
                pfVar4 = pfVar6 + lVar21;
                *pfVar4 = *pfVar3 * param_3 + *pfVar2 * fVar40;
                pfVar4[1] = fVar11 * param_3 + fVar33 * fVar40;
                pfVar4[2] = fVar12 * param_3 + fVar9 * fVar40;
                pfVar4[3] = fVar13 * param_3 + fVar36 * fVar40;
                pfVar2 = pfVar6 + lVar21 + 4;
                *pfVar2 = fVar14 * param_3 + fVar37 * fVar40;
                pfVar2[1] = fVar15 * param_3 + fVar41 * fVar40;
                pfVar2[2] = fVar16 * param_3 + fVar39 * fVar40;
                pfVar2[3] = fVar17 * param_3 + fVar10 * fVar40;
                pfVar2 = pfVar7 + lVar21 + 8;
                fVar33 = pfVar2[1];
                fVar9 = pfVar2[2];
                fVar36 = pfVar2[3];
                pfVar3 = pfVar7 + lVar21 + 0xc;
                fVar37 = *pfVar3;
                fVar41 = pfVar3[1];
                fVar39 = pfVar3[2];
                fVar10 = pfVar3[3];
                pfVar3 = pfVar23 + lVar21 + 8;
                fVar11 = pfVar3[1];
                fVar12 = pfVar3[2];
                fVar13 = pfVar3[3];
                pfVar4 = pfVar23 + lVar21 + 0xc;
                fVar14 = *pfVar4;
                fVar15 = pfVar4[1];
                fVar16 = pfVar4[2];
                fVar17 = pfVar4[3];
                pfVar4 = pfVar6 + lVar21 + 8;
                *pfVar4 = *pfVar3 * param_3 + *pfVar2 * fVar40;
                pfVar4[1] = fVar11 * param_3 + fVar33 * fVar40;
                pfVar4[2] = fVar12 * param_3 + fVar9 * fVar40;
                pfVar4[3] = fVar13 * param_3 + fVar36 * fVar40;
                pfVar2 = pfVar6 + lVar21 + 0xc;
                *pfVar2 = fVar14 * param_3 + fVar37 * fVar40;
                pfVar2[1] = fVar15 * param_3 + fVar41 * fVar40;
                pfVar2[2] = fVar16 * param_3 + fVar39 * fVar40;
                pfVar2[3] = fVar17 * param_3 + fVar10 * fVar40;
                lVar21 = lVar21 + 0x10;
                lVar25 = lVar25 + 2;
              } while (lVar25 != 0);
              if ((uVar29 & 1) != 0) goto LAB_012bd3b4;
            }
            uVar24 = uVar28;
            if (uVar28 == uVar32) goto LAB_012bd494;
          }
        }
        uVar22 = uVar24;
        if ((uVar18 & 1) != 0) {
          pfVar6[uVar24] = pfVar23[uVar24] * param_3 + pfVar7[uVar24] * fVar40;
          uVar22 = uVar24 | 1;
        }
        if (~uVar24 != -uVar32) {
          do {
            pfVar6[uVar22] = pfVar23[uVar22] * param_3 + pfVar7[uVar22] * fVar40;
            pfVar6[uVar22 + 1] = pfVar23[uVar22 + 1] * param_3 + pfVar7[uVar22 + 1] * fVar40;
            uVar22 = uVar22 + 2;
          } while (uVar32 != uVar22);
        }
      }
LAB_012bd494:
      pfVar7 = DAT_028ac5d0;
      if (in_EDX != 0) {
        pfVar23 = pfVar6;
        fVar33 = 0.0;
        uVar31 = in_EDX;
        if ((in_EDX & 1) != 0) {
          *pfVar6 = *DAT_028ac5d0 * *pfVar6;
          pfVar23 = pfVar6 + 1;
          fVar33 = fVar42 + 0.0;
          uVar31 = in_EDX - 1;
        }
        if (in_EDX != 1) {
          lVar21 = 0;
          do {
            pfVar23[lVar21] = pfVar7[(int)fVar33] * pfVar23[lVar21];
            pfVar23[lVar21 + 1] = pfVar7[(int)(fVar33 + fVar42)] * pfVar23[lVar21 + 1];
            fVar33 = fVar33 + fVar42 + fVar42;
            lVar21 = lVar21 + 2;
          } while (uVar31 != (uint)lVar21);
        }
      }
      if (in_ECX != 0) {
        pfVar23 = pfVar1;
        fVar33 = 0.0;
        uVar31 = in_ECX;
        if ((in_ECX & 1) != 0) {
          *pfVar1 = pfVar7[0x2000] * *pfVar1;
          pfVar23 = pfVar1 + 1;
          fVar33 = fVar38 + 0.0;
          uVar31 = in_ECX - 1;
        }
        if (in_ECX != 1) {
          lVar21 = 0;
          do {
            pfVar23[lVar21] = pfVar7[(longlong)(int)fVar33 + 0x2000] * pfVar23[lVar21];
            pfVar23[lVar21 + 1] =
                 pfVar7[(longlong)(int)(fVar33 + fVar38) + 0x2000] * pfVar23[lVar21 + 1];
            fVar33 = fVar33 + fVar38 + fVar38;
            lVar21 = lVar21 + 2;
          } while (uVar31 != (uint)lVar21);
        }
      }
      uVar35 = ___bzero();
      FUN_00e83530(uVar35,pfVar6);
      uVar26 = _DAT_023945e0;
      fVar9 = DAT_02394274;
      uVar31 = _DAT_02390140;
      fVar33 = DAT_02390124;
      if (0 < (int)in_R8D) {
        lVar21 = *(longlong *)(arg1 + lVar27 * 8);
        uVar24 = 0;
        do {
          uVar35 = *(undefined8 *)(lVar30 + uVar24 * 8);
          fVar36 = (float)uVar35;
          fVar37 = (float)((ulonglong)uVar35 >> 0x20);
          fVar41 = (float)((uint)fVar37 & uVar31);
          if ((fVar36 != 0.0) || (fVar39 = fVar41, NAN(fVar36))) {
            fVar39 = (float)((uint)fVar36 & uVar31);
            if ((fVar37 != 0.0) || (NAN(fVar37))) {
              if (fVar39 <= fVar41) {
                fVar39 = SQRT((fVar39 / fVar41) * (fVar39 / fVar41) + fVar33);
              }
              else {
                fVar41 = SQRT((fVar41 / fVar39) * (fVar41 / fVar39) + fVar33);
              }
              fVar39 = fVar39 * fVar41;
            }
          }
          fVar41 = 0.0;
          if (fVar9 < fVar39) {
            fVar41 = fVar33 / fVar39;
          }
          *(float *)(lVar21 + uVar24 * 8) = fVar36 * fVar41;
          *(float *)(lVar21 + 4 + uVar24 * 8) = (float)((uint)fVar37 ^ uVar26) * fVar41;
          uVar24 = uVar24 + 1;
        } while (in_R8D != uVar24);
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 < *(int *)(this + 0x160));
  }
  return;
}




// ==================================================
// @01c22370 (2198 bytes) — math_loop

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  int iVar10;
  undefined8 **ppuVar11;
  longlong *arg1;
  longlong this;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  char local_68 [8];
  undefined8 *local_60;
  undefined8 local_58;
  int local_50;
  undefined8 *local_48;
  char local_40 [8];
  
  FUN_01c219e0();
  puVar6 = local_70;
  if (local_70 == (undefined8 *)*arg1) {
    cVar5 = '\x01';
  }
  else {
    FUN_01c219e0();
    if (local_48 == (undefined8 *)0x0) {
      cVar5 = '\0';
    }
    else {
      if (*arg1 == 0) {
        cVar5 = '\0';
      }
      else {
        FUN_01c219e0();
        cVar5 = (**(code **)(*(longlong *)CONCAT71(uStack_87,local_88) + 0x50))();
        if (local_80 != '\0') {
          FUN_00d50b20();
        }
      }
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  if ((local_68[0] != '\0') && (puVar6 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02572358;
    pcVar4 = DAT_02572370;
    local_78 = puVar6;
    (*DAT_02572370)();
    lVar1 = *(longlong *)(this + 0x1d0);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if ((param_2 != '\0') && (*(longlong *)(this + 0x1d0) != 0)) {
      *(undefined8 *)(this + 0x1d0) = 0;
      FUN_00d50b20();
    }
    puVar6 = (undefined8 *)*arg1;
    if (*(longlong *)(this + 0x168) == 0) {
      if (puVar6 != (undefined8 *)0x0) {
        local_68[0] = '\0';
        local_70 = (undefined8 *)0x0;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        local_60 = puVar6;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar10 = -local_58._4_4_;
            }
            else {
              iVar10 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar10);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar10 = 0;
            }
            local_58 = CONCAT44(iVar10,(int)local_58);
          }
          lVar7 = (longlong)(int)local_58;
          iVar10 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar10);
          if (*(int *)((longlong)local_60 + 0xc) <= iVar10) break;
          local_70 = *(undefined8 **)(local_60[2] + 8 + lVar7 * 8);
          FUN_01c231c0();
          puVar6 = (undefined8 *)CONCAT71(uStack_87,local_88);
          if (local_80 == '\0') {
            if (puVar6 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          local_40[0] = '\0';
          local_48 = puVar6;
          FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar6 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_0038d420();
      }
    }
    else if (puVar6 != (undefined8 *)0x0) {
      local_68[0] = '\0';
      local_70 = (undefined8 *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = puVar6;
      while( true ) {
        lVar7 = (longlong)(int)local_58;
        iVar10 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar10);
        if (*(int *)((longlong)local_60 + 0xc) <= iVar10) break;
        puVar6 = *(undefined8 **)(local_60[2] + 8 + lVar7 * 8);
        local_70 = puVar6;
        if (local_68[0] == '\0') {
          if (puVar6 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68[0] = '\0';
        }
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_02572358;
        (*pcVar4)();
        do {
          local_40[0] = '\0';
          local_48 = puVar6;
          FUN_00d23370();
          if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(**(longlong **)(this + 0x168) + 0x370))();
          puVar12 = local_48;
          if (local_48 == puVar6) {
LAB_01c2263d:
            puVar12 = puVar6;
            if (local_40[0] != '\0') {
LAB_01c22643:
              if (local_48 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          else {
            if (local_40[0] == '\0') {
              if (local_48 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
              if (puVar6 != (undefined8 *)0x0) {
                FUN_00d50b20();
                puVar6 = puVar12;
                goto LAB_01c2263d;
              }
              if (local_40[0] == '\0') goto LAB_01c22651;
              goto LAB_01c22643;
            }
            if (puVar6 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            local_40[0] = '\0';
          }
LAB_01c22651:
          puVar6 = puVar12;
        } while (puVar12 != (undefined8 *)0x0);
        if (*(int *)((longlong)puVar8 + 0xc) != 0) {
          local_40[0] = '\0';
          local_48 = puVar8;
          FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        if (local_58._4_4_ != 0) {
          if (local_58 < 0) {
            iVar10 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar10 = 0;
          }
          local_58 = CONCAT44(iVar10,(int)local_58);
        }
      }
      FUN_0038d420();
    }
    if (*(int *)(this + 0x160) == 1) {
      if ((*(longlong *)(this + 0x188) != 0) && (*(int *)((longlong)local_78 + 0xc) != 0)) {
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_02572358;
        (*pcVar4)();
        local_68[0] = '\0';
        local_70 = (undefined8 *)0x0;
        local_60 = local_78;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        bVar2 = false;
        puVar6 = (undefined8 *)0x0;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar10 = -local_58._4_4_;
            }
            else {
              iVar10 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar10);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar10 = 0;
            }
            local_58 = CONCAT44(iVar10,(int)local_58);
          }
          lVar7 = (longlong)(int)local_58;
          iVar10 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar10);
          if (*(int *)((longlong)local_60 + 0xc) <= iVar10) break;
          local_70 = *(undefined8 **)(local_60[2] + 8 + lVar7 * 8);
          FUN_00d23340();
          puVar12 = local_48;
          local_88 = local_40[0];
          pcVar9 = local_40;
          if (local_40[0] == '\0') {
            pcVar9 = &local_88;
          }
          *pcVar9 = '\0';
          if ((local_40[0] != '\0') && (puVar12 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_88 == '\0') && (puVar12 != (undefined8 *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (puVar12 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          puVar12 = local_70;
          puVar13 = puVar6;
          if (local_50 + (int)local_58 == 0) {
            if (local_70 == puVar6) {
              bVar3 = bVar2;
              if ((!bVar2) && (local_70 != (undefined8 *)0x0)) {
                puVar12 = puVar6;
                if (local_68[0] != '\0') goto LAB_01c22af6;
                FUN_00d50b00();
                bVar3 = true;
              }
            }
            else if (local_68[0] == '\0') {
              if (local_70 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              puVar13 = puVar12;
              if ((bVar2) && (puVar6 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if ((bVar2) && (puVar6 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
LAB_01c22af6:
              local_68[0] = '\0';
              puVar13 = puVar12;
              bVar3 = true;
            }
            FUN_00d23740();
            bVar2 = bVar3;
          }
          puVar6 = puVar13;
        }
        FUN_01c2d530();
        FUN_01ce8890();
        if (puVar8 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((bVar2) && (puVar6 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else if ((*(int *)(this + 0x160) == 0) && (*(longlong *)(this + 0x180) != 0)) {
      if (*(int *)((longlong)local_78 + 0xc) == 0) {
        FUN_01dd4c60();
      }
      else {
        FUN_00d23310();
        puVar6 = local_70;
        ppuVar11 = &local_48;
        if (local_68[0] != '\0') {
          ppuVar11 = (undefined8 **)local_68;
        }
        local_48 = (undefined8 *)CONCAT71(local_48._1_7_,local_68[0]);
        *(char *)ppuVar11 = '\0';
        if ((local_68[0] != '\0') && (local_70 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 == '\0') && (puVar6 != (undefined8 *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01eda650();
        if (puVar6 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if ((param_2 != '\0') && (lVar7 = *(longlong *)(this + 0x1d0), lVar7 != lVar1)) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(this + 0x1d0) = lVar1;
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_78 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01c651f0 (2179 bytes) — math_loop

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  undefined8 *puVar7;
  int extraout_var;
  int extraout_var_00;
  void *pvVar8;
  int extraout_var_01;
  int extraout_var_02;
  int extraout_var_03;
  ulonglong uVar9;
  int extraout_var_04;
  int extraout_var_05;
  int extraout_var_06;
  pthread_key_t pVar10;
  uint uVar11;
  undefined1 *puVar12;
  longlong this;
  longlong lVar13;
  bool bVar14;
  undefined8 uVar15;
  int iStack_94;
  longlong local_90;
  char local_88;
  int iStack_64;
  ulonglong local_60;
  char local_58;
  undefined8 local_48;
  char local_40;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar12 = &DAT_02572358;
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  lVar2 = *(longlong *)(this + 0x2b0);
  *(undefined8 **)(this + 0x2b0) = puVar7;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025683c0;
  pcVar5 = DAT_025683d8;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar2 = *(longlong *)(this + 0x2b8);
  *(undefined8 **)(this + 0x2b8) = puVar7;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025683c0;
  (*pcVar5)();
  FUN_00c92170();
  FUN_00c92160();
  lVar2 = *(longlong *)(this + 0x2c0);
  *(undefined8 **)(this + 0x2c0) = puVar7;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00e7bdb0();
  FUN_00e7bdb0();
  FUN_00e7bcc0();
  cVar6 = FUN_016bf360();
  iStack_94 = extraout_var;
  iStack_64 = extraout_var_00;
  if (cVar6 != '\0') {
    cVar6 = FUN_016bf500();
    if (cVar6 == '\0') {
      pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_90 = FUN_016bf0f0();
      uVar15 = FUN_00e7b970();
      FUN_016c4760(uVar15,0);
      iStack_94 = extraout_var_01;
    }
    cVar6 = FUN_016bf530();
    if (cVar6 == '\0') {
      pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_90 = FUN_016bf100();
      uVar15 = FUN_00e7b820();
      FUN_016c4760(uVar15,0);
      iStack_64 = extraout_var_02;
    }
  }
  lVar2 = local_90;
  uVar11 = *(uint *)(this + 0x1cc);
  if (uVar11 < 0x16) {
    puVar12 = &LAB_00330040;
    if ((0x330040U >> (uVar11 & 0x1f) & 1) == 0) {
      puVar12 = (undefined1 *)0xc0000;
      if ((0xc0000U >> (uVar11 & 0x1f) & 1) != 0) {
        FUN_00e7bdb0();
        pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_016c2730();
        iStack_64 = extraout_var_05;
        if (cVar6 != '\0') {
          FUN_00e7bdb0();
          iStack_94 = extraout_var_06;
        }
      }
    }
    else {
      FUN_00e7bdb0();
      iStack_64 = extraout_var_03;
    }
  }
  pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016d8ab0();
  if ((local_88 == '\0') && (local_90 != 0)) {
    FUN_00d50b00();
  }
  cVar6 = FUN_016bf360();
  if (((cVar6 != '\0') && (uVar9 = FUN_016bf0f0(), uVar9 >> 0x20 != 0)) &&
     (uVar9 = FUN_016bf100(), uVar9 >> 0x20 != 0)) {
    local_90 = FUN_016bf100();
    FUN_00e7c260();
    local_60 = FUN_016bf0f0();
    local_48._4_4_ = (int)((ulonglong)local_90 >> 0x20);
    bVar14 = local_48._4_4_ != 0;
    local_48 = local_90;
    if (((bVar14) && (local_60 >> 0x20 != 0)) && (cVar6 = FUN_00e7c000(), cVar6 != '\0')) {
      FUN_00e7bdb0();
      iStack_64 = extraout_var_04;
    }
  }
  FUN_01c44d20();
  if (local_88 == '\0') {
    if (local_90 == 0) goto LAB_01c65a20;
    FUN_00d50b00();
  }
  else if (local_90 == 0) goto LAB_01c65a20;
  if (0 < *(int *)(local_90 + 0xc)) {
    lVar13 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(local_90 + 0x10) + lVar13 * 8);
      pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pVar10 = (pthread_key_t)puVar12;
      if (local_48 != 0) {
        pvVar8 = _pthread_getspecific(pVar10);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar8 = _pthread_getspecific(pVar10);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        pvVar8 = _pthread_getspecific(pVar10);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60 = FUN_01507970();
        puVar12 = (undefined1 *)(local_60 >> 0x20);
        if ((iStack_94 == 0) || (uVar11 = (uint)(local_60 >> 0x20), uVar11 == 0)) {
LAB_01c657f7:
          if (((iStack_64 == 0) || ((int)puVar12 == 0)) || (cVar6 = FUN_00e7c020(), cVar6 == '\0'))
          {
            local_40 = '\0';
            FUN_00d21140();
            lVar4 = *(longlong *)(this + 0x2b8);
            pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar15 = FUN_016c98e0();
            iVar1 = *(int *)(lVar4 + 0x18);
            FUN_00c8e340(uVar15,1);
            *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar1) = uVar15;
            lVar4 = *(longlong *)(this + 0x2c0);
            pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar15 = FUN_01508610();
            uVar15 = FUN_016c98e0(uVar15,0);
            iVar1 = *(int *)(lVar4 + 0x18);
            FUN_00c8e340();
            *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar1) = uVar15;
            bVar14 = local_48 != 0;
            local_48 = lVar3;
            if (bVar14) {
              FUN_00d50b20();
            }
            goto LAB_01c65640;
          }
        }
        else {
          cVar6 = FUN_00e7c020();
          if (cVar6 == '\0') {
            puVar12 = (undefined1 *)(ulonglong)uVar11;
            goto LAB_01c657f7;
          }
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
      }
LAB_01c65640:
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < *(int *)(local_90 + 0xc));
  }
  FUN_001159b0();
  FUN_00d50b20();
LAB_01c65a20:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00a9866e (2106 bytes) — math_loop

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  longlong *plVar61;
  longlong *arg1;
  longlong this;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,0xc);
  iVar3 = FUN_00aa9c4e();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,2);
  iVar6 = (**(code **)(*arg1 + 0x78))();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar8 = (**(code **)(*arg1 + 0x30))(0xb,8);
  iVar9 = (**(code **)(*arg1 + 0x90))();
  iVar10 = (**(code **)(*arg1 + 0x38))();
  iVar11 = (**(code **)(*arg1 + 0x30))(0xc,0xb);
  iVar12 = (**(code **)(*arg1 + 0xa8))();
  iVar13 = (**(code **)(*arg1 + 0x38))();
  iVar14 = (**(code **)(*arg1 + 0x30))(0xd,0xb);
  iVar15 = (**(code **)(*arg1 + 0xa8))();
  iVar16 = (**(code **)(*arg1 + 0x38))();
  iVar17 = (**(code **)(*arg1 + 0x30))(0xe,0xb);
  iVar18 = (**(code **)(*arg1 + 0xa8))();
  iVar19 = (**(code **)(*arg1 + 0x38))();
  iVar20 = (**(code **)(*arg1 + 0x30))(0xf,0xb);
  iVar21 = (**(code **)(*arg1 + 0xa8))();
  iVar22 = (**(code **)(*arg1 + 0x38))();
  iVar23 = (**(code **)(*arg1 + 0x30))(0x10,8);
  iVar24 = (**(code **)(*arg1 + 0x90))();
  iVar25 = (**(code **)(*arg1 + 0x38))();
  iVar26 = (**(code **)(*arg1 + 0x30))(0x11,0xb);
  iVar27 = (**(code **)(*arg1 + 0xa8))();
  iVar28 = (**(code **)(*arg1 + 0x38))();
  iVar29 = (**(code **)(*arg1 + 0x30))(0x12,0xb);
  iVar30 = (**(code **)(*arg1 + 0xa8))();
  iVar31 = (**(code **)(*arg1 + 0x38))();
  iVar32 = (**(code **)(*arg1 + 0x30))(0x13,8);
  iVar33 = (**(code **)(*arg1 + 0x90))();
  iVar34 = (**(code **)(*arg1 + 0x38))();
  iVar35 = (**(code **)(*arg1 + 0x30))(0x14,0xb);
  iVar36 = (**(code **)(*arg1 + 0xa8))();
  iVar37 = (**(code **)(*arg1 + 0x38))();
  iVar38 = (**(code **)(*arg1 + 0x30))(0x15,0xb);
  iVar39 = (**(code **)(*arg1 + 0xa8))();
  iVar40 = (**(code **)(*arg1 + 0x38))();
  iVar41 = (**(code **)(*arg1 + 0x30))(0x16,0xb);
  iVar42 = (**(code **)(*arg1 + 0xa8))();
  iVar43 = (**(code **)(*arg1 + 0x38))();
  iVar44 = (**(code **)(*arg1 + 0x30))(0x17,0xb);
  iVar45 = (**(code **)(*arg1 + 0xa8))();
  iVar46 = (**(code **)(*arg1 + 0x38))();
  iVar47 = (**(code **)(*arg1 + 0x30))(0x18,0xb);
  iVar48 = (**(code **)(*arg1 + 0xa8))();
  iVar49 = (**(code **)(*arg1 + 0x38))();
  iVar50 = (**(code **)(*arg1 + 0x30))(0x19,8);
  iVar51 = (**(code **)(*arg1 + 0x90))();
  iVar52 = (**(code **)(*arg1 + 0x38))();
  iVar53 = (**(code **)(*arg1 + 0x30))(0x1a,0xb);
  iVar54 = (**(code **)(*arg1 + 0xa8))();
  iVar55 = (**(code **)(*arg1 + 0x38))();
  iVar56 = (**(code **)(*arg1 + 0x30))(0x1b,8);
  iVar57 = (**(code **)(*arg1 + 0x90))();
  iVar58 = (**(code **)(*arg1 + 0x38))();
  iVar59 = (**(code **)(*arg1 + 0x30))(0x1c,0xf);
  iVar60 = (**(code **)(*arg1 + 0x58))();
  iVar60 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
           iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29 + iVar30 + iVar31 +
           iVar32 + iVar33 + iVar34 + iVar35 + iVar36 + iVar37 + iVar38 + iVar39 + iVar40 + iVar41 +
           iVar42 + iVar43 + iVar44 + iVar45 + iVar46 + iVar47 + iVar48 + iVar49 + iVar50 + iVar51 +
           iVar52 + iVar53 + iVar54 + iVar55 + iVar56 + iVar57 + iVar58 + iVar59 + iVar60;
  for (plVar61 = *(longlong **)(this + 0x170); plVar61 != *(longlong **)(this + 0x178);
      plVar61 = plVar61 + 4) {
    iVar1 = (**(code **)(*plVar61 + 0x18))();
    iVar60 = iVar60 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0x1d,0xf);
  iVar4 = (**(code **)(*arg1 + 0x58))();
  iVar4 = iVar1 + iVar60 + iVar2 + iVar3 + iVar4;
  for (plVar61 = *(longlong **)(this + 0x188); plVar61 != *(longlong **)(this + 400);
      plVar61 = plVar61 + 4) {
    iVar1 = (**(code **)(*plVar61 + 0x18))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0x1e,0xf);
  iVar5 = (**(code **)(*arg1 + 0x58))();
  iVar5 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
  for (plVar61 = *(longlong **)(this + 0x1a0); plVar61 != *(longlong **)(this + 0x1a8);
      plVar61 = plVar61 + 4) {
    iVar1 = (**(code **)(*plVar61 + 0x18))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x40))();
  iVar4 = (**(code **)(*arg1 + 0x28))();
  *(int *)((longlong)arg1 + 0x1c) = *(int *)((longlong)arg1 + 0x1c) + -1;
  return iVar1 + iVar5 + iVar2 + iVar3 + iVar4;
}




// ==================================================
// @012b6860 (1514 bytes) — math_loop

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  undefined4 *arg1;
  longlong this;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(this + 0x15c);
  lVar5 = *(longlong *)(this + 0x1c8);
  if (lVar5 == 0) {
    if (*(int *)(this + 0x304) < iVar8) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(this + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(this + 0x310) + uVar4) = 1;
          lVar5 = *(longlong *)(*(longlong *)(this + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b690c;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(this + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar5 = 0;
LAB_012b690c:
    *(longlong *)(this + 0x1c8) = lVar5;
  }
  iVar8 = iVar8 / 2;
  iVar1 = *(int *)(this + 0x160);
  if (iVar1 < 1) {
    bVar7 = true;
  }
  else {
    lVar3 = *(longlong *)(this + 0x1e8);
    bVar7 = true;
    lVar9 = 0;
    do {
      lVar6 = *(longlong *)(lVar3 + lVar9 * 8);
      if (lVar6 == 0) {
        if (*(int *)(this + 0x304) * 4 < iVar8 * 8) {
          FUN_00e828a0();
        }
        if (0 < (int)*(uint *)(this + 0x300)) {
          uVar4 = 0;
          do {
            if (*(char *)(*(longlong *)(this + 0x310) + uVar4) == '\0') {
              *(undefined1 *)(*(longlong *)(this + 0x310) + uVar4) = 1;
              lVar3 = *(longlong *)(*(longlong *)(this + 0x308) + uVar4 * 8) + 0x10;
              goto LAB_012b6972;
            }
            uVar4 = uVar4 + 1;
          } while (*(uint *)(this + 0x300) != uVar4);
        }
        FUN_00e828a0();
        lVar3 = 0;
LAB_012b6972:
        *(longlong *)(*(longlong *)(this + 0x1e8) + lVar9 * 8) = lVar3;
        lVar3 = *(longlong *)(this + 0x1e8);
        iVar1 = *(int *)(this + 0x160);
        lVar6 = *(longlong *)(lVar3 + lVar9 * 8);
      }
      if (lVar6 == 0) {
        bVar7 = false;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar1);
  }
  lVar3 = *(longlong *)(this + 0x1b8);
  if (lVar3 == 0) {
    if (*(int *)(this + 0x304) < iVar8) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(this + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(this + 0x310) + uVar4) = 1;
          lVar3 = *(longlong *)(*(longlong *)(this + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6ae7;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(this + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar3 = 0;
LAB_012b6ae7:
    *(longlong *)(this + 0x1b8) = lVar3;
    lVar9 = *(longlong *)(this + 0x1c0);
  }
  else {
    lVar9 = *(longlong *)(this + 0x1c0);
  }
  if (lVar9 == 0) {
    if (*(int *)(this + 0x304) < iVar8) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(this + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(this + 0x310) + uVar4) = 1;
          lVar9 = *(longlong *)(*(longlong *)(this + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6b66;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(this + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar9 = 0;
LAB_012b6b66:
    *(longlong *)(this + 0x1c0) = lVar9;
    lVar6 = *(longlong *)(this + 0x1d0);
  }
  else {
    lVar6 = *(longlong *)(this + 0x1d0);
  }
  if (lVar6 == 0) {
    if (*(int *)(this + 0x304) < *(int *)(this + 0x15c)) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(this + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(this + 0x310) + uVar4) = 1;
          lVar6 = *(longlong *)(*(longlong *)(this + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6bf6;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(this + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar6 = 0;
LAB_012b6bf6:
    *(longlong *)(this + 0x1d0) = lVar6;
    lVar10 = *(longlong *)(this + 0x2c0);
  }
  else {
    lVar10 = *(longlong *)(this + 0x2c0);
  }
  if (lVar10 == 0) {
    if (*(int *)(this + 0x304) < *(int *)(this + 0x15c)) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(this + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(this + 0x310) + uVar4) = 1;
          lVar10 = *(longlong *)(*(longlong *)(this + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6c87;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(this + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar10 = 0;
LAB_012b6c87:
    *(longlong *)(this + 0x2c0) = lVar10;
    lVar2 = *(longlong *)(this + 0x2c8);
  }
  else {
    lVar2 = *(longlong *)(this + 0x2c8);
  }
  if (lVar2 == 0) {
    if (*(int *)(this + 0x304) < *(int *)(this + 0x15c)) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(this + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(this + 0x310) + uVar4) = 1;
          lVar2 = *(longlong *)(*(longlong *)(this + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6d16;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(this + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar2 = 0;
LAB_012b6d16:
    *(longlong *)(this + 0x2c8) = lVar2;
  }
  if (lVar3 == 0) {
    bVar7 = false;
  }
  if (lVar9 == 0) {
    bVar7 = false;
  }
  if (lVar6 == 0) {
    bVar7 = false;
  }
  if (lVar10 == 0) {
    bVar7 = false;
  }
  if (lVar2 == 0) {
    bVar7 = false;
  }
  iVar8 = *(int *)(this + 0x160);
  if (0 < iVar8) {
    lVar3 = *(longlong *)(this + 0x170);
    lVar9 = 0;
    do {
      lVar6 = *(longlong *)(lVar3 + lVar9 * 8);
      if (lVar6 == 0) {
        if (*(int *)(this + 0x304) < *(int *)(this + 0x15c)) {
          FUN_00e828a0();
        }
        if (0 < (int)*(uint *)(this + 0x300)) {
          uVar4 = 0;
          do {
            if (*(char *)(*(longlong *)(this + 0x310) + uVar4) == '\0') {
              *(undefined1 *)(*(longlong *)(this + 0x310) + uVar4) = 1;
              lVar3 = *(longlong *)(*(longlong *)(this + 0x308) + uVar4 * 8) + 0x10;
              goto LAB_012b6d7e;
            }
            uVar4 = uVar4 + 1;
          } while (*(uint *)(this + 0x300) != uVar4);
        }
        FUN_00e828a0();
        lVar3 = 0;
LAB_012b6d7e:
        *(longlong *)(*(longlong *)(this + 0x170) + lVar9 * 8) = lVar3;
        lVar3 = *(longlong *)(this + 0x170);
        iVar8 = *(int *)(this + 0x160);
        lVar6 = *(longlong *)(lVar3 + lVar9 * 8);
      }
      if (lVar6 == 0) {
        bVar7 = false;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar8);
  }
  if (!bVar7) {
    *param_2 = 0;
    *arg1 = *(undefined4 *)(*(longlong *)(this + 0x110) + 0xc);
  }
  if (lVar5 == 0) {
    *param_1 = 0;
  }
  return;
}




// ==================================================
// @012b9d70 (1431 bytes) — math_loop

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  uint uVar9;
  float *in_RCX;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong in_RDX;
  longlong arg1;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  size_t in_R8D;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  *param_4 = 1.0;
  param_2 = param_2 / param_3;
  if (DAT_0239011c * (float)(int)in_R8D < param_2) {
    return;
  }
  _memcpy(in_RCX,(void *)((longlong)(int)in_R8D << 2),in_R8D);
  *in_RCX = 0.0;
  FUN_015c1480(param_2);
  fVar21 = _UNK_0241109c;
  fVar20 = _UNK_02411098;
  fVar22 = _UNK_02411094;
  fVar19 = DAT_02394274;
  uVar15 = (ulonglong)in_R8D;
  if (0 < (int)in_R8D) {
    if (in_R8D < 8) {
      uVar11 = 0;
    }
    else {
      uVar11 = (ulonglong)(in_R8D & 0xfffffff8);
      uVar10 = 0;
      do {
        pfVar8 = in_RCX + uVar10;
        fVar1 = pfVar8[1];
        fVar2 = pfVar8[2];
        fVar3 = pfVar8[3];
        if (*pfVar8 < fVar19) {
          in_RCX[uVar10] = 1.1754944e-38;
        }
        if (fVar1 < fVar22) {
          in_RCX[uVar10 + 1] = 1.1754944e-38;
        }
        if (fVar2 < fVar20) {
          in_RCX[uVar10 + 2] = 1.1754944e-38;
          if (fVar3 < fVar21) goto LAB_012b9f06;
LAB_012b9e95:
          pfVar8 = in_RCX + uVar10 + 4;
          fVar1 = *pfVar8;
          fVar2 = pfVar8[1];
          fVar3 = pfVar8[2];
          fVar4 = pfVar8[3];
        }
        else {
          if (fVar21 <= fVar3) goto LAB_012b9e95;
LAB_012b9f06:
          in_RCX[uVar10 + 3] = 1.1754944e-38;
          pfVar8 = in_RCX + uVar10 + 4;
          fVar1 = *pfVar8;
          fVar2 = pfVar8[1];
          fVar3 = pfVar8[2];
          fVar4 = pfVar8[3];
        }
        if (fVar1 < fVar19) {
          in_RCX[uVar10 + 4] = 1.1754944e-38;
        }
        if (fVar2 < fVar22) {
          in_RCX[uVar10 + 5] = 1.1754944e-38;
        }
        if (fVar3 < fVar20) {
          in_RCX[uVar10 + 6] = 1.1754944e-38;
        }
        if (fVar4 < fVar21) {
          in_RCX[uVar10 + 7] = 1.1754944e-38;
        }
        uVar10 = uVar10 + 8;
      } while (uVar11 != uVar10);
      fVar19 = DAT_02394274;
      if (uVar11 == uVar15) goto LAB_012b9f50;
    }
    do {
      if (in_RCX[uVar11] <= fVar19 && fVar19 != in_RCX[uVar11]) {
        in_RCX[uVar11] = 1.1754944e-38;
      }
      uVar11 = uVar11 + 1;
    } while (uVar15 != uVar11);
  }
LAB_012b9f50:
  fVar22 = DAT_0239011c;
  iVar17 = in_R8D - 1;
  fVar19 = *in_RCX;
  fVar20 = param_2;
  iVar5 = (int)(DAT_0239011c + param_2);
  iVar18 = 0;
  do {
    iVar6 = iVar5;
    uVar9 = iVar6 - iVar18;
    if (uVar9 != 0 && iVar18 <= iVar6) {
      uVar13 = (ulonglong)iVar6;
      fVar21 = (in_RCX[uVar13] - fVar19) / (float)(int)uVar9;
      uVar16 = (ulonglong)iVar18;
      uVar11 = ~uVar16;
      uVar10 = (ulonglong)uVar9 & 3;
      if ((uVar9 & 3) != 0) {
        do {
          fVar19 = fVar19 + fVar21;
          in_RCX[uVar16 + 1] = fVar19;
          uVar16 = uVar16 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (2 < uVar11 + uVar13) {
        do {
          in_RCX[uVar16 + 1] = fVar19 + fVar21;
          fVar19 = fVar19 + fVar21 + fVar21;
          in_RCX[uVar16 + 2] = fVar19;
          fVar19 = fVar19 + fVar21;
          in_RCX[uVar16 + 3] = fVar19;
          fVar19 = fVar19 + fVar21;
          in_RCX[uVar16 + 4] = fVar19;
          uVar16 = uVar16 + 4;
        } while (uVar13 != uVar16);
      }
    }
    fVar20 = fVar20 + param_2;
    iVar5 = (int)(fVar20 + fVar22);
    iVar18 = iVar6;
  } while ((int)(fVar20 + fVar22) < (int)in_R8D);
  if (iVar6 + 1 < (int)in_R8D) {
    lVar14 = (longlong)(iVar6 + 1);
    uVar9 = (in_R8D - iVar6) - 2;
    if (6 < uVar9) {
      uVar16 = (ulonglong)uVar9 + 1;
      uVar13 = uVar16 & 0xfffffffffffffff8;
      uVar11 = (uVar13 - 8 >> 3) + 1;
      uVar10 = (ulonglong)((uint)uVar11 & 3);
      if (uVar13 - 8 < 0x18) {
        lVar7 = 0;
      }
      else {
        lVar12 = -(uVar11 & 0xfffffffffffffffc);
        lVar7 = 0;
        do {
          pfVar8 = in_RCX + lVar14 + lVar7;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 4;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 8;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 0xc;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 0x10;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 0x14;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 0x18;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 0x1c;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          lVar7 = lVar7 + 0x20;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      if (uVar10 != 0) {
        lVar12 = 0;
        do {
          pfVar8 = (float *)((longlong)in_RCX + lVar12 + (lVar7 + lVar14) * 4);
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = (float *)((longlong)in_RCX + lVar12 + (lVar7 + lVar14) * 4 + 0x10);
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          lVar12 = lVar12 + 0x20;
        } while (uVar10 << 5 != lVar12);
      }
      if (uVar16 == uVar13) goto LAB_012ba13e;
      lVar14 = lVar14 + uVar13;
    }
    do {
      in_RCX[lVar14] = fVar19;
      lVar14 = lVar14 + 1;
    } while (in_R8D != (size_t)lVar14);
  }
LAB_012ba13e:
  fVar19 = DAT_02394274;
  if (1 < (int)in_R8D) {
    uVar11 = 1;
    do {
      if (fVar19 <= in_RCX[uVar11]) {
        fVar22 = (float)(int)uVar11 * param_1;
        if ((float)iVar17 <= fVar22) {
          fVar22 = in_RCX[iVar17];
        }
        else {
          fVar22 = (in_RCX[(longlong)(int)fVar22 + 1] - in_RCX[(int)fVar22]) *
                   (fVar22 - (float)(int)fVar22) + in_RCX[(int)fVar22];
        }
        *(float *)(in_RDX + uVar11 * 4) =
             (fVar22 / in_RCX[uVar11]) * *(float *)(in_RDX + uVar11 * 4);
      }
      uVar11 = uVar11 + 1;
    } while (uVar15 != uVar11);
  }
  fVar22 = DAT_02390d00;
  fVar19 = DAT_02390124;
  fVar20 = DAT_02390124 / (float)(int)((float)(int)in_R8D * DAT_0239426c);
  pfVar8 = (float *)(in_RDX + (longlong)iVar17 * 4);
  fVar21 = 0.0;
  do {
    *pfVar8 = (*pfVar8 + fVar22) * fVar21 + fVar19;
    fVar21 = fVar21 + fVar20;
    pfVar8 = pfVar8 + -1;
  } while (fVar21 < fVar19);
  fVar22 = 0.0;
  fVar20 = 0.0;
  if (1 < (int)in_R8D) {
    uVar11 = (ulonglong)((uint)(uVar15 - 1) & 3);
    if (uVar15 - 2 < 3) {
      fVar20 = 0.0;
      lVar14 = 1;
      fVar22 = 0.0;
    }
    else {
      fVar20 = 0.0;
      fVar22 = 0.0;
      uVar10 = 0;
      do {
        uVar13 = uVar10;
        fVar21 = *(float *)(arg1 + 4 + uVar13 * 4);
        fVar1 = *(float *)(arg1 + 8 + uVar13 * 4);
        fVar2 = *(float *)(arg1 + 0xc + uVar13 * 4);
        fVar3 = *(float *)(arg1 + 0x10 + uVar13 * 4);
        fVar22 = fVar22 + fVar21 + fVar1 + fVar2 + fVar3;
        fVar20 = fVar3 * *(float *)(in_RDX + 0x10 + uVar13 * 4) +
                 fVar2 * *(float *)(in_RDX + 0xc + uVar13 * 4) +
                 fVar1 * *(float *)(in_RDX + 8 + uVar13 * 4) +
                 fVar21 * *(float *)(in_RDX + 4 + uVar13 * 4) + fVar20;
        uVar10 = uVar13 + 4;
      } while ((uVar15 - 1 & 0xfffffffffffffffc) != uVar13 + 4);
      lVar14 = uVar13 + 5;
    }
    if (uVar11 != 0) {
      uVar15 = 0;
      do {
        fVar21 = *(float *)(arg1 + lVar14 * 4 + uVar15 * 4);
        fVar22 = fVar22 + fVar21;
        fVar20 = fVar20 + fVar21 * *(float *)(in_RDX + lVar14 * 4 + uVar15 * 4);
        uVar15 = uVar15 + 1;
      } while (uVar11 != uVar15);
    }
  }
  if (DAT_02394274 < fVar20) {
    fVar19 = fVar22 / fVar20;
  }
  *param_4 = fVar19;
  return;
}




// ==================================================
// @01c64c20 (1055 bytes) — math_loop

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  undefined *puVar5;
  longlong this;
  longlong lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined1 local_90 [8];
  undefined1 local_88;
  longlong local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  double local_60;
  undefined8 *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(this + 0x2b0) == 0) {
    uVar7 = FUN_01c44d20(param_1,param_2,param_3,param_4,0);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        uVar7 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_88 = 1;
    FUN_01c44700(uVar7,local_90);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = param_2;
    puVar1 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar5 = &DAT_02572358;
    *puVar1 = &DAT_02572358;
    (*DAT_02572370)();
    lVar2 = *(longlong *)(this + 0x2b0);
    local_58 = puVar1;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar6 = 0;
      do {
        pVar4 = (pthread_key_t)puVar5;
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar6 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_48 = lVar2;
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        local_60 = *(double *)(*(longlong *)(*(longlong *)(this + 0x2b8) + 0x10) + lVar6 * 8);
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = FUN_01507970();
        dVar8 = (double)FUN_016c98e0(uVar7,0);
        if ((local_60 != dVar8) || (NAN(local_60) || NAN(dVar8))) {
LAB_01c64f29:
          puVar1 = local_58;
          local_40 = local_48;
          local_38 = '\0';
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60 = *(double *)(*(longlong *)(*(longlong *)(this + 0x2c0) + 0x10) + lVar6 * 8)
          ;
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar7 = FUN_01508610();
          dVar8 = (double)FUN_016c98e0(uVar7,0);
          if ((local_60 != dVar8) || (puVar1 = local_58, NAN(local_60) || NAN(dVar8)))
          goto LAB_01c64f29;
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
        lVar2 = *(longlong *)(this + 0x2b0);
        puVar5 = (undefined *)(longlong)*(int *)(lVar2 + 0xc);
      } while (lVar6 < (longlong)puVar5);
    }
    local_68 = '\0';
    local_70 = puVar1;
    FUN_00e7bdb0();
    FUN_01287c80();
    if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @008c5ce8 (944 bytes) — math_loop

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *arg1;
  longlong this;
  ulonglong uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar9 = this + 0x40;
  lVar10 = this + 0x24;
  lVar11 = this + 0x20;
  lVar12 = this + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_3c,param_3,param_4,lVar9,lVar10,lVar11,lVar12,uVar13,uVar14,
                       uVar15);
    iVar2 = iVar2 + iVar1;
    if (local_3c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar13 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = (int)local_36;
    switch(iVar1) {
    case 1:
      if (local_3c != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x25c) = 1;
      goto LAB_008c604a;
    case 2:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x25d) = 1;
        goto LAB_008c604a;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x25e) = 1;
        goto LAB_008c604a;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 4:
      if (local_3c == 0xf) {
        lVar6 = *(longlong *)(this + 0x28);
        uVar8 = extraout_XMM0_Da;
        for (lVar5 = *(longlong *)(this + 0x30); lVar5 != lVar6; lVar5 = lVar5 + -0x30) {
          uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x30))();
        }
        *(longlong *)(this + 0x30) = lVar6;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
        FUN_008c60dc();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(this + 0x28) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x30;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 0x25f) = 1;
        goto LAB_008c604a;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 5:
      if (local_3c == 0xc) {
        iVar3 = FUN_008892fe();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x260) = 1;
        goto LAB_008c604a;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 6:
      if (local_3c == 0xc) {
        iVar3 = FUN_0088b06e();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x261) = 1;
        goto LAB_008c604a;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      if (iVar1 == 0xc44) {
        if (local_3c == 0xc) {
          iVar3 = FUN_008f1210();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(this + 0x262) = 1;
          goto LAB_008c604a;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (iVar1 == 10000) {
        if (local_3c == 8) {
          iVar3 = (**(code **)(*arg1 + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(this + 0x263) = 1;
          goto LAB_008c604a;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    iVar3 = iVar3 + iVar2;
LAB_008c604a:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ==================================================
// @012b9080 (863 bytes) — calculation

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *this;
  longlong *plVar3;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined4 local_54;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  local_54 = param_2;
  FUN_00da5ad0();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = plVar2;
  FUN_00da6c20();
  local_b0 = DAT_027bec88;
  if (DAT_027bec88 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  FUN_000175c0(param_1,&local_b0);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar2 + 0x18))();
    FUN_00da6c20();
    plVar1 = DAT_027bec88;
    local_98 = '\0';
    local_a0 = plVar2;
    if (DAT_027bec88 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_40 = plVar1;
    local_38 = '\0';
    FUN_00ca0840(param_1,&local_40);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d46530();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_90 = plVar1;
  local_88 = '\0';
  FUN_012c20e0(param_1,&local_90);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_00e83120();
    if ((((local_40 != (longlong *)0x0) && (plVar3 = local_40, local_38 == '\0')) &&
        (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_78 = '\0';
    local_70 = plVar1;
    local_68 = '\0';
    local_80 = plVar3;
    FUN_012c2030(param_1,&local_70);
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *this = plVar3;
  *(undefined1 *)(this + 1) = 1;
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = local_60;
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @008b91c8 (649 bytes) — math_loop

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *arg1;
  ulonglong uVar5;
  longlong this;
  undefined4 extraout_XMM0_Da;
  int local_44;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_36,&local_44);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 < 0xc44) {
      if (local_36 == 1) {
        if (local_44 == 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x150))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(this + 0x2c8) = 1;
          goto LAB_008b93a9;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_36 == 2) {
        if (local_44 == 10) {
          iVar3 = (**(code **)(*arg1 + 0x140))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(this + 0x2c9) = 1;
          goto LAB_008b93a9;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
LAB_008b935f:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_008b93a3:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 0xc44) {
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008b93a3;
      }
      iVar3 = FUN_008f7b82();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x2ca) = 1;
    }
    else {
      if (local_36 != 0xc45) goto LAB_008b935f;
      if (local_44 != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008b93a3;
      }
      *(undefined8 *)(this + 0x2b8) = *(undefined8 *)(this + 0x2b0);
      iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar5 = (ulonglong)local_34;
      uVar4 = *(longlong *)(this + 0x2b8) - *(longlong *)(this + 0x2b0);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(ulonglong *)(this + 0x2b8) = *(longlong *)(this + 0x2b0) + uVar5;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar4 = 0;
        do {
          iVar2 = (**(code **)(*arg1 + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(this + 0x2cb) = 1;
    }
LAB_008b93a9:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ==================================================
// @012b9ad0 (634 bytes) — math_loop

{
  uint *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  longlong lVar9;
  longlong arg1;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  
  iVar8 = 1;
  if (param_3 != 0) {
    iVar8 = param_3;
  }
  if (0 < (int)param_2) {
    lVar11 = (longlong)param_4;
    uVar10 = 0;
    do {
      puVar1 = *(uint **)(local_res8 + uVar10 * 8);
      puVar2 = *(undefined8 **)(local_res10 + uVar10 * 8);
      param_1 = FUN_00e83530(param_1,*(undefined8 *)(arg1 + uVar10 * 8));
      if (local_res18 == 0) {
        if (param_3 == 0) {
          *puVar2 = 0x3f800000;
        }
        fVar7 = DAT_023b4df0;
        uVar5 = _DAT_02390140;
        fVar4 = DAT_02390124;
        lVar9 = (longlong)iVar8;
        if (iVar8 < param_4) {
          do {
            while( true ) {
              param_1 = *(ulonglong *)(puVar1 + lVar9 * 2);
              fVar14 = (float)(param_1 >> 0x20);
              fVar15 = (float)((uint)fVar14 & uVar5);
              fVar13 = (float)param_1;
              if ((fVar13 == 0.0) && (fVar12 = fVar15, !NAN(fVar13))) break;
              fVar12 = (float)((uint)fVar13 & uVar5);
              if ((fVar14 == 0.0) && (!NAN(fVar14))) break;
              if (fVar12 <= fVar15) {
                fVar12 = SQRT((fVar12 / fVar15) * (fVar12 / fVar15) + fVar4) * fVar15;
                break;
              }
              fVar12 = fVar12 * SQRT((fVar15 / fVar12) * (fVar15 / fVar12) + fVar4);
              if (fVar12 <= fVar7) goto LAB_012b9cb0;
LAB_012b9cf1:
              param_1 = CONCAT44(fVar14 * (fVar4 / fVar12),fVar13 * (fVar4 / fVar12));
              puVar2[lVar9] = param_1;
              lVar9 = lVar9 + 1;
              if (lVar11 == lVar9) goto LAB_012b9b30;
            }
            if (fVar7 < fVar12) goto LAB_012b9cf1;
LAB_012b9cb0:
            puVar2[lVar9] = 0x3f800000;
            lVar9 = lVar9 + 1;
          } while (lVar11 != lVar9);
        }
      }
      else {
        puVar3 = *(uint **)(local_res18 + uVar10 * 8);
        if (param_3 == 0) {
          param_1 = (ulonglong)*puVar1;
          *puVar3 = *puVar1;
          *puVar2 = 0x3f800000;
        }
        fVar7 = DAT_023b4df0;
        uVar6 = _UNK_02390144;
        uVar5 = _DAT_02390140;
        fVar4 = DAT_02390124;
        lVar9 = (longlong)iVar8;
        if (iVar8 < param_4) {
          do {
            while( true ) {
              param_1 = *(ulonglong *)(puVar1 + lVar9 * 2);
              fVar14 = (float)(param_1 >> 0x20);
              fVar15 = (float)((uint)fVar14 & uVar5);
              fVar13 = (float)param_1;
              if ((fVar13 == 0.0) && (fVar12 = fVar15, !NAN(fVar13))) break;
              fVar12 = (float)((uint)fVar13 & uVar5);
              param_1 = CONCAT44((uint)fVar14 & uVar6,fVar12);
              if ((fVar14 == 0.0) && (!NAN(fVar14))) break;
              if (fVar15 < fVar12) {
                fVar12 = SQRT((fVar15 / fVar12) * (fVar15 / fVar12) + fVar4) * fVar12;
                break;
              }
              fVar13 = (fVar12 / fVar15) * (fVar12 / fVar15) + fVar4;
              param_1 = CONCAT44((uint)fVar14 & uVar6,fVar13);
              fVar12 = SQRT(fVar13) * fVar15;
              puVar3[lVar9] = (uint)fVar12;
              if (fVar12 <= fVar7) goto LAB_012b9bb0;
LAB_012b9c1a:
              param_1 = CONCAT44((fVar4 / fVar12) *
                                 (float)((ulonglong)*(undefined8 *)(puVar1 + lVar9 * 2) >> 0x20),
                                 (fVar4 / fVar12) * (float)*(undefined8 *)(puVar1 + lVar9 * 2));
              puVar2[lVar9] = param_1;
              lVar9 = lVar9 + 1;
              if (lVar11 == lVar9) goto LAB_012b9b30;
            }
            puVar3[lVar9] = (uint)fVar12;
            if (fVar7 < fVar12) goto LAB_012b9c1a;
LAB_012b9bb0:
            puVar2[lVar9] = 0x3f800000;
            lVar9 = lVar9 + 1;
          } while (lVar11 != lVar9);
        }
      }
LAB_012b9b30:
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_2);
  }
  return;
}




// ==================================================
// @012b6e60 (548 bytes) — calculation

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong *arg1;
  longlong *this;
  undefined8 uVar7;
  double dVar8;
  byte local_res10;
  char local_res18;
  longlong local_60;
  char local_58;
  
  plVar6 = (longlong *)*arg1;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (longlong *)*arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  iVar2 = (**(code **)(*plVar6 + 0x3a0))();
  if (iVar2 < param_3) {
    plVar6 = (longlong *)*arg1;
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      plVar6 = (longlong *)*arg1;
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
    }
    param_3 = (**(code **)(*plVar6 + 0x3a0))();
  }
  iVar2 = FUN_00b33120();
  if (iVar2 < param_3) {
    param_3 = FUN_00b33120();
  }
  pVar5 = 1;
  if (local_res18 == '\0') {
    pVar5 = (uint)local_res10 * 2;
  }
  plVar6 = (longlong *)*arg1;
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (longlong *)*arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  dVar8 = DAT_0238fee8 / (double)param_2;
  (**(code **)(*this + 0x420))();
  uVar7 = (**(code **)(*this + 0x5f8))();
  cVar1 = (**(code **)(*plVar6 + 0x388))(dVar8,uVar7,param_3,param_4);
  if (cVar1 == '\0') {
    (**(code **)(*this + 0x5d0))();
    if (local_58 == '\0') {
      if (local_60 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_60 == 0) {
      return;
    }
    FUN_012dc360();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @019e75f0 (505 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  void *pvVar4;
  pthread_key_t in_ECX;
  longlong *arg1;
  longlong this;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  longlong local_60;
  char local_58;
  
  lVar1 = *arg1;
  lVar2 = *(longlong *)(this + 0x430);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(this + 0x430) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  *(longlong *)(this + 0x1c0) = *arg1;
  uVar8 = FUN_00e7d6f0();
  *(undefined8 *)(this + 0x1d0) = uVar8;
  *(undefined8 *)(this + 0x1d8) = param_1;
  *(undefined8 *)(this + 0x1c8) = 0;
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      goto LAB_019e76eb;
    }
  }
  else if (local_60 != 0) {
LAB_019e76eb:
    if (*(int *)(local_60 + 0xc) < 1) {
      iVar5 = 0;
      fVar9 = 0.0;
    }
    else {
      fVar9 = 0.0;
      iVar6 = 0;
      iVar5 = 0;
      do {
        pvVar4 = _pthread_getspecific(in_ECX);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar7 = (float)FUN_013de3b0();
        bVar3 = !NAN(fVar7) && !NAN(fVar7);
        in_ECX = CONCAT31((int3)(in_ECX >> 8),bVar3);
        if (!NAN(fVar7)) {
          fVar9 = fVar9 + fVar7;
        }
        iVar5 = iVar5 + (uint)bVar3;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_60 + 0xc));
    }
    FUN_001150f0();
    FUN_00d50b20();
    if (iVar5 != 0) {
      fVar9 = fVar9 / (float)iVar5;
      goto LAB_019e77d8;
    }
  }
  fVar9 = 0.0;
LAB_019e77d8:
  *(float *)(this + 0x1e0) = fVar9;
  return;
}



