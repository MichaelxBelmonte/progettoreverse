// Function: FUN_00f43ef0
// Address: 00f43ef0
// Size: 5565 bytes
// Class: MUSpectrumShaper
// String references:
//   "stream error"
//   "buffer error"


ulonglong FUN_00f43ef0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  short *psVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  int *piVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  void *pvVar13;
  ulonglong uVar14;
  void *pvVar15;
  void *pvVar16;
  byte bVar17;
  uint unaff_ESI;
  int iVar18;
  uint uVar19;
  longlong *unaff_RDI;
  ulonglong uVar20;
  size_t sVar21;
  void *pvVar22;
  int local_48;
  void *local_40;
  
  if (unaff_RDI == (longlong *)0x0) {
    return 0xfffffffe;
  }
  if (unaff_RDI[8] == 0) {
    return 0xfffffffe;
  }
  if (unaff_RDI[9] == 0) {
    return 0xfffffffe;
  }
  plVar6 = (longlong *)unaff_RDI[7];
  if (plVar6 == (longlong *)0x0) {
    return 0xfffffffe;
  }
  if ((longlong *)*plVar6 != unaff_RDI) {
    return 0xfffffffe;
  }
  iVar18 = (int)plVar6[1];
  if ((((0x38 < iVar18 - 0x39U) ||
       ((0x100400400011001U >> ((ulonglong)(iVar18 - 0x39U) & 0x3f) & 1) == 0)) && (iVar18 != 0x29a)
      ) && (iVar18 != 0x2a)) {
    return 0xfffffffe;
  }
  if (5 < unaff_ESI) {
    return 0xfffffffe;
  }
  if (((unaff_RDI[3] == 0) || ((lVar10 = unaff_RDI[1], (int)lVar10 != 0 && (*unaff_RDI == 0)))) ||
     ((iVar18 == 0x29a && (unaff_ESI != 4)))) {
    unaff_RDI[6] = DAT_02593e50;
    return 0xfffffffe;
  }
  if ((int)unaff_RDI[4] == 0) {
LAB_00f443f8:
    unaff_RDI[6] = DAT_02593e68;
    return 0xfffffffb;
  }
  iVar5 = *(int *)((longlong)plVar6 + 0x4c);
  *(uint *)((longlong)plVar6 + 0x4c) = unaff_ESI;
  if (plVar6[5] == 0) {
    if ((int)lVar10 == 0) {
      lVar10 = 0;
      if (((int)((uint)((int)unaff_ESI < 5) * 9 + unaff_ESI * 2 + -9) <=
           (int)((uint)(iVar5 < 5) * 9 + iVar5 * 2 + -9)) && (unaff_ESI != 4)) goto LAB_00f443f8;
    }
    else {
      lVar10 = 0;
    }
  }
  else {
    FUN_00f4b540();
    lVar10 = plVar6[5];
    uVar12 = *(uint *)(unaff_RDI + 4);
    uVar19 = (uint)lVar10;
    if (uVar12 < (uint)lVar10) {
      uVar19 = uVar12;
    }
    if (uVar19 != 0) {
      pvVar13 = (void *)(ulonglong)uVar19;
      _memcpy((void *)(ulonglong)uVar12,pvVar13,(size_t)param_3);
      unaff_RDI[3] = unaff_RDI[3] + (longlong)pvVar13;
      plVar6[4] = plVar6[4] + (longlong)pvVar13;
      unaff_RDI[5] = unaff_RDI[5] + (longlong)pvVar13;
      uVar12 = (int)unaff_RDI[4] - uVar19;
      *(uint *)(unaff_RDI + 4) = uVar12;
      lVar10 = plVar6[5] - (longlong)pvVar13;
      plVar6[5] = lVar10;
      if (lVar10 == 0) {
        plVar6[4] = plVar6[2];
        lVar10 = 0;
      }
    }
    if (uVar12 == 0) goto LAB_00f451ef;
    iVar18 = (int)plVar6[1];
  }
  if (iVar18 == 0x2a) {
    if ((int)plVar6[6] != 0) {
      uVar12 = 0;
      if (((int)plVar6[0x19] < 2) &&
         (iVar18 = *(int *)((longlong)plVar6 + 0xc4), uVar12 = 0, 1 < iVar18)) {
        uVar12 = 0x40;
        if (5 < iVar18) {
          uVar12 = (iVar18 != 6 | 2) << 6;
        }
      }
      uVar12 = uVar12 | *(int *)((longlong)plVar6 + 0x54) * 0x1000 - 0x7800U;
      uVar19 = uVar12 | 0x20;
      if (*(int *)((longlong)plVar6 + 0xac) == 0) {
        uVar19 = uVar12;
      }
      plVar6[5] = lVar10 + 1;
      *(char *)(plVar6[2] + lVar10) = (char)(uVar19 >> 8);
      pvVar13 = (void *)plVar6[5];
      plVar6[5] = (longlong)pvVar13 + 1;
      *(byte *)(plVar6[2] + (longlong)pvVar13) =
           (((char)(uVar19 / 0x1f) - (char)(uVar19 / 0x1f << 5)) + (byte)uVar19 | (byte)uVar19) ^
           0x1f;
      if (*(int *)((longlong)plVar6 + 0xac) != 0) {
        lVar10 = unaff_RDI[0xc];
        lVar11 = plVar6[5];
        plVar6[5] = lVar11 + 1;
        *(char *)(plVar6[2] + lVar11) = (char)((ulonglong)lVar10 >> 0x18);
        lVar11 = plVar6[5];
        plVar6[5] = lVar11 + 1;
        *(char *)(plVar6[2] + lVar11) = (char)((ulonglong)lVar10 >> 0x10);
        lVar10 = unaff_RDI[0xc];
        lVar11 = plVar6[5];
        plVar6[5] = lVar11 + 1;
        *(char *)(plVar6[2] + lVar11) = (char)((ulonglong)lVar10 >> 8);
        pvVar13 = (void *)plVar6[2];
        lVar11 = plVar6[5];
        plVar6[5] = lVar11 + 1;
        *(char *)((longlong)pvVar13 + lVar11) = (char)lVar10;
      }
      lVar10 = FUN_00f42bd0(pvVar13,0);
      unaff_RDI[0xc] = lVar10;
      *(undefined4 *)(plVar6 + 1) = 0x71;
      lVar10 = unaff_RDI[7];
      FUN_00f4b540();
      uVar12 = *(uint *)(lVar10 + 0x28);
      if (*(uint *)(unaff_RDI + 4) < *(uint *)(lVar10 + 0x28)) {
        uVar12 = *(uint *)(unaff_RDI + 4);
      }
      if (uVar12 != 0) {
        pvVar16 = (void *)(ulonglong)uVar12;
        _memcpy(pvVar13,pvVar16,(size_t)param_3);
        unaff_RDI[3] = unaff_RDI[3] + (longlong)pvVar16;
        *(longlong *)(lVar10 + 0x20) = *(longlong *)(lVar10 + 0x20) + (longlong)pvVar16;
        unaff_RDI[5] = unaff_RDI[5] + (longlong)pvVar16;
        *(uint *)(unaff_RDI + 4) = (int)unaff_RDI[4] - uVar12;
        plVar2 = (longlong *)(lVar10 + 0x28);
        *plVar2 = *plVar2 - (longlong)pvVar16;
        if (*plVar2 == 0) {
          *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
        }
      }
      if (plVar6[5] != 0) goto LAB_00f451ef;
      iVar18 = (int)plVar6[1];
      goto LAB_00f441eb;
    }
    *(undefined4 *)(plVar6 + 1) = 0x71;
    goto switchD_00f4455e_caseD_46;
  }
  if (iVar18 == 0x29a) {
    if ((int)unaff_RDI[1] != 0) goto LAB_00f443f8;
LAB_00f44a6e:
    sVar21 = (size_t)param_3;
    if ((*(int *)((longlong)plVar6 + 0xb4) == 0) && ((unaff_ESI == 0 || ((int)plVar6[1] == 0x29a))))
    goto LAB_00f4511b;
  }
  else {
LAB_00f441eb:
    if (iVar18 == 0x39) {
      lVar10 = FUN_00f43510(0x39,0);
      unaff_RDI[0xc] = lVar10;
      lVar10 = plVar6[5];
      plVar6[5] = lVar10 + 1;
      *(undefined1 *)(plVar6[2] + lVar10) = 0x1f;
      lVar10 = plVar6[5];
      plVar6[5] = lVar10 + 1;
      *(undefined1 *)(plVar6[2] + lVar10) = 0x8b;
      lVar10 = plVar6[5];
      plVar6[5] = lVar10 + 1;
      *(undefined1 *)(plVar6[2] + lVar10) = 8;
      piVar7 = (int *)plVar6[7];
      if (piVar7 == (int *)0x0) {
        lVar10 = plVar6[5];
        plVar6[5] = lVar10 + 1;
        *(undefined1 *)(plVar6[2] + lVar10) = 0;
        lVar10 = plVar6[5];
        plVar6[5] = lVar10 + 1;
        *(undefined1 *)(plVar6[2] + lVar10) = 0;
        lVar10 = plVar6[5];
        plVar6[5] = lVar10 + 1;
        *(undefined1 *)(plVar6[2] + lVar10) = 0;
        lVar10 = plVar6[5];
        plVar6[5] = lVar10 + 1;
        *(undefined1 *)(plVar6[2] + lVar10) = 0;
        lVar10 = plVar6[5];
        plVar6[5] = lVar10 + 1;
        *(undefined1 *)(plVar6[2] + lVar10) = 0;
        cVar9 = '\x02';
        if (*(int *)((longlong)plVar6 + 0xc4) != 9) {
          cVar9 = (*(int *)((longlong)plVar6 + 0xc4) < 2 || 1 < (int)plVar6[0x19]) << 2;
        }
        lVar10 = plVar6[5];
        plVar6[5] = lVar10 + 1;
        *(char *)(plVar6[2] + lVar10) = cVar9;
        pvVar13 = (void *)plVar6[5];
        plVar6[5] = (longlong)pvVar13 + 1;
        *(undefined1 *)(plVar6[2] + (longlong)pvVar13) = 0x13;
        *(undefined4 *)(plVar6 + 1) = 0x71;
        lVar10 = unaff_RDI[7];
        FUN_00f4b540();
        uVar12 = *(uint *)(lVar10 + 0x28);
        if (*(uint *)(unaff_RDI + 4) < *(uint *)(lVar10 + 0x28)) {
          uVar12 = *(uint *)(unaff_RDI + 4);
        }
        if (uVar12 != 0) {
          pvVar16 = (void *)(ulonglong)uVar12;
          _memcpy(pvVar13,pvVar16,(size_t)param_3);
          unaff_RDI[3] = unaff_RDI[3] + (longlong)pvVar16;
          *(longlong *)(lVar10 + 0x20) = *(longlong *)(lVar10 + 0x20) + (longlong)pvVar16;
          unaff_RDI[5] = unaff_RDI[5] + (longlong)pvVar16;
          *(uint *)(unaff_RDI + 4) = (int)unaff_RDI[4] - uVar12;
          plVar2 = (longlong *)(lVar10 + 0x28);
          *plVar2 = *plVar2 - (longlong)pvVar16;
          if (*plVar2 == 0) {
            *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
          }
        }
        if (plVar6[5] != 0) goto LAB_00f451ef;
        iVar18 = (int)plVar6[1];
        goto LAB_00f44544;
      }
      iVar18 = *piVar7;
      iVar5 = piVar7[0x11];
      lVar10 = *(longlong *)(piVar7 + 6);
      lVar11 = *(longlong *)(piVar7 + 10);
      lVar1 = *(longlong *)(piVar7 + 0xe);
      lVar8 = plVar6[5];
      plVar6[5] = lVar8 + 1;
      *(char *)(plVar6[2] + lVar8) =
           (lVar1 != 0) << 4 |
           (lVar11 != 0) << 3 | (lVar10 != 0) << 2 | (iVar5 != 0) * '\x02' | iVar18 != 0;
      uVar4 = *(undefined1 *)(plVar6[7] + 8);
      lVar10 = plVar6[5];
      plVar6[5] = lVar10 + 1;
      *(undefined1 *)(plVar6[2] + lVar10) = uVar4;
      uVar4 = *(undefined1 *)(plVar6[7] + 9);
      lVar10 = plVar6[5];
      plVar6[5] = lVar10 + 1;
      *(undefined1 *)(plVar6[2] + lVar10) = uVar4;
      uVar4 = *(undefined1 *)(plVar6[7] + 10);
      lVar10 = plVar6[5];
      plVar6[5] = lVar10 + 1;
      *(undefined1 *)(plVar6[2] + lVar10) = uVar4;
      uVar4 = *(undefined1 *)(plVar6[7] + 0xb);
      lVar10 = plVar6[5];
      plVar6[5] = lVar10 + 1;
      *(undefined1 *)(plVar6[2] + lVar10) = uVar4;
      cVar9 = '\x02';
      if (*(int *)((longlong)plVar6 + 0xc4) != 9) {
        cVar9 = (*(int *)((longlong)plVar6 + 0xc4) < 2 || 1 < (int)plVar6[0x19]) << 2;
      }
      lVar10 = plVar6[5];
      plVar6[5] = lVar10 + 1;
      *(char *)(plVar6[2] + lVar10) = cVar9;
      uVar4 = *(undefined1 *)(plVar6[7] + 0x14);
      lVar10 = plVar6[2];
      lVar11 = plVar6[5];
      plVar6[5] = lVar11 + 1;
      *(undefined1 *)(lVar10 + lVar11) = uVar4;
      lVar11 = plVar6[7];
      if (*(longlong *)(lVar11 + 0x18) != 0) {
        uVar4 = *(undefined1 *)(lVar11 + 0x20);
        lVar10 = plVar6[5];
        plVar6[5] = lVar10 + 1;
        *(undefined1 *)(plVar6[2] + lVar10) = uVar4;
        uVar4 = *(undefined1 *)(plVar6[7] + 0x21);
        lVar10 = plVar6[2];
        lVar11 = plVar6[5];
        plVar6[5] = lVar11 + 1;
        *(undefined1 *)(lVar10 + lVar11) = uVar4;
        lVar11 = plVar6[7];
      }
      if (*(int *)(lVar11 + 0x44) != 0) {
        lVar10 = FUN_00f43510(lVar10,(int)plVar6[5]);
        unaff_RDI[0xc] = lVar10;
      }
      plVar6[8] = 0;
      *(undefined4 *)(plVar6 + 1) = 0x45;
switchD_00f4455e_caseD_45:
      pvVar13 = (void *)plVar6[7];
      if (*(longlong *)((longlong)pvVar13 + 0x18) != 0) {
        pvVar16 = (void *)plVar6[3];
        uVar14 = plVar6[5];
        local_40 = (void *)(ulonglong)((uint)*(ushort *)((longlong)pvVar13 + 0x20) - (int)plVar6[8])
        ;
        pvVar13 = (void *)(uVar14 + (longlong)local_40);
        if (pvVar16 < pvVar13) {
          while( true ) {
            pvVar15 = (void *)((longlong)pvVar16 - uVar14 & 0xffffffff);
            _memcpy(pvVar13,pvVar15,(size_t)param_3);
            plVar6[5] = plVar6[3];
            if ((*(int *)(plVar6[7] + 0x44) != 0) && (uVar14 < (ulonglong)plVar6[3])) {
              lVar10 = FUN_00f43510();
              unaff_RDI[0xc] = lVar10;
            }
            plVar6[8] = plVar6[8] + (longlong)pvVar15;
            pvVar15 = (void *)unaff_RDI[7];
            FUN_00f4b540();
            uVar12 = *(uint *)((longlong)pvVar15 + 0x28);
            if (*(uint *)(unaff_RDI + 4) < *(uint *)((longlong)pvVar15 + 0x28)) {
              uVar12 = *(uint *)(unaff_RDI + 4);
            }
            if (uVar12 != 0) {
              pvVar22 = (void *)(ulonglong)uVar12;
              _memcpy(pvVar13,pvVar22,(size_t)param_3);
              unaff_RDI[3] = unaff_RDI[3] + (longlong)pvVar22;
              *(longlong *)((longlong)pvVar15 + 0x20) =
                   *(longlong *)((longlong)pvVar15 + 0x20) + (longlong)pvVar22;
              unaff_RDI[5] = unaff_RDI[5] + (longlong)pvVar22;
              *(uint *)(unaff_RDI + 4) = (int)unaff_RDI[4] - uVar12;
              plVar2 = (longlong *)((longlong)pvVar15 + 0x28);
              *plVar2 = *plVar2 - (longlong)pvVar22;
              pvVar13 = pvVar15;
              if (*plVar2 == 0) {
                *(undefined8 *)((longlong)pvVar15 + 0x20) =
                     *(undefined8 *)((longlong)pvVar15 + 0x10);
              }
            }
            if (plVar6[5] != 0) goto LAB_00f451ef;
            local_48 = (int)((longlong)pvVar16 - uVar14);
            uVar12 = (int)local_40 - local_48;
            local_40 = (void *)(ulonglong)uVar12;
            pvVar16 = (void *)plVar6[3];
            if (local_40 <= pvVar16) break;
            uVar14 = 0;
          }
          local_40 = (void *)(ulonglong)uVar12;
          uVar14 = 0;
        }
        _memcpy(pvVar13,local_40,(size_t)param_3);
        lVar10 = plVar6[5];
        plVar6[5] = (longlong)local_40 + lVar10;
        if ((*(int *)(plVar6[7] + 0x44) != 0) && (uVar14 < (ulonglong)((longlong)local_40 + lVar10))
           ) {
          lVar10 = FUN_00f43510();
          unaff_RDI[0xc] = lVar10;
        }
        plVar6[8] = 0;
      }
      *(undefined4 *)(plVar6 + 1) = 0x49;
switchD_00f4455e_caseD_49:
      if (*(longlong *)(plVar6[7] + 0x28) != 0) {
        uVar14 = plVar6[5];
        param_3 = uVar14;
        if (uVar14 != plVar6[3]) goto LAB_00f447a5;
        while( true ) {
          pvVar13 = (void *)plVar6[7];
          if ((*(int *)((longlong)pvVar13 + 0x44) != 0) && (param_3 < uVar14)) {
            lVar10 = FUN_00f43510();
            unaff_RDI[0xc] = lVar10;
          }
          sVar21 = (size_t)param_3;
          lVar10 = unaff_RDI[7];
          FUN_00f4b540();
          uVar12 = *(uint *)(lVar10 + 0x28);
          if (*(uint *)(unaff_RDI + 4) < *(uint *)(lVar10 + 0x28)) {
            uVar12 = *(uint *)(unaff_RDI + 4);
          }
          if (uVar12 != 0) {
            pvVar16 = (void *)(ulonglong)uVar12;
            _memcpy(pvVar13,pvVar16,sVar21);
            unaff_RDI[3] = unaff_RDI[3] + (longlong)pvVar16;
            *(longlong *)(lVar10 + 0x20) = *(longlong *)(lVar10 + 0x20) + (longlong)pvVar16;
            unaff_RDI[5] = unaff_RDI[5] + (longlong)pvVar16;
            *(uint *)(unaff_RDI + 4) = (int)unaff_RDI[4] - uVar12;
            plVar2 = (longlong *)(lVar10 + 0x28);
            *plVar2 = *plVar2 - (longlong)pvVar16;
            if (*plVar2 == 0) {
              *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
            }
          }
          if (plVar6[5] != 0) break;
          uVar14 = 0;
          param_3 = 0;
LAB_00f447a5:
          do {
            pvVar13 = (void *)plVar6[2];
            lVar10 = *(longlong *)(plVar6[7] + 0x28);
            lVar11 = plVar6[8];
            plVar6[8] = lVar11 + 1;
            cVar9 = *(char *)(lVar10 + lVar11);
            plVar6[5] = uVar14 + 1;
            *(char *)((longlong)pvVar13 + uVar14) = cVar9;
            if (cVar9 == '\0') {
              if ((*(int *)(plVar6[7] + 0x44) != 0) && (param_3 < (ulonglong)plVar6[5])) {
                lVar10 = FUN_00f43510(pvVar13,(int)plVar6[5] - (int)param_3);
                unaff_RDI[0xc] = lVar10;
              }
              plVar6[8] = 0;
              goto LAB_00f44806;
            }
            uVar14 = plVar6[5];
          } while (uVar14 != plVar6[3]);
        }
        goto LAB_00f451ef;
      }
LAB_00f44806:
      *(undefined4 *)(plVar6 + 1) = 0x5b;
switchD_00f4455e_caseD_5b:
      if (*(longlong *)(plVar6[7] + 0x38) != 0) {
        uVar14 = plVar6[5];
        param_3 = uVar14;
        if (uVar14 != plVar6[3]) goto LAB_00f448d4;
        while( true ) {
          pvVar13 = (void *)plVar6[7];
          if ((*(int *)((longlong)pvVar13 + 0x44) != 0) && (param_3 < uVar14)) {
            lVar10 = FUN_00f43510();
            unaff_RDI[0xc] = lVar10;
          }
          sVar21 = (size_t)param_3;
          lVar10 = unaff_RDI[7];
          FUN_00f4b540();
          uVar12 = *(uint *)(lVar10 + 0x28);
          if (*(uint *)(unaff_RDI + 4) < *(uint *)(lVar10 + 0x28)) {
            uVar12 = *(uint *)(unaff_RDI + 4);
          }
          if (uVar12 != 0) {
            pvVar16 = (void *)(ulonglong)uVar12;
            _memcpy(pvVar13,pvVar16,sVar21);
            unaff_RDI[3] = unaff_RDI[3] + (longlong)pvVar16;
            *(longlong *)(lVar10 + 0x20) = *(longlong *)(lVar10 + 0x20) + (longlong)pvVar16;
            unaff_RDI[5] = unaff_RDI[5] + (longlong)pvVar16;
            *(uint *)(unaff_RDI + 4) = (int)unaff_RDI[4] - uVar12;
            plVar2 = (longlong *)(lVar10 + 0x28);
            *plVar2 = *plVar2 - (longlong)pvVar16;
            if (*plVar2 == 0) {
              *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
            }
          }
          if (plVar6[5] != 0) break;
          uVar14 = 0;
          param_3 = 0;
LAB_00f448d4:
          do {
            pvVar13 = (void *)plVar6[2];
            lVar10 = *(longlong *)(plVar6[7] + 0x38);
            lVar11 = plVar6[8];
            plVar6[8] = lVar11 + 1;
            cVar9 = *(char *)(lVar10 + lVar11);
            plVar6[5] = uVar14 + 1;
            *(char *)((longlong)pvVar13 + uVar14) = cVar9;
            if (cVar9 == '\0') {
              if ((*(int *)(plVar6[7] + 0x44) != 0) && (param_3 < (ulonglong)plVar6[5])) {
                lVar10 = FUN_00f43510(pvVar13,(int)plVar6[5] - (int)param_3);
                unaff_RDI[0xc] = lVar10;
              }
              goto LAB_00f4492d;
            }
            uVar14 = plVar6[5];
          } while (uVar14 != plVar6[3]);
        }
        goto LAB_00f451ef;
      }
LAB_00f4492d:
      *(undefined4 *)(plVar6 + 1) = 0x67;
switchD_00f4455e_caseD_67:
      if (*(int *)(plVar6[7] + 0x44) != 0) {
        lVar10 = plVar6[5];
        pvVar13 = (void *)(lVar10 + 2);
        if ((void *)plVar6[3] < pvVar13) {
          lVar10 = unaff_RDI[7];
          FUN_00f4b540();
          uVar12 = *(uint *)(lVar10 + 0x28);
          if (*(uint *)(unaff_RDI + 4) < *(uint *)(lVar10 + 0x28)) {
            uVar12 = *(uint *)(unaff_RDI + 4);
          }
          if (uVar12 != 0) {
            pvVar16 = (void *)(ulonglong)uVar12;
            _memcpy(pvVar13,pvVar16,(size_t)param_3);
            unaff_RDI[3] = unaff_RDI[3] + (longlong)pvVar16;
            *(longlong *)(lVar10 + 0x20) = *(longlong *)(lVar10 + 0x20) + (longlong)pvVar16;
            unaff_RDI[5] = unaff_RDI[5] + (longlong)pvVar16;
            *(uint *)(unaff_RDI + 4) = (int)unaff_RDI[4] - uVar12;
            plVar2 = (longlong *)(lVar10 + 0x28);
            *plVar2 = *plVar2 - (longlong)pvVar16;
            if (*plVar2 == 0) {
              *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
            }
          }
          lVar10 = 0;
          if (plVar6[5] != 0) goto LAB_00f454a0;
        }
        lVar11 = unaff_RDI[0xc];
        plVar6[5] = lVar10 + 1;
        *(char *)(plVar6[2] + lVar10) = (char)lVar11;
        uVar4 = *(undefined1 *)((longlong)unaff_RDI + 0x61);
        pvVar13 = (void *)plVar6[2];
        lVar10 = plVar6[5];
        plVar6[5] = lVar10 + 1;
        *(undefined1 *)((longlong)pvVar13 + lVar10) = uVar4;
        lVar10 = FUN_00f43510(pvVar13,0);
        unaff_RDI[0xc] = lVar10;
      }
      *(undefined4 *)(plVar6 + 1) = 0x71;
      lVar10 = unaff_RDI[7];
      FUN_00f4b540();
      uVar12 = *(uint *)(lVar10 + 0x28);
      if (*(uint *)(unaff_RDI + 4) < *(uint *)(lVar10 + 0x28)) {
        uVar12 = *(uint *)(unaff_RDI + 4);
      }
      if (uVar12 != 0) {
        pvVar16 = (void *)(ulonglong)uVar12;
        _memcpy(pvVar13,pvVar16,(size_t)param_3);
        unaff_RDI[3] = unaff_RDI[3] + (longlong)pvVar16;
        *(longlong *)(lVar10 + 0x20) = *(longlong *)(lVar10 + 0x20) + (longlong)pvVar16;
        unaff_RDI[5] = unaff_RDI[5] + (longlong)pvVar16;
        *(uint *)(unaff_RDI + 4) = (int)unaff_RDI[4] - uVar12;
        plVar2 = (longlong *)(lVar10 + 0x28);
        *plVar2 = *plVar2 - (longlong)pvVar16;
        if (*plVar2 == 0) {
          *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
        }
      }
      if (plVar6[5] != 0) goto LAB_00f451ef;
    }
    else {
LAB_00f44544:
      if (iVar18 - 0x45U < 0x23) {
        pvVar13 = (void *)((longlong)&switchD_00f4455e::switchdataD_00f454b0 +
                          (longlong)(int)(&switchD_00f4455e::switchdataD_00f454b0)[iVar18 - 0x45U]);
        switch(iVar18) {
        case 0x45:
          goto switchD_00f4455e_caseD_45;
        case 0x49:
          goto switchD_00f4455e_caseD_49;
        case 0x5b:
          goto switchD_00f4455e_caseD_5b;
        case 0x67:
          goto switchD_00f4455e_caseD_67;
        }
      }
    }
switchD_00f4455e_caseD_46:
    if ((int)unaff_RDI[1] == 0) goto LAB_00f44a6e;
  }
  sVar21 = (size_t)param_3;
  pvVar13 = (void *)(longlong)*(int *)((longlong)plVar6 + 0xc4);
  if (pvVar13 == (void *)0x0) {
    uVar12 = FUN_00f45540();
joined_r0x00f44fca:
    pvVar13 = (void *)(ulonglong)(uVar12 & 0xfffffffe);
    if ((uVar12 & 0xfffffffe) == 2) {
      *(undefined4 *)(plVar6 + 1) = 0x29a;
    }
    if ((uVar12 & 0xfffffffd) != 0) {
      if (uVar12 == 1) {
LAB_00f44fe8:
        if (unaff_ESI != 5) {
          if (unaff_ESI == 1) {
            FUN_00f4b5d0();
          }
          else {
            pvVar13 = (void *)0x0;
            FUN_00f4b3c0(0,0);
            if (unaff_ESI == 3) {
              *(undefined2 *)(plVar6[0xf] + (ulonglong)(*(int *)((longlong)plVar6 + 0x84) - 1) * 2)
                   = 0;
              ___bzero();
              if (*(int *)((longlong)plVar6 + 0xb4) == 0) {
                *(undefined4 *)((longlong)plVar6 + 0xac) = 0;
                plVar6[0x13] = 0;
                *(undefined4 *)((longlong)plVar6 + 0x172c) = 0;
              }
            }
          }
        }
        lVar10 = unaff_RDI[7];
        FUN_00f4b540();
        uVar12 = *(uint *)(unaff_RDI + 4);
        uVar19 = *(uint *)(lVar10 + 0x28);
        if (uVar12 < *(uint *)(lVar10 + 0x28)) {
          uVar19 = uVar12;
        }
        if (uVar19 != 0) {
          pvVar16 = (void *)(ulonglong)uVar19;
          _memcpy(pvVar13,pvVar16,sVar21);
          unaff_RDI[3] = unaff_RDI[3] + (longlong)pvVar16;
          *(longlong *)(lVar10 + 0x20) = *(longlong *)(lVar10 + 0x20) + (longlong)pvVar16;
          unaff_RDI[5] = unaff_RDI[5] + (longlong)pvVar16;
          uVar12 = (int)unaff_RDI[4] - uVar19;
          *(uint *)(unaff_RDI + 4) = uVar12;
          plVar2 = (longlong *)(lVar10 + 0x28);
          *plVar2 = *plVar2 - (longlong)pvVar16;
          if (*plVar2 == 0) {
            *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
          }
        }
        if (uVar12 == 0) {
LAB_00f451ef:
          *(undefined4 *)((longlong)plVar6 + 0x4c) = 0xffffffff;
          return 0;
        }
      }
LAB_00f4511b:
      if (unaff_ESI != 4) {
        return 0;
      }
      if (0 < (int)plVar6[6]) {
        lVar10 = unaff_RDI[0xc];
        if ((int)plVar6[6] == 2) {
          lVar11 = plVar6[5];
          plVar6[5] = lVar11 + 1;
          *(char *)(plVar6[2] + lVar11) = (char)lVar10;
          uVar4 = *(undefined1 *)((longlong)unaff_RDI + 0x61);
          lVar10 = plVar6[5];
          plVar6[5] = lVar10 + 1;
          *(undefined1 *)(plVar6[2] + lVar10) = uVar4;
          uVar4 = *(undefined1 *)((longlong)unaff_RDI + 0x62);
          lVar10 = plVar6[5];
          plVar6[5] = lVar10 + 1;
          *(undefined1 *)(plVar6[2] + lVar10) = uVar4;
          uVar4 = *(undefined1 *)((longlong)unaff_RDI + 99);
          lVar10 = plVar6[5];
          plVar6[5] = lVar10 + 1;
          *(undefined1 *)(plVar6[2] + lVar10) = uVar4;
          lVar11 = unaff_RDI[2];
          lVar10 = plVar6[5];
          plVar6[5] = lVar10 + 1;
          *(char *)(plVar6[2] + lVar10) = (char)lVar11;
          uVar4 = *(undefined1 *)((longlong)unaff_RDI + 0x11);
          lVar10 = plVar6[5];
          plVar6[5] = lVar10 + 1;
          *(undefined1 *)(plVar6[2] + lVar10) = uVar4;
          uVar4 = *(undefined1 *)((longlong)unaff_RDI + 0x12);
          lVar10 = plVar6[5];
          plVar6[5] = lVar10 + 1;
          *(undefined1 *)(plVar6[2] + lVar10) = uVar4;
          uVar4 = *(undefined1 *)((longlong)unaff_RDI + 0x13);
          pvVar13 = (void *)plVar6[2];
          lVar10 = plVar6[5];
          plVar6[5] = lVar10 + 1;
          *(undefined1 *)((longlong)pvVar13 + lVar10) = uVar4;
        }
        else {
          lVar11 = plVar6[5];
          plVar6[5] = lVar11 + 1;
          *(char *)(plVar6[2] + lVar11) = (char)((ulonglong)lVar10 >> 0x18);
          lVar11 = plVar6[5];
          plVar6[5] = lVar11 + 1;
          *(char *)(plVar6[2] + lVar11) = (char)((ulonglong)lVar10 >> 0x10);
          lVar10 = unaff_RDI[0xc];
          lVar11 = plVar6[5];
          plVar6[5] = lVar11 + 1;
          *(char *)(plVar6[2] + lVar11) = (char)((ulonglong)lVar10 >> 8);
          pvVar13 = (void *)plVar6[2];
          lVar11 = plVar6[5];
          plVar6[5] = lVar11 + 1;
          *(char *)((longlong)pvVar13 + lVar11) = (char)lVar10;
        }
        lVar10 = unaff_RDI[7];
        FUN_00f4b540();
        uVar12 = *(uint *)(lVar10 + 0x28);
        if (*(uint *)(unaff_RDI + 4) < *(uint *)(lVar10 + 0x28)) {
          uVar12 = *(uint *)(unaff_RDI + 4);
        }
        if (uVar12 != 0) {
          pvVar16 = (void *)(ulonglong)uVar12;
          _memcpy(pvVar13,pvVar16,sVar21);
          unaff_RDI[3] = unaff_RDI[3] + (longlong)pvVar16;
          *(longlong *)(lVar10 + 0x20) = *(longlong *)(lVar10 + 0x20) + (longlong)pvVar16;
          unaff_RDI[5] = unaff_RDI[5] + (longlong)pvVar16;
          *(uint *)(unaff_RDI + 4) = (int)unaff_RDI[4] - uVar12;
          plVar2 = (longlong *)(lVar10 + 0x28);
          *plVar2 = *plVar2 - (longlong)pvVar16;
          if (*plVar2 == 0) {
            *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
          }
        }
        if (0 < (int)plVar6[6]) {
          *(int *)(plVar6 + 6) = -(int)plVar6[6];
        }
        return (ulonglong)(plVar6[5] == 0);
      }
      return 1;
    }
  }
  else if ((int)plVar6[0x19] == 3) {
LAB_00f44c56:
    do {
      uVar12 = *(uint *)((longlong)plVar6 + 0xb4);
      if (uVar12 < 0x103) {
        FUN_00f439b0();
        sVar21 = (size_t)param_3;
        uVar12 = *(uint *)((longlong)plVar6 + 0xb4);
        if ((0x102 < uVar12) || (unaff_ESI != 0)) {
          if (uVar12 != 0) {
            *(undefined4 *)(plVar6 + 0x14) = 0;
            if (2 < uVar12) goto LAB_00f44cb2;
            uVar14 = (ulonglong)*(uint *)((longlong)plVar6 + 0xac);
            goto LAB_00f44d57;
          }
          *(undefined4 *)((longlong)plVar6 + 0x172c) = 0;
          if (unaff_ESI == 4) {
            lVar10 = plVar6[0x13];
code_r0x00f45049:
            pvVar13 = (void *)((longlong)&MACH_HEADER.magic + 1);
            FUN_00f4b740(1,(ulonglong)*(uint *)((longlong)plVar6 + 0xac) - lVar10);
            plVar6[0x13] = (ulonglong)*(uint *)((longlong)plVar6 + 0xac);
            lVar10 = *plVar6;
            lVar11 = *(longlong *)(lVar10 + 0x38);
            FUN_00f4b540();
            uVar12 = *(uint *)(lVar11 + 0x28);
            if (*(uint *)(lVar10 + 0x20) < *(uint *)(lVar11 + 0x28)) {
              uVar12 = *(uint *)(lVar10 + 0x20);
            }
            if (uVar12 != 0) {
              pvVar16 = (void *)(ulonglong)uVar12;
              _memcpy(pvVar13,pvVar16,sVar21);
              *(longlong *)(lVar10 + 0x18) = *(longlong *)(lVar10 + 0x18) + (longlong)pvVar16;
              *(longlong *)(lVar11 + 0x20) = *(longlong *)(lVar11 + 0x20) + (longlong)pvVar16;
              *(longlong *)(lVar10 + 0x28) = *(longlong *)(lVar10 + 0x28) + (longlong)pvVar16;
              *(int *)(lVar10 + 0x20) = *(int *)(lVar10 + 0x20) - uVar12;
              plVar2 = (longlong *)(lVar11 + 0x28);
              *plVar2 = *plVar2 - (longlong)pvVar16;
              if (*plVar2 == 0) {
                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x10);
              }
            }
            uVar12 = 3 - (*(int *)(*plVar6 + 0x20) == 0);
            goto joined_r0x00f44fca;
          }
          if (*(int *)((longlong)plVar6 + 0x170c) != 0) {
            lVar10 = plVar6[0x13];
code_r0x00f453d0:
            pvVar13 = (void *)0x0;
            FUN_00f4b740(0,(ulonglong)*(uint *)((longlong)plVar6 + 0xac) - lVar10);
            plVar6[0x13] = (ulonglong)*(uint *)((longlong)plVar6 + 0xac);
            lVar10 = *plVar6;
            pvVar16 = *(void **)(lVar10 + 0x38);
            FUN_00f4b540();
            uVar12 = *(uint *)((longlong)pvVar16 + 0x28);
            if (*(uint *)(lVar10 + 0x20) < *(uint *)((longlong)pvVar16 + 0x28)) {
              uVar12 = *(uint *)(lVar10 + 0x20);
            }
            if (uVar12 != 0) {
              pvVar15 = (void *)(ulonglong)uVar12;
              _memcpy(pvVar13,pvVar15,sVar21);
              *(longlong *)(lVar10 + 0x18) = *(longlong *)(lVar10 + 0x18) + (longlong)pvVar15;
              *(longlong *)((longlong)pvVar16 + 0x20U) =
                   *(longlong *)((longlong)pvVar16 + 0x20U) + (longlong)pvVar15;
              *(longlong *)(lVar10 + 0x28) = *(longlong *)(lVar10 + 0x28) + (longlong)pvVar15;
              *(int *)(lVar10 + 0x20) = *(int *)(lVar10 + 0x20) - uVar12;
              plVar2 = (longlong *)((longlong)pvVar16 + 0x28);
              *plVar2 = *plVar2 - (longlong)pvVar15;
              pvVar13 = pvVar15;
              if (*plVar2 == 0) {
                *(undefined8 *)((longlong)pvVar16 + 0x20) =
                     *(undefined8 *)((longlong)pvVar16 + 0x10);
                pvVar13 = pvVar16;
              }
            }
            if (*(int *)(*plVar6 + 0x20) != 0) goto LAB_00f44fe8;
            break;
          }
          goto LAB_00f44fe8;
        }
        break;
      }
      *(undefined4 *)(plVar6 + 0x14) = 0;
LAB_00f44cb2:
      uVar14 = (ulonglong)*(uint *)((longlong)plVar6 + 0xac);
      if (uVar14 == 0) {
        uVar14 = 0;
LAB_00f44d57:
        bVar17 = *(byte *)(plVar6[0xc] + uVar14);
        uVar12 = *(uint *)((longlong)plVar6 + 0x170c);
        *(uint *)((longlong)plVar6 + 0x170c) = uVar12 + 1;
        *(undefined1 *)(plVar6[0x2e0] + (ulonglong)uVar12) = 0;
        uVar12 = *(uint *)((longlong)plVar6 + 0x170c);
        *(uint *)((longlong)plVar6 + 0x170c) = uVar12 + 1;
        *(undefined1 *)(plVar6[0x2e0] + (ulonglong)uVar12) = 0;
        uVar12 = *(uint *)((longlong)plVar6 + 0x170c);
        *(uint *)((longlong)plVar6 + 0x170c) = uVar12 + 1;
        *(byte *)(plVar6[0x2e0] + (ulonglong)uVar12) = bVar17;
        psVar3 = (short *)((longlong)plVar6 + (ulonglong)bVar17 * 4 + 0xd4);
        *psVar3 = *psVar3 + 1;
        pvVar13 = (void *)(ulonglong)*(uint *)((longlong)plVar6 + 0x170c);
        *(int *)((longlong)plVar6 + 0xb4) = *(int *)((longlong)plVar6 + 0xb4) + -1;
        uVar12 = *(int *)((longlong)plVar6 + 0xac) + 1;
        *(uint *)((longlong)plVar6 + 0xac) = uVar12;
        if (*(uint *)((longlong)plVar6 + 0x170c) == *(uint *)(plVar6 + 0x2e2)) goto LAB_00f44deb;
        goto LAB_00f44c56;
      }
      lVar10 = plVar6[0xc];
      cVar9 = *(char *)(lVar10 + -1 + uVar14);
      if (((cVar9 != *(char *)(lVar10 + uVar14)) ||
          (lVar10 = lVar10 + uVar14, cVar9 != *(char *)(lVar10 + 1))) ||
         (cVar9 != *(char *)(lVar10 + 2))) goto LAB_00f44d57;
      param_3 = lVar10 + 0x102;
      lVar11 = 0;
      do {
        iVar18 = (int)lVar10;
        iVar5 = (int)lVar11;
        if (cVar9 != *(char *)(lVar10 + 3 + lVar11)) {
          iVar18 = iVar18 + iVar5 + 3;
          goto LAB_00f44ed7;
        }
        if (cVar9 != *(char *)(lVar10 + 4 + lVar11)) {
          iVar18 = iVar18 + iVar5 + 4;
          goto LAB_00f44ed7;
        }
        if (cVar9 != *(char *)(lVar10 + 5 + lVar11)) {
          iVar18 = iVar18 + iVar5 + 5;
          goto LAB_00f44ed7;
        }
        if (cVar9 != *(char *)(lVar10 + 6 + lVar11)) {
          iVar18 = iVar18 + iVar5 + 6;
          goto LAB_00f44ed7;
        }
        if (cVar9 != *(char *)(lVar10 + 7 + lVar11)) {
          iVar18 = iVar18 + iVar5 + 7;
          goto LAB_00f44ed7;
        }
        if (cVar9 != *(char *)(lVar10 + 8 + lVar11)) {
          iVar18 = iVar18 + iVar5 + 8;
          goto LAB_00f44ed7;
        }
        if (cVar9 != *(char *)(lVar10 + 9 + lVar11)) {
          iVar18 = iVar18 + iVar5 + 9;
          goto LAB_00f44ed7;
        }
        lVar1 = lVar11 + 8;
      } while ((cVar9 == *(char *)(lVar10 + 10 + lVar11)) &&
              (uVar20 = lVar11 + 2, lVar11 = lVar1, uVar20 < 0xfa));
      iVar18 = iVar18 + (int)lVar1 + 2;
LAB_00f44ed7:
      uVar19 = (iVar18 - (int)param_3) + 0x102;
      if (uVar12 < uVar19) {
        uVar19 = uVar12;
      }
      *(uint *)(plVar6 + 0x14) = uVar19;
      if (uVar19 < 3) goto LAB_00f44d57;
      bVar17 = (char)uVar19 - 3;
      uVar12 = *(uint *)((longlong)plVar6 + 0x170c);
      *(uint *)((longlong)plVar6 + 0x170c) = uVar12 + 1;
      *(undefined1 *)(plVar6[0x2e0] + (ulonglong)uVar12) = 1;
      uVar12 = *(uint *)((longlong)plVar6 + 0x170c);
      *(uint *)((longlong)plVar6 + 0x170c) = uVar12 + 1;
      *(undefined1 *)(plVar6[0x2e0] + (ulonglong)uVar12) = 0;
      uVar12 = *(uint *)((longlong)plVar6 + 0x170c);
      *(uint *)((longlong)plVar6 + 0x170c) = uVar12 + 1;
      *(byte *)(plVar6[0x2e0] + (ulonglong)uVar12) = bVar17;
      psVar3 = (short *)((longlong)plVar6 + (ulonglong)(byte)(&DAT_023e8160)[bVar17] * 4 + 0x4d8);
      *psVar3 = *psVar3 + 1;
      psVar3 = (short *)((longlong)plVar6 + (ulonglong)DAT_023e7f60 * 4 + 0x9c8);
      *psVar3 = *psVar3 + 1;
      pvVar13 = (void *)(ulonglong)*(uint *)((longlong)plVar6 + 0x170c);
      *(int *)((longlong)plVar6 + 0xb4) = *(int *)((longlong)plVar6 + 0xb4) - (int)plVar6[0x14];
      uVar12 = (int)plVar6[0x14] + *(int *)((longlong)plVar6 + 0xac);
      *(uint *)((longlong)plVar6 + 0xac) = uVar12;
      *(undefined4 *)(plVar6 + 0x14) = 0;
      if (*(uint *)((longlong)plVar6 + 0x170c) != *(uint *)(plVar6 + 0x2e2)) goto LAB_00f44c56;
LAB_00f44deb:
      pvVar13 = (void *)0x0;
      FUN_00f4b740(0,(ulonglong)uVar12 - plVar6[0x13]);
      plVar6[0x13] = (ulonglong)*(uint *)((longlong)plVar6 + 0xac);
      lVar10 = *plVar6;
      pvVar16 = *(void **)(lVar10 + 0x38);
      FUN_00f4b540();
      uVar12 = *(uint *)((longlong)pvVar16 + 0x28);
      if (*(uint *)(lVar10 + 0x20) < *(uint *)((longlong)pvVar16 + 0x28)) {
        uVar12 = *(uint *)(lVar10 + 0x20);
      }
      if (uVar12 != 0) {
        pvVar15 = (void *)(ulonglong)uVar12;
        _memcpy(pvVar13,pvVar15,(size_t)param_3);
        *(longlong *)(lVar10 + 0x18) = *(longlong *)(lVar10 + 0x18) + (longlong)pvVar15;
        *(longlong *)((longlong)pvVar16 + 0x20U) =
             *(longlong *)((longlong)pvVar16 + 0x20U) + (longlong)pvVar15;
        *(longlong *)(lVar10 + 0x28) = *(longlong *)(lVar10 + 0x28) + (longlong)pvVar15;
        *(int *)(lVar10 + 0x20) = *(int *)(lVar10 + 0x20) - uVar12;
        plVar2 = (longlong *)((longlong)pvVar16 + 0x28);
        *plVar2 = *plVar2 - (longlong)pvVar15;
        pvVar13 = pvVar15;
        if (*plVar2 == 0) {
          *(undefined8 *)((longlong)pvVar16 + 0x20) = *(undefined8 *)((longlong)pvVar16 + 0x10);
          pvVar13 = pvVar16;
        }
      }
    } while (*(int *)(*plVar6 + 0x20) != 0);
  }
  else {
    if ((int)plVar6[0x19] != 2) {
      uVar12 = (**(code **)(&UNK_02593d38 + (longlong)pvVar13 * 0x10))();
      goto joined_r0x00f44fca;
    }
    do {
      do {
        if (*(int *)((longlong)plVar6 + 0xb4) == 0) {
          FUN_00f439b0();
          sVar21 = (size_t)param_3;
          if (*(int *)((longlong)plVar6 + 0xb4) == 0) {
            if (unaff_ESI != 0) {
              *(undefined4 *)((longlong)plVar6 + 0x172c) = 0;
              if (unaff_ESI == 4) {
                lVar10 = plVar6[0x13];
                goto code_r0x00f45049;
              }
              if (*(int *)((longlong)plVar6 + 0x170c) == 0) goto LAB_00f44fe8;
              lVar10 = plVar6[0x13];
              goto code_r0x00f453d0;
            }
            goto LAB_00f45494;
          }
        }
        *(undefined4 *)(plVar6 + 0x14) = 0;
        bVar17 = *(byte *)(plVar6[0xc] + (ulonglong)*(uint *)((longlong)plVar6 + 0xac));
        uVar12 = *(uint *)((longlong)plVar6 + 0x170c);
        *(uint *)((longlong)plVar6 + 0x170c) = uVar12 + 1;
        *(undefined1 *)(plVar6[0x2e0] + (ulonglong)uVar12) = 0;
        uVar12 = *(uint *)((longlong)plVar6 + 0x170c);
        *(uint *)((longlong)plVar6 + 0x170c) = uVar12 + 1;
        *(undefined1 *)(plVar6[0x2e0] + (ulonglong)uVar12) = 0;
        uVar12 = *(uint *)((longlong)plVar6 + 0x170c);
        *(uint *)((longlong)plVar6 + 0x170c) = uVar12 + 1;
        *(byte *)(plVar6[0x2e0] + (ulonglong)uVar12) = bVar17;
        psVar3 = (short *)((longlong)plVar6 + (ulonglong)bVar17 * 4 + 0xd4);
        *psVar3 = *psVar3 + 1;
        pvVar13 = (void *)(ulonglong)*(uint *)((longlong)plVar6 + 0x170c);
        *(int *)((longlong)plVar6 + 0xb4) = *(int *)((longlong)plVar6 + 0xb4) + -1;
        uVar12 = *(int *)((longlong)plVar6 + 0xac) + 1;
        *(uint *)((longlong)plVar6 + 0xac) = uVar12;
      } while (*(uint *)((longlong)plVar6 + 0x170c) != *(uint *)(plVar6 + 0x2e2));
      pvVar13 = (void *)0x0;
      FUN_00f4b740(0,(ulonglong)uVar12 - plVar6[0x13]);
      plVar6[0x13] = (ulonglong)*(uint *)((longlong)plVar6 + 0xac);
      lVar10 = *plVar6;
      pvVar16 = *(void **)(lVar10 + 0x38);
      FUN_00f4b540();
      uVar12 = *(uint *)((longlong)pvVar16 + 0x28);
      if (*(uint *)(lVar10 + 0x20) < *(uint *)((longlong)pvVar16 + 0x28)) {
        uVar12 = *(uint *)(lVar10 + 0x20);
      }
      if (uVar12 != 0) {
        pvVar15 = (void *)(ulonglong)uVar12;
        _memcpy(pvVar13,pvVar15,(size_t)param_3);
        *(longlong *)(lVar10 + 0x18) = *(longlong *)(lVar10 + 0x18) + (longlong)pvVar15;
        *(longlong *)((longlong)pvVar16 + 0x20U) =
             *(longlong *)((longlong)pvVar16 + 0x20U) + (longlong)pvVar15;
        *(longlong *)(lVar10 + 0x28) = *(longlong *)(lVar10 + 0x28) + (longlong)pvVar15;
        *(int *)(lVar10 + 0x20) = *(int *)(lVar10 + 0x20) - uVar12;
        plVar2 = (longlong *)((longlong)pvVar16 + 0x28);
        *plVar2 = *plVar2 - (longlong)pvVar15;
        pvVar13 = pvVar15;
        if (*plVar2 == 0) {
          *(undefined8 *)((longlong)pvVar16 + 0x20) = *(undefined8 *)((longlong)pvVar16 + 0x10);
          pvVar13 = pvVar16;
        }
      }
    } while (*(int *)(*plVar6 + 0x20) != 0);
  }
LAB_00f45494:
  if ((int)unaff_RDI[4] != 0) {
    return 0;
  }
LAB_00f454a0:
  *(undefined4 *)((longlong)plVar6 + 0x4c) = 0xffffffff;
  return 0;
}


