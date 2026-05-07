// Function: FUN_01e16380
// Address: 01e16380
// Size: 2998 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01e16cac) */
/* WARNING: Removing unreachable block (ram,0x01e16cb5) */
/* WARNING: Removing unreachable block (ram,0x01e16e50) */
/* WARNING: Removing unreachable block (ram,0x01e16e59) */
/* WARNING: Removing unreachable block (ram,0x01e16efb) */
/* WARNING: Removing unreachable block (ram,0x01e16f04) */
/* WARNING: Removing unreachable block (ram,0x01e16cfc) */
/* WARNING: Removing unreachable block (ram,0x01e16d05) */

undefined8 FUN_01e16380(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint in_EDX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar11;
  ulonglong uVar12;
  uint uVar13;
  uint7 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  float fVar19;
  undefined1 auVar17 [16];
  float fVar20;
  undefined4 uVar21;
  undefined1 auVar18 [16];
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  fVar20 = (float)((ulonglong)param_2 >> 0x20);
  if ((char)unaff_RDI[0x2a] == '\0') {
    return 0;
  }
  if ((in_EDX & 2) != 0) {
    return 0;
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1cc) = 0xffffffff;
  plVar2 = (longlong *)unaff_RDI[0x38];
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    local_98 = *unaff_RSI;
    local_90 = '\0';
    cVar5 = (**(code **)(*plVar2 + 0x18))(in_EDX,&local_98);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      return 1;
    }
  }
  uVar10 = 0;
  if ((char)in_EDX < '\0') {
    return 0;
  }
  uVar7 = *(uint *)((longlong)unaff_RDI + 0x164);
  uVar12 = (ulonglong)uVar7;
  uVar1 = *(uint *)(unaff_RDI + 0x2d);
  if ((in_EDX & 0x1000) == 0) {
    if ((in_EDX & 0x4000) != 0) {
      uVar7 = (uint)(0 < (int)uVar7);
      if (uVar1 != 0) {
        uVar7 = uVar1;
      }
      if ((int)uVar7 < 1) {
        return 1;
      }
      uVar15 = FUN_00d8ede0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar15 = FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = '\x01';
      local_78 = local_40;
      FUN_01e15f00(uVar15,&local_78);
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = *unaff_RDI;
LAB_01e168a2:
      (**(code **)(lVar9 + 0x968))();
      return 1;
    }
    if ((in_EDX & 0x100) == 0) {
      if ((in_EDX & 0x200) == 0) {
        if ((in_EDX & 0x800) == 0) {
          if ((in_EDX & 0x400) == 0) {
            iVar6 = FUN_00d8c7a0();
            if (iVar6 == 1) {
              uVar7 = FUN_00d8cbc0();
              uVar10 = (ulonglong)uVar7;
              uVar14 = (uint7)(uint3)(uVar7 >> 8);
              if (*(char *)((longlong)unaff_RDI + 0x174) == '\0') {
                if (((*(char *)((longlong)unaff_RDI + 0x1b9) != '\0') &&
                    (cVar5 = FUN_00d9bcb0(), cVar5 != '\0')) && ((in_EDX & 8) == 0)) {
                  FUN_01d3a560();
                  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b00();
                  }
                  uVar10 = FUN_01d3b590();
                  if ((uVar10 & 4) == 0) {
                    (**(code **)(*unaff_RDI + 0x880))();
                    if (local_40 == (longlong *)0x0) goto LAB_01e16f1d;
                    if (local_38 == '\0') {
                      FUN_00d50b00();
                    }
                    (**(code **)(*local_40 + 0x8c0))();
                  }
                  else {
                    (**(code **)(*unaff_RDI + 0x888))();
                    if (local_40 == (longlong *)0x0) goto LAB_01e16f1d;
                    if (local_38 == '\0') {
                      FUN_00d50b00();
                    }
                    (**(code **)(*local_40 + 0x8c0))();
                  }
                  FUN_00d50b20();
LAB_01e16f1d:
                  if (local_40 == (longlong *)0x0) {
                    return CONCAT71(uVar14,1);
                  }
                  FUN_00d50b20();
                  return CONCAT71(uVar14,1);
                }
              }
              else {
                cVar5 = FUN_00d9bc90();
                if (cVar5 != '\0') {
                  uVar15 = CONCAT71(uVar14,1);
                  if (unaff_RDI[6] == 0) {
                    return uVar15;
                  }
                  FUN_01e40eb0();
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (local_40 == (longlong *)0x0) {
                    return uVar15;
                  }
                  FUN_01e40eb0();
                  (**(code **)(*local_40 + 0xaf0))();
                  if (local_38 == '\0') {
                    return uVar15;
                  }
                  if (local_40 == (longlong *)0x0) {
                    return uVar15;
                  }
                  FUN_00d50b20();
                  return uVar15;
                }
                cVar5 = FUN_00d9bcb0();
                if (cVar5 != '\0') {
                  uVar15 = CONCAT71(uVar14,1);
                  if (unaff_RDI[6] == 0) {
                    return uVar15;
                  }
                  FUN_01e40eb0();
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (local_40 == (longlong *)0x0) {
                    return uVar15;
                  }
                  FUN_01e40eb0();
                  (**(code **)(*local_40 + 0xaf0))();
                  if (local_38 == '\0') {
                    return uVar15;
                  }
                  if (local_40 == (longlong *)0x0) {
                    return uVar15;
                  }
                  FUN_00d50b20();
                  return uVar15;
                }
                if ((short)uVar7 == 0x1b) {
                  uVar15 = CONCAT71(uVar14,1);
                  if (unaff_RDI[6] == 0) {
                    return uVar15;
                  }
                  FUN_01e40eb0();
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (local_40 == (longlong *)0x0) {
                    return uVar15;
                  }
                  FUN_01e40eb0();
                  (**(code **)(*local_40 + 0xaf0))();
                  if (local_38 == '\0') {
                    return uVar15;
                  }
                  if (local_40 == (longlong *)0x0) {
                    return uVar15;
                  }
                  FUN_00d50b20();
                  return uVar15;
                }
              }
            }
            FUN_01e42030();
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
                goto LAB_01e16e5e;
              }
            }
            else if (local_40 != (longlong *)0x0) {
LAB_01e16e5e:
              cVar5 = FUN_01d8b240();
              if (cVar5 == '\0') {
                FUN_01e42030();
                FUN_01d8b760();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                for (iVar6 = 0; iVar8 = FUN_00d8c7a0(), iVar6 < iVar8; iVar6 = iVar6 + 1) {
                  FUN_00d8cbc0();
                  FUN_01e175a0();
                }
              }
              FUN_00d50b20();
              return CONCAT71((int7)(uVar10 >> 8),1);
            }
            goto LAB_01e16c08;
          }
          (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
          iVar6 = FUN_00d8c7a0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar6 == 0) {
            return 1;
          }
          (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
          iVar6 = FUN_00d8c7a0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar6 <= (int)(uVar1 + uVar7)) {
            (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
            FUN_00d8c7a0();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          auVar17._0_8_ = FUN_01eabd30();
          auVar17._8_8_ = extraout_XMM0_Qb_00;
          fVar20 = (float)((ulonglong)auVar17._0_8_ >> 0x20);
          uVar21 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
          auVar3._4_4_ = fVar20;
          auVar3._0_4_ = fVar20 + DAT_02390d00;
          auVar3._8_4_ = uVar21;
          auVar3._12_4_ = uVar21;
          auVar18 = insertps(auVar17,auVar3,0x10);
          FUN_01eacf20(auVar18._0_8_);
        }
        else {
          (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
          iVar6 = FUN_00d8c7a0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar6 == 0) {
            return 1;
          }
          (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
          iVar6 = FUN_00d8c7a0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar6 <= (int)(uVar1 + uVar7)) {
            (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
            FUN_00d8c7a0();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          auVar16._0_8_ = FUN_01eabd30();
          auVar16._8_8_ = extraout_XMM0_Qb;
          fVar19 = (float)((ulonglong)auVar16._0_8_ >> 0x20);
          uVar21 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
          auVar18._4_4_ = fVar19;
          auVar18._0_4_ = fVar19 + fVar20 + DAT_02390124;
          auVar18._8_4_ = uVar21;
          auVar18._12_4_ = uVar21;
          auVar18 = insertps(auVar16,auVar18,0x10);
          iVar6 = FUN_01eacf20(auVar18._0_8_);
          if (iVar6 == -1) {
            (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
            FUN_00d8c7a0();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar9 = *unaff_RDI;
        goto LAB_01e168a2;
      }
      uVar10 = 0;
      if ((in_EDX & 8) != 0) {
        uVar13 = uVar1 + uVar7;
        bVar11 = false;
        while( true ) {
          uVar10 = (ulonglong)uVar13;
          (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
          iVar6 = FUN_00d8c7a0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar6 <= (int)uVar13) break;
          (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
          FUN_00d8cbc0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d95590();
          cVar5 = FUN_00d90d50();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar4 = true;
          if ((cVar5 != '\0') && (bVar4 = bVar11, bVar11)) break;
          bVar11 = bVar4;
          uVar13 = uVar13 + 1;
        }
      }
      if ((in_EDX & 4) == 0) {
        if ((int)uVar1 < 1) {
          (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
          iVar6 = FUN_00d8c7a0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (((int)uVar7 < iVar6) && ((in_EDX & 8) == 0)) {
            uVar10 = (ulonglong)(uVar7 + 1);
          }
        }
      }
      else {
        (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
        iVar6 = FUN_00d8c7a0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar13 = (int)uVar10 - uVar7;
        if ((in_EDX & 8) == 0) {
          uVar13 = uVar1 + ((int)(uVar1 + uVar7) < iVar6);
        }
        uVar10 = (ulonglong)uVar13;
      }
    }
    else if (((in_EDX & 8) != 0) && (uVar7 != 0)) {
      bVar11 = false;
      do {
        uVar7 = (int)uVar12 - 1;
        uVar12 = (ulonglong)uVar7;
        (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
        FUN_00d8cbc0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d95590();
        cVar5 = FUN_00d90d50();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar4 = true;
        uVar10 = uVar12;
      } while (((cVar5 == '\0') || (bVar4 = bVar11, !bVar11)) && (bVar11 = bVar4, uVar7 != 0));
    }
    lVar9 = *unaff_RDI;
  }
  else {
    if (uVar1 == 0) {
      (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
      iVar6 = FUN_00d8c7a0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar6 <= (int)uVar7) {
        return 1;
      }
    }
    else if ((int)uVar1 < 1) goto LAB_01e16c08;
    uVar10 = 0;
    uVar15 = FUN_00d8ede0();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar15 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    local_88 = local_40;
    FUN_01e15f00(uVar15,&local_88);
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar9 = *unaff_RDI;
  }
  (**(code **)(lVar9 + 0x968))();
LAB_01e16c08:
  return CONCAT71((int7)(uVar10 >> 8),1);
}


