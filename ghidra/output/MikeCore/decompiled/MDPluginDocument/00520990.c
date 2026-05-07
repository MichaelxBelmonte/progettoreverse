// Function: FUN_00520990
// Address: 00520990
// Size: 3560 bytes
// Class: MDPluginDocument


/* WARNING: Removing unreachable block (ram,0x005215e2) */
/* WARNING: Removing unreachable block (ram,0x005215ee) */
/* WARNING: Removing unreachable block (ram,0x00521185) */
/* WARNING: Removing unreachable block (ram,0x00521191) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00520990(undefined8 param_1,pthread_key_t param_2)

{
  longlong *plVar1;
  double dVar2;
  float fVar3;
  pthread_key_t pVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  longlong lVar12;
  ulonglong uVar13;
  pthread_key_t pVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  char *pcVar17;
  longlong lVar18;
  ulonglong uVar19;
  char unaff_SIL;
  ulonglong uVar20;
  longlong *unaff_RDI;
  ulonglong uVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da;
  float fVar24;
  double dVar25;
  longlong local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  double local_80;
  double local_78;
  pthread_key_t local_5c;
  longlong local_58;
  longlong local_50;
  char local_48 [8];
  longlong local_40;
  char local_38 [8];
  
  FUN_00757c60();
  pvVar11 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  local_40 = local_50;
  if (local_48[0] == '\0') {
    if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48[0] = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  local_78 = (double)FUN_00b335d0();
  local_5c = param_2;
  FUN_00b31a00();
  lVar22 = local_50;
  uVar15 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_48[0]);
  pcVar17 = local_38;
  if (local_48[0] != '\0') {
    pcVar17 = local_48;
  }
  local_38[0] = local_48[0];
  *pcVar17 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pVar14 = (pthread_key_t)uVar15;
  if (unaff_RDI[0x61] == 0) {
    uVar23 = FUN_0051b4f0();
    local_d0 = local_90;
    local_c8 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        uVar23 = FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    local_c8 = '\x01';
    FUN_012d2830(uVar23,&local_d0);
    lVar12 = local_50;
    if (local_48[0] == '\0') {
      if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = '\0';
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    pVar14 = (pthread_key_t)uVar15;
    if (lVar12 != 0) {
      cVar5 = FUN_01311c10();
      cVar6 = *(char *)((longlong)unaff_RDI + 0x24b);
      pVar14 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar15 >> 8),cVar6);
      if (cVar5 == '\0') {
        if (cVar6 != '\0') {
          FUN_01311bf0();
          *(undefined1 *)((longlong)unaff_RDI + 0x371) = 1;
          FUN_00521c10();
        }
      }
      else if (cVar6 == '\0') {
        FUN_01311bf0();
        *(undefined1 *)((longlong)unaff_RDI + 0x371) = 0;
        FUN_00521cd0();
      }
      FUN_00d50b20();
    }
  }
  if (((longlong *)unaff_RDI[0x4f] != (longlong *)0x0) &&
     (cVar6 = (**(code **)(*(longlong *)unaff_RDI[0x4f] + 0x5e8))(), cVar6 != '\0')) {
    plVar1 = (longlong *)unaff_RDI[0x4f];
    FUN_0141cb10();
    local_c0 = local_50;
    local_b8 = 0;
    if (local_48[0] == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48[0] = '\0';
    }
    local_b8 = '\x01';
    (**(code **)(*plVar1 + 0x690))();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((longlong *)unaff_RDI[0x1d] != (longlong *)0x0) {
    cVar6 = (**(code **)(*(longlong *)unaff_RDI[0x1d] + 0x5e8))();
    if ((cVar6 == '\0') ||
       (cVar6 = (**(code **)(*(longlong *)unaff_RDI[0x1d] + 0x638))(), cVar6 != '\0')) {
      if (unaff_RDI[0x61] == 0) {
        if ((local_40 == 0) || (*(char *)((longlong)unaff_RDI + 0x2e5) == '\0')) {
          lVar12 = FUN_00bc4780();
          local_78 = (double)lVar12 / local_78;
        }
        else {
          pvVar11 = _pthread_getspecific(pVar14);
          if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
            pVar14 = (pthread_key_t)local_40;
          }
          FUN_00bc47a0();
          local_78 = (double)FUN_016c26c0();
        }
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0141ccb0((int)DAT_0238fee8);
      }
      else {
        lVar12 = FUN_00bc4780();
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dd9d0();
        dVar25 = (double)lVar12 / local_78;
        dVar2 = (double)(int)local_5c / local_78;
        lVar18 = (longlong)(int)local_5c;
        pVar14 = local_5c;
        local_78 = dVar25;
        FUN_00018a90(SUB84(dVar2 + dVar25,0));
        lVar12 = FUN_00bc4780();
        unaff_RDI[0x1f] = lVar12 + lVar18;
      }
      if ((char)unaff_RDI[0x6b] != '\0') {
        plVar1 = (longlong *)unaff_RDI[0x1d];
        FUN_0141c350(SUB84(local_78,0));
        local_b0 = local_50;
        local_a8 = 0;
        if (local_48[0] == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48[0] = '\0';
        }
        local_a8 = '\x01';
        (**(code **)(*plVar1 + 0x690))();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      *(undefined1 *)(unaff_RDI + 0x14) = 1;
      unaff_RDI[0x16] = (longlong)local_78;
    }
    else if (unaff_RDI[0x61] == 0) {
      if ((*(char *)((longlong)unaff_RDI + 0x2e5) == '\0') || (local_40 == 0)) {
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0141ccb0((int)DAT_0238fee8);
      }
      else {
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_80 = (double)FUN_00bc48b0();
        pvVar11 = _pthread_getspecific(pVar14);
        if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
          pVar14 = (pthread_key_t)local_40;
        }
        lVar12 = FUN_00bc4780();
        dVar2 = (double)FUN_016c9480(SUB84((double)lVar12 / local_78,0));
        FUN_0141ccb0(SUB84(local_80 / dVar2,0));
      }
    }
    else {
      local_80 = (double)FUN_00bc4780();
      lVar12 = unaff_RDI[0x1f];
      if (((longlong)local_80 < lVar12 + -2) ||
         (iVar9 = (**(code **)(*unaff_RDI + 0x3a8))(), lVar12 + iVar9 < (longlong)local_80)) {
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar12 = unaff_RDI[0x1f];
        FUN_012dd9d0();
        local_d8 = (longlong)(int)local_5c;
        FUN_00018a90(SUB84((double)(lVar12 + local_d8) / local_78,0));
        local_58 = lVar22;
        if ((char)unaff_RDI[0x6b] != '\0') {
          plVar1 = (longlong *)unaff_RDI[0x1d];
          FUN_0141cb10();
          local_a0 = local_50;
          local_98 = 0;
          if (local_48[0] == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48[0] = '\0';
          }
          local_98 = '\x01';
          (**(code **)(*plVar1 + 0x690))();
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        uVar7 = FUN_00b33130();
        uVar8 = FUN_00b33120();
        pVar4 = local_5c;
        if ((int)uVar7 < (int)uVar8) {
          uVar7 = uVar8;
        }
        uVar20 = 0x24;
        if ((int)uVar7 < 0x24) {
          uVar20 = (ulonglong)uVar7;
        }
        FUN_00516d30(extraout_XMM0_Da,uVar20);
        pVar14 = pVar4;
        (**(code **)(*(longlong *)unaff_RDI[0x1d] + 0x400))(pVar4,unaff_RDI + 0x23);
        lVar22 = local_58;
        fVar3 = DAT_02390124;
        if ((0 < (int)pVar4) && (0 < (int)uVar7)) {
          uVar16 = (ulonglong)local_5c;
          uVar13 = 1;
          if (1 < (int)uVar20) {
            uVar13 = uVar20;
          }
          uVar20 = (ulonglong)((uint)uVar13 & 3);
          uVar21 = 0;
          do {
            fVar24 = fVar3 - (float)(int)uVar21 / (float)(int)local_5c;
            uVar19 = 0;
            if (2 < uVar13 - 1) {
              do {
                *(float *)(unaff_RDI[uVar19 + 0x23] + uVar21 * 4) =
                     *(float *)(unaff_RDI[uVar19 + 0x23] + uVar21 * 4) * fVar24;
                *(float *)(unaff_RDI[uVar19 + 0x24] + uVar21 * 4) =
                     *(float *)(unaff_RDI[uVar19 + 0x24] + uVar21 * 4) * fVar24;
                *(float *)(unaff_RDI[uVar19 + 0x25] + uVar21 * 4) =
                     *(float *)(unaff_RDI[uVar19 + 0x25] + uVar21 * 4) * fVar24;
                uVar16 = unaff_RDI[uVar19 + 0x26];
                *(float *)(uVar16 + uVar21 * 4) = *(float *)(uVar16 + uVar21 * 4) * fVar24;
                uVar19 = uVar19 + 4;
              } while (((uint)uVar13 & 0x7ffffffc) != uVar19);
            }
            if (uVar20 != 0) {
              uVar16 = 0;
              do {
                lVar12 = (unaff_RDI + 0x23)[uVar19 + uVar16];
                *(float *)(lVar12 + uVar21 * 4) = *(float *)(lVar12 + uVar21 * 4) * fVar24;
                uVar16 = uVar16 + 1;
              } while (uVar20 != uVar16);
            }
            pVar14 = (pthread_key_t)uVar16;
            uVar21 = uVar21 + 1;
          } while (uVar21 != local_5c);
        }
        dVar2 = (double)(longlong)local_80 / local_78;
        FUN_0141c350();
        lVar12 = local_50;
        if ((((local_48[0] == '\0') && (local_50 != 0)) && (FUN_00d50b00(), local_48[0] != '\0')) &&
           (local_50 != 0)) {
          FUN_00d50b20();
        }
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dd9d0();
        FUN_00018a90(SUB84((double)(int)local_5c / local_78 + dVar2,0));
        if ((char)unaff_RDI[0x6b] != '\0') {
          (**(code **)(*(longlong *)unaff_RDI[0x1d] + 0x690))();
        }
        if (lVar12 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dd9d0();
        local_d8 = (longlong)(int)local_5c;
        lVar12 = (longlong)local_80 + local_d8;
        FUN_00018a90(SUB84((double)lVar12 / local_78,0));
        pVar14 = (pthread_key_t)lVar12;
      }
      unaff_RDI[0x1f] = (longlong)local_80 + local_d8;
    }
  }
  if (unaff_RDI[0x61] != 0) goto LAB_005210ea;
  if (unaff_SIL == '\0') {
    FUN_00521c10();
  }
  cVar6 = FUN_00bc47e0();
  if (cVar6 != '\0') {
    lVar12 = FUN_00bc48b0();
    unaff_RDI[0x59] = lVar12;
  }
  if (unaff_RDI[0x55] != 0) {
    FUN_00b335e0();
    FUN_01522590();
  }
  if ((local_40 == 0) || ((int)unaff_RDI[0x58] < 0)) goto LAB_005210ea;
  cVar6 = FUN_00bc47c0();
  if ((cVar6 != '\0') &&
     ((lVar12 = FUN_00bc4780(), 0 < lVar12 && (cVar6 = FUN_00bc47d0(), cVar6 != '\0')))) {
    pvVar11 = _pthread_getspecific(pVar14);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar12 = FUN_00bc4780();
    local_78 = (double)FUN_016c25f0(SUB84((double)lVar12 / (double)unaff_RDI[3],0));
    dVar2 = (double)FUN_00bc47a0();
    dVar25 = (double)FUN_01522510();
    pVar4 = 0;
    if (dVar25 < (double)((ulonglong)(local_78 - dVar2) & _DAT_023908f0)) {
      iVar9 = local_5c + (int)unaff_RDI[0x58];
      *(int *)(unaff_RDI + 0x58) = iVar9;
      dVar2 = (double)FUN_00b335d0();
      iVar10 = FUN_00e7d850(SUB84(dVar2 * _DAT_023b3498,0));
      pVar14 = 0xffffffff;
      pVar4 = 0xffffffff;
      if (iVar9 <= iVar10) goto LAB_005216af;
    }
    pVar14 = pVar4;
    *(pthread_key_t *)(unaff_RDI + 0x58) = pVar14;
  }
LAB_005216af:
  pvVar11 = _pthread_getspecific(pVar14);
  if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
    pVar14 = (pthread_key_t)local_40;
  }
  cVar6 = FUN_016c2730();
  if (cVar6 != '\0') {
    local_78 = (double)FUN_00bc48b0();
    pvVar11 = _pthread_getspecific(pVar14);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar23 = FUN_00e7bdb0();
    dVar2 = (double)FUN_016c9410(uVar23,0);
    if (DAT_02391030 <= (double)((ulonglong)(local_78 - dVar2) & _DAT_023908f0)) {
      *(undefined4 *)(unaff_RDI + 0x58) = 0xffffffff;
    }
  }
LAB_005210ea:
  if ((local_38[0] != '\0') && (lVar22 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}


