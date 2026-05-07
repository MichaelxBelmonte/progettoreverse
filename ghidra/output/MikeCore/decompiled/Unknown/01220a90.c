// Function: FUN_01220a90
// Address: 01220a90
// Size: 2008 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01221223) */
/* WARNING: Removing unreachable block (ram,0x0122122f) */
/* WARNING: Removing unreachable block (ram,0x01221129) */
/* WARNING: Removing unreachable block (ram,0x01221139) */

void FUN_01220a90(float param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  char *pcVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *unaff_RDI;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  float fVar21;
  longlong local_68;
  char local_58 [8];
  longlong local_50;
  char local_48 [8];
  longlong local_40;
  char local_31;
  
  if (DAT_023908ec <= param_1) {
    fVar21 = (float)_logf(param_1 * DAT_02394204);
    iVar5 = FUN_01483610(fVar21 * DAT_02394208);
    iVar6 = FUN_00e7d780(DAT_02390d30);
    iVar7 = FUN_00e7d780(DAT_0241c3ec);
    iVar8 = FUN_014832c0();
    fVar21 = (float)_logf(param_1 * DAT_02390d30 * DAT_02394204);
    iVar9 = FUN_01483610(fVar21 * DAT_02394208);
    iVar1 = iVar8 + -1;
    if (iVar9 < iVar8) {
      iVar1 = iVar9;
    }
    lVar10 = *unaff_RDI;
    if (0 < *(int *)(lVar10 + 0xc)) {
      lVar13 = 0;
      do {
        lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar13 * 8);
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        FUN_015f8890();
        lVar3 = local_50;
        if ((((local_48[0] == '\0') && (local_50 != 0)) && (FUN_00d50b00(), local_48[0] != '\0')) &&
           (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (((*(int *)(lVar3 + 0xc) == 0) ||
            (iVar8 = *(int *)(**(longlong **)(lVar3 + 0x10) + 0x10), iVar5 < iVar8)) ||
           (iVar1 < iVar8 + *(int *)(DAT_02802f00 + 0x18))) {
LAB_01221260:
          FUN_00d50b20();
        }
        else {
          iVar8 = -1;
          do {
            local_68 = **(longlong **)(lVar3 + 0x10);
            if (local_68 != 0) {
              FUN_00d50b00();
            }
            if (iVar8 == 1) {
              FUN_00d23340();
              lVar14 = local_50;
              local_58[0] = local_48[0];
              pcVar11 = local_48;
              if (local_48[0] == '\0') {
                pcVar11 = local_58;
              }
              *pcVar11 = '\0';
              if ((local_48[0] != '\0') && (lVar14 != 0)) {
                FUN_00d50b20();
              }
              if (lVar14 == local_68) {
                if ((local_58[0] != '\0') && (lVar14 != 0)) {
                  FUN_00d50b20();
                }
              }
              else if (local_58[0] == '\0') {
                if (lVar14 != 0) {
                  FUN_00d50b00();
                }
                if (local_68 == 0) goto LAB_01220d39;
                FUN_00d50b20();
                local_68 = lVar14;
              }
              else if (local_68 == 0) {
LAB_01220d39:
                local_68 = lVar14;
              }
              else {
                FUN_00d50b20();
                local_68 = lVar14;
              }
            }
            iVar9 = *(int *)(local_68 + 0xc) + iVar8;
            iVar16 = 9;
            if ((iVar9 < 0) || (param_2 <= iVar9)) {
LAB_01220c67:
              FUN_00d50b20();
            }
            else {
              iVar19 = *(int *)(local_68 + 0x10);
              FUN_015fd870(iVar19,iVar9);
              lVar14 = local_50;
              if (local_50 == 0) {
                iVar18 = iVar7;
                iVar12 = iVar19;
                if (iVar7 < 1) goto LAB_01220c67;
                do {
                  iVar19 = iVar19 + -1;
                  FUN_015fd870(iVar19,iVar9);
                  lVar14 = local_50;
                  if (local_50 != 0) {
                    if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) &&
                       (local_50 != 0)) {
                      FUN_00d50b20();
                    }
                    FUN_00d50b00();
                    goto LAB_01220dc8;
                  }
                  FUN_015fd870(iVar12 + 1,iVar9);
                  lVar14 = local_50;
                  if (local_50 != 0) {
                    if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) &&
                       (local_50 != 0)) {
                      FUN_00d50b20();
                    }
                    FUN_00d50b00();
                    goto LAB_01220dc8;
                  }
                  iVar18 = iVar18 + -1;
                  iVar12 = iVar12 + 1;
                } while (iVar18 != 0);
                iVar16 = 9;
              }
              else {
                if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) &&
                   (local_50 != 0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b00();
LAB_01220dc8:
                local_40 = lVar14;
                cVar4 = FUN_015f86c0();
                lVar14 = local_40;
                iVar16 = 9;
                if (cVar4 == '\0') {
                  FUN_00d50b00();
                  if (iVar1 < *(int *)(DAT_02802f00 + 0x18) + *(int *)(lVar14 + 0x10)) {
                    FUN_00d50b20();
                    goto LAB_01220e20;
                  }
                  cVar4 = '\x01';
                  lVar15 = 2;
                  do {
                    iVar16 = *(int *)(local_40 + 0x10);
                    iVar19 = *(int *)(DAT_02802f00 + lVar15 * 4);
                    FUN_015fd870(iVar19 + iVar16,iVar9);
                    lVar17 = local_50;
                    if (local_50 == lVar14) {
                      lVar17 = lVar14;
                      local_31 = cVar4;
                      if ((cVar4 == '\0') && (local_50 != 0)) {
                        if (local_48[0] != '\0') goto LAB_01220f31;
                        local_31 = '\x01';
                        FUN_00d50b00();
                      }
LAB_01220f90:
                      if ((local_48[0] != '\0') && (local_50 != 0)) {
                        FUN_00d50b20();
                      }
                      if (lVar17 == 0) {
LAB_01220fd0:
                        if (0 < iVar6) {
                          iVar12 = iVar19 + iVar16;
                          iVar16 = iVar16 + iVar19;
                          iVar19 = iVar6;
                          while( true ) {
                            iVar12 = iVar12 + 1;
                            iVar16 = iVar16 + -1;
                            FUN_015fd870(iVar16,iVar9);
                            lVar17 = local_50;
                            if (local_50 != 0) break;
                            FUN_015fd870(iVar12,iVar9);
                            lVar17 = local_50;
                            if (local_50 != 0) {
                              if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0'))
                                 && (local_50 != 0)) {
                                FUN_00d50b20();
                              }
                              FUN_00d50b00();
                              goto LAB_012210c5;
                            }
                            iVar19 = iVar19 + -1;
                            if (iVar19 == 0) goto LAB_01221151;
                          }
                          if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) &&
                             (local_50 != 0)) {
                            FUN_00d50b20();
                          }
                          FUN_00d50b00();
LAB_012210c5:
                          cVar4 = '\x01';
                          goto LAB_012210c8;
                        }
LAB_01221151:
                        FUN_00d50b20();
                        bVar2 = true;
                        iVar16 = 9;
                        bVar20 = false;
                        goto LAB_01221168;
                      }
                      if (local_31 != '\0') goto LAB_01220fb3;
                      cVar4 = '\0';
                    }
                    else {
                      if (local_48[0] == '\0') {
                        if (local_50 != 0) {
                          FUN_00d50b00();
                        }
                        local_31 = '\x01';
                        if (cVar4 != '\0') {
                          FUN_00d50b20();
                        }
                        goto LAB_01220f90;
                      }
                      if (cVar4 == '\0') {
                        local_31 = '\x01';
                        if (local_50 != 0) goto LAB_01220fb3;
                        goto LAB_01220fd0;
                      }
                      FUN_00d50b20();
                      lVar14 = lVar17;
LAB_01220f31:
                      local_31 = '\x01';
                      lVar17 = lVar14;
                      if (lVar14 == 0) goto LAB_01220fd0;
LAB_01220fb3:
                      FUN_00d50b00();
                      cVar4 = local_31;
LAB_012210c8:
                      FUN_00d50b20();
                    }
                    lVar15 = lVar15 + 1;
                    lVar14 = lVar17;
                  } while (lVar15 != 7);
                  if (iVar8 == -1) {
                    FUN_015f96d0();
                  }
                  else {
                    FUN_015f96a0();
                  }
                  bVar2 = false;
                  bVar20 = true;
                  iVar16 = 0;
                }
                else {
LAB_01220e20:
                  bVar20 = false;
                  bVar2 = true;
                  cVar4 = '\x01';
                }
                if (cVar4 != '\0') {
                  FUN_00d50b20();
                }
LAB_01221168:
                FUN_00d50b20();
                if (bVar20 && !bVar2) {
                  FUN_00d50b20();
                }
              }
              if (local_68 != 0) goto LAB_01220c67;
            }
          } while ((iVar16 == 0) || (bVar20 = iVar8 < 0, iVar8 = iVar8 + 2, bVar20));
          if (lVar3 != 0) goto LAB_01221260;
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        lVar13 = lVar13 + 1;
        lVar10 = *unaff_RDI;
      } while (lVar13 < *(int *)(lVar10 + 0xc));
    }
  }
  return;
}


