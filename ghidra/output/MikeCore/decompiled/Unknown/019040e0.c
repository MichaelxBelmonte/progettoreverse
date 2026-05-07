// Function: FUN_019040e0
// Address: 019040e0
// Size: 3484 bytes
// Class: Unknown


void FUN_019040e0(double param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  pthread_key_t pVar7;
  undefined8 in_RCX;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  double *unaff_RSI;
  longlong unaff_RDI;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double local_c0;
  undefined1 local_b8;
  longlong local_b0;
  double local_a8;
  double local_a0;
  longlong local_98;
  char local_90;
  undefined8 local_88;
  double local_80;
  longlong local_78;
  double local_70;
  longlong local_68;
  char local_60 [8];
  longlong *local_58;
  char local_40 [8];
  char local_38 [8];
  
  dVar18 = *unaff_RSI;
  local_a0 = param_1;
  if (dVar18 == 0.0) {
    local_90 = 0;
    lVar14 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar14 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    local_98 = lVar14;
    uVar3 = FUN_016ebac0();
    lVar14 = local_68;
    if (local_68 == 0) {
      lVar14 = 0;
      local_88 = 0;
    }
    else if (local_60[0] == '\0') {
      uVar3 = FUN_00d50b00();
      local_88 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60[0] = '\0';
      local_88 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_b8 = 0;
    local_c0 = dVar18;
    uVar3 = FUN_01901690(in_RCX,&local_c0);
    lVar14 = local_68;
    if (local_68 == 0) {
      lVar14 = 0;
      local_88 = 0;
    }
    else {
      local_88 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      if (local_60[0] == '\0') {
        FUN_00d50b00();
      }
    }
  }
  local_80 = dVar18;
  local_78 = lVar14;
  FUN_00d23340();
  lVar12 = local_68;
  local_38[0] = local_60[0];
  pcVar4 = local_60;
  if (local_60[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23340();
  lVar8 = local_68;
  local_40[0] = local_60[0];
  pcVar4 = local_60;
  if (local_60[0] == '\0') {
    pcVar4 = local_40;
  }
  *pcVar4 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  if (lVar12 == lVar8) {
    FUN_00d23740();
  }
  if (*(int *)(lVar14 + 0xc) == 0) goto LAB_01904c2f;
  FUN_00d23310();
  lVar14 = local_68;
  local_40[0] = local_60[0];
  pcVar4 = local_60;
  if (local_60[0] == '\0') {
    pcVar4 = local_40;
  }
  *pcVar4 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_40[0] == '\0') {
    if (lVar14 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_00d23310();
  lVar12 = local_68;
  local_38[0] = local_60[0];
  pcVar4 = local_60;
  if (local_60[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_58 = (longlong *)(unaff_RDI + 0x38);
  if (lVar14 == lVar12) {
    if ((local_38[0] != '\0') && (lVar12 != 0)) {
      FUN_00d50b20();
    }
    iVar9 = 0;
LAB_01904436:
    lVar12 = local_78;
    if (lVar14 != 0) {
LAB_0190453c:
      lVar12 = local_78;
      FUN_00d50b20();
    }
  }
  else {
    if (lVar14 != 0) {
      iVar11 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc);
      if ((local_38[0] != '\0') && (lVar12 != 0)) {
        FUN_00d50b20();
      }
      iVar9 = 0;
      if (iVar11 != 0) {
        FUN_00d23340();
        lVar12 = local_68;
        local_38[0] = local_60[0];
        pcVar4 = local_38;
        pcVar6 = local_60;
        if (local_60[0] == '\0') {
          pcVar6 = pcVar4;
        }
        *pcVar6 = '\0';
        if ((local_60[0] != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        pVar7 = (pthread_key_t)pcVar4;
        if ((local_38[0] != '\0') && (lVar12 != 0)) {
          FUN_00d50b20();
        }
        if (lVar14 == lVar12) {
          iVar9 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc) + -1;
        }
        else {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_70 = (double)FUN_01907950();
          iVar11 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc);
          dVar18 = (double)FUN_01907950();
          if (dVar18 <= local_70) {
            dVar18 = (double)FUN_01907950();
            iVar9 = iVar11 + -2;
            if (local_70 < dVar18) {
              iVar1 = 1;
              iVar2 = iVar9;
              if (local_80 == 0.0) {
                dVar18 = (double)FUN_01907950();
                if (dVar18 <= local_70) {
                  if (2 < iVar11) {
                    dVar18 = (double)FUN_01907950();
                    if (dVar18 <= local_70) {
                      if (iVar11 < 4) goto LAB_01904d74;
                      dVar18 = (double)FUN_01907950();
                      if (dVar18 <= local_70) {
                        if (iVar11 < 5) goto LAB_01904d01;
                        dVar18 = (double)FUN_01907950();
                        iVar1 = 1;
                        if (dVar18 <= local_70) goto LAB_01904e40;
                        iVar2 = 4;
                      }
                      else {
                        iVar2 = 3;
                      }
                    }
                    else {
LAB_01904d01:
                      iVar2 = 2;
                    }
LAB_01904d79:
                    iVar1 = 1;
                  }
                }
                else {
                  dVar18 = (double)FUN_01907950();
                  if (local_70 < dVar18) {
LAB_01904d74:
                    iVar2 = 1;
                    goto LAB_01904d79;
                  }
                  iVar1 = 0;
                  iVar2 = 1;
                }
              }
LAB_01904e40:
              do {
                iVar9 = iVar1;
                if (iVar2 - iVar9 == 1) break;
                iVar11 = (iVar2 - iVar9) / 2 + iVar9;
                dVar18 = (double)FUN_01907950();
                iVar1 = iVar11;
                if (local_70 <= dVar18) {
                  iVar1 = iVar9;
                  iVar2 = iVar11;
                }
              } while ((dVar18 != local_70) || (iVar9 = iVar11, NAN(dVar18) || NAN(local_70)));
              goto LAB_01904436;
            }
          }
        }
      }
      goto LAB_0190453c;
    }
    if ((local_38[0] != '\0') && (lVar12 != 0)) {
      FUN_00d50b20();
    }
    iVar9 = 0;
    lVar12 = local_78;
  }
  iVar11 = *(int *)(lVar12 + 0xc);
  FUN_00d23340();
  lVar14 = local_68;
  pcVar4 = local_40;
  if (local_60[0] != '\0') {
    pcVar4 = local_60;
  }
  local_40[0] = local_60[0];
  *pcVar4 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_40[0] == '\0') {
    if (lVar14 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_00d23310();
  lVar12 = local_68;
  local_38[0] = local_60[0];
  pcVar4 = local_38;
  pcVar6 = local_60;
  if (local_60[0] == '\0') {
    pcVar6 = pcVar4;
  }
  *pcVar6 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar14 == lVar12) {
    if ((local_38[0] != '\0') && (lVar12 != 0)) {
      FUN_00d50b20();
    }
    dVar18 = 0.0;
LAB_019046b4:
    iVar11 = SUB84(dVar18,0) + 1;
    if (lVar14 != 0) {
LAB_01904865:
      FUN_00d50b20();
      dVar18 = (double)((ulonglong)dVar18 & 0xffffffff);
    }
  }
  else {
    if (lVar14 != 0) {
      iVar2 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc);
      if ((local_38[0] != '\0') && (lVar12 != 0)) {
        FUN_00d50b20();
      }
      if (iVar2 == 0) {
        dVar18 = 0.0;
      }
      else {
        FUN_00d23340();
        lVar12 = local_68;
        pcVar4 = local_38;
        pcVar6 = local_60;
        if (local_60[0] == '\0') {
          pcVar6 = pcVar4;
        }
        local_38[0] = local_60[0];
        *pcVar6 = '\0';
        if ((local_60[0] != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (lVar12 != 0)) {
          FUN_00d50b20();
        }
        if (lVar14 == lVar12) {
          dVar18 = (double)(ulonglong)(*(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc) - 1);
        }
        else {
          pvVar5 = _pthread_getspecific((pthread_key_t)pcVar4);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar19 = (double)FUN_01907950();
          iVar2 = *(int *)(*local_58 + 0xc);
          dVar20 = (double)FUN_01907950();
          dVar18 = 0.0;
          if (dVar20 <= dVar19) {
            dVar20 = (double)FUN_01907950();
            dVar18 = (double)((longlong)iVar2 - 2);
            if (dVar19 < dVar20) {
              iVar1 = iVar11 + iVar9;
              if (iVar1 == 0) {
                uVar17 = 1;
                dVar20 = dVar18;
              }
              else {
                uVar17 = (iVar9 + iVar11) - 1;
                dVar20 = (double)(ulonglong)uVar17;
                if (SUB84(dVar18,0) < (int)uVar17) {
                  dVar20 = (double)((ulonglong)dVar18 & 0xffffffff);
                }
                dVar21 = 4.94065645841247e-324;
                if (1 < iVar1) {
                  dVar21 = dVar20;
                }
                pcVar4 = *(char **)(*local_58 + 0x10);
                local_80 = dVar18;
                dVar18 = (double)FUN_01907950();
                uVar17 = SUB84(dVar21,0);
                if (dVar18 <= dVar19) {
                  uVar10 = uVar17;
                  if ((int)uVar17 < iVar2 + -1) {
                    dVar21 = (double)(ulonglong)(uVar17 + 1);
                    pcVar4 = *(char **)(*local_58 + 0x10);
                    dVar18 = (double)FUN_01907950();
                    if (dVar19 < dVar18) goto LAB_01904d3c;
                  }
                  dVar21 = (double)(ulonglong)(uVar17 + 2);
                  if ((int)(uVar17 + 2) < iVar2) {
                    pcVar4 = *(char **)(*local_58 + 0x10);
                    dVar18 = (double)FUN_01907950();
                    if (dVar19 < dVar18) goto LAB_01904d3c;
                  }
                  dVar21 = (double)(ulonglong)(uVar17 + 3);
                  dVar20 = local_80;
                  if ((int)(uVar17 + 3) < iVar2) {
                    pcVar4 = *(char **)(*local_58 + 0x10);
                    dVar18 = (double)FUN_01907950();
                    dVar20 = local_80;
                    if (dVar19 < dVar18) goto LAB_01904d3c;
                  }
                }
                else {
                  if ((int)uVar17 < 1) {
                    dVar21 = dVar20;
                    uVar10 = 1;
                  }
                  else {
                    pcVar4 = *(char **)(*local_58 + 0x10);
                    dVar18 = (double)FUN_01907950();
                    uVar10 = uVar17 - 1;
                    if (dVar19 < dVar18) {
                      uVar13 = 1;
                      if ((int)uVar17 < 2) {
                        dVar21 = 4.94065645841247e-324;
                        uVar10 = uVar13;
                      }
                      else {
                        pcVar4 = *(char **)(*local_58 + 0x10);
                        dVar18 = (double)FUN_01907950();
                        dVar21 = dVar20;
                        uVar10 = uVar17 - 2;
                        if (dVar19 < dVar18) {
                          if ((int)uVar17 < 3) {
                            dVar20 = 9.88131291682493e-324;
                            uVar17 = uVar13;
                            goto LAB_01904db0;
                          }
                          pcVar4 = *(char **)(*local_58 + 0x10);
                          dVar18 = (double)FUN_01907950();
                          uVar10 = uVar17 - 3;
                          if (dVar19 < dVar18) {
                            uVar10 = uVar13;
                          }
                        }
                      }
                    }
                  }
LAB_01904d3c:
                  dVar20 = dVar21;
                  uVar17 = uVar10;
                }
              }
LAB_01904db0:
              do {
                iVar11 = SUB84(dVar20,0) - uVar17;
                if (iVar11 == 1) {
                  dVar18 = (double)(ulonglong)uVar17;
                  break;
                }
                uVar10 = iVar11 / 2 + uVar17;
                dVar18 = (double)(ulonglong)uVar10;
                pcVar4 = *(char **)(*local_58 + 0x10);
                dVar21 = (double)FUN_01907950();
                if (dVar19 <= dVar21) {
                  dVar20 = (double)(ulonglong)uVar10;
                  uVar10 = uVar17;
                }
                uVar17 = uVar10;
              } while ((dVar21 != dVar19) || (NAN(dVar21) || NAN(dVar19)));
              goto LAB_019046b4;
            }
          }
        }
      }
      iVar11 = SUB84(dVar18,0) + 1;
      goto LAB_01904865;
    }
    if ((local_38[0] != '\0') && (lVar12 != 0)) {
      FUN_00d50b20();
    }
    dVar18 = 0.0;
    iVar11 = 1;
  }
  local_70 = dVar18;
  pvVar5 = _pthread_getspecific((pthread_key_t)pcVar4);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01907950();
  pvVar5 = _pthread_getspecific((pthread_key_t)pcVar4);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_a8 = (double)FUN_01907950();
  uVar17 = iVar11 - iVar9;
  local_b0 = (longlong)iVar11;
  FUN_00c8e690();
  lVar12 = local_68;
  if ((((local_60[0] == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60[0] != '\0')) &&
     (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (0 < (int)uVar17) {
    uVar15 = 0;
    do {
      pvVar5 = _pthread_getspecific((pthread_key_t)pcVar4);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_80 = (double)FUN_01907950();
      pvVar5 = _pthread_getspecific((pthread_key_t)pcVar4);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar18 = (double)FUN_01907950();
      *(double *)(*(longlong *)(lVar12 + 0x10) + uVar15 * 8) = local_80 - dVar18;
      uVar15 = uVar15 + 1;
    } while (uVar17 != uVar15);
    local_a0 = DAT_0238fee8 / local_a0;
    uVar15 = 0;
    do {
      local_80 = *(double *)(*(longlong *)(lVar12 + 0x10) + uVar15 * 8) * local_a0;
      pvVar5 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(*local_58 + 0x10));
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01907cc0();
      uVar15 = uVar15 + 1;
    } while (uVar17 != uVar15);
  }
  lVar14 = local_78;
  lVar8 = local_b0;
  pvVar5 = _pthread_getspecific((pthread_key_t)local_b0);
  dVar18 = local_70;
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar19 = (double)FUN_01907950();
  iVar9 = SUB84(dVar18,0) + 2;
  if (iVar9 < *(int *)(*local_58 + 0xc)) {
    dVar19 = dVar19 - local_a8;
    lVar16 = (longlong)iVar9;
    do {
      pVar7 = (pthread_key_t)lVar8;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar18 = (double)FUN_01907950();
      FUN_01907cc0(dVar18 + dVar19);
      lVar16 = lVar16 + 1;
      lVar8 = (longlong)*(int *)(*local_58 + 0xc);
    } while (lVar16 < lVar8);
  }
  if (lVar12 != 0) {
    FUN_00d50b20();
  }
LAB_01904c2f:
  if (((char)local_88 != '\0') && (lVar14 != 0)) {
    FUN_00d50b20();
  }
  return;
}


