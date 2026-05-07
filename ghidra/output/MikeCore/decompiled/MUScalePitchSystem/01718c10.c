// Function: FUN_01718c10
// Address: 01718c10
// Size: 3159 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01719821) */
/* WARNING: Removing unreachable block (ram,0x0171982a) */
/* WARNING: Removing unreachable block (ram,0x017191dc) */
/* WARNING: Removing unreachable block (ram,0x017191e8) */
/* WARNING: Removing unreachable block (ram,0x01718ec9) */
/* WARNING: Removing unreachable block (ram,0x01718ed5) */
/* WARNING: Removing unreachable block (ram,0x0171928c) */
/* WARNING: Removing unreachable block (ram,0x01719298) */
/* WARNING: Removing unreachable block (ram,0x01719838) */
/* WARNING: Removing unreachable block (ram,0x01719844) */
/* WARNING: Removing unreachable block (ram,0x01718ead) */
/* WARNING: Removing unreachable block (ram,0x01718eb6) */

void FUN_01718c10(ulonglong param_1,ulonglong *param_2)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  pthread_key_t pVar10;
  uint uVar11;
  longlong *unaff_RSI;
  int iVar12;
  int iVar13;
  ulonglong *unaff_RDI;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 unaff_R15;
  undefined7 uVar16;
  bool bVar17;
  longlong local_c8;
  char local_c0;
  ulonglong local_48;
  char local_40;
  
  if (DAT_028ada68 == (longlong *)0x0) {
LAB_01718ce1:
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    bVar17 = DAT_028ada68 == (longlong *)0x0;
    DAT_028ada68 = plVar6;
    if (((bVar17) || (FUN_00d50b20(), DAT_028ada68 != (longlong *)0x0)) && (DAT_028ada70 == '\0')) {
      DAT_028ada70 = '\x01';
      FUN_00e8cb90();
      pVar10 = (pthread_key_t)param_1;
      uVar14 = *param_2;
    }
    else {
      pVar10 = (pthread_key_t)param_1;
      uVar14 = *param_2;
    }
    if (uVar14 == 0) {
      if (DAT_028ada58 != 0) {
        DAT_028ada58 = 0;
        FUN_00d50b20();
      }
    }
    else {
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d51d20();
      param_1 = DAT_028ada58;
      if (DAT_028ada58 != local_48) {
        param_1 = local_48;
        if (local_40 == '\0') {
          if (local_48 == 0) {
            param_1 = 0;
          }
          else {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        bVar17 = DAT_028ada58 != 0;
        DAT_028ada58 = param_1;
        if (bVar17) {
          FUN_00d50b20();
          param_1 = local_48;
        }
      }
      if ((param_1 != 0) && (DAT_028ada60 == '\0')) {
        DAT_028ada60 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (*param_2 != 0) {
      if (DAT_028ada58 != 0) {
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar14 = DAT_028ada58;
        if (DAT_028ada58 != 0) {
          FUN_00d50b00();
        }
        cVar4 = FUN_00d51e10();
        if (uVar14 != 0) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') goto LAB_01718e4f;
      }
      goto LAB_01718ce1;
    }
    if (DAT_028ada58 != 0) goto LAB_01718ce1;
  }
LAB_01718e4f:
  FUN_01719cd0();
  uVar14 = local_48;
  if (local_48 == 0) {
    bVar17 = true;
    uVar14 = 0;
    uVar16 = 0;
    bVar1 = false;
  }
  else {
    uVar16 = (undefined7)((ulonglong)unaff_R15 >> 8);
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar17 = false;
      bVar1 = true;
    }
    else {
      local_40 = '\0';
      bVar1 = true;
      bVar17 = false;
    }
  }
  if (bVar17) {
    FUN_0173c410();
    if (local_48 == uVar14) {
      if (local_48 == 0) {
joined_r0x01718f97:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar1 = true;
        if (local_40 == '\0') {
          FUN_00d50b00();
          goto LAB_01718f7f;
        }
      }
    }
    else if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar8 = bVar1 & uVar14 != 0;
      param_1 = CONCAT71(uVar16,bVar8) & 0xffffffff;
      bVar1 = true;
      uVar14 = local_48;
      if (bVar8 == 1) {
        FUN_00d50b20();
LAB_01718f7f:
        bVar1 = true;
        goto joined_r0x01718f97;
      }
    }
    else {
      bVar8 = bVar1 & uVar14 != 0;
      param_1 = CONCAT71(uVar16,bVar8) & 0xffffffff;
      bVar1 = true;
      uVar14 = local_48;
      if (bVar8 == 1) {
        FUN_00d50b20();
      }
    }
    if (*param_2 != 0) {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_01770c50();
      if (cVar4 == '\0') {
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0176f850();
        FUN_01774240();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_0176f880();
        uVar15 = *param_2;
        if (uVar15 == local_48) {
          if (((char)param_2[1] == '\0') && (local_48 != 0)) {
            if (local_40 != '\0') goto LAB_01719173;
            FUN_00d50b00();
            goto LAB_017191b6;
          }
LAB_017191bf:
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar3 = param_2[1];
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            *param_2 = local_48;
            if (((char)uVar3 != '\0') && (uVar15 != 0)) {
              FUN_00d50b20();
            }
LAB_017191b6:
            *(undefined1 *)(param_2 + 1) = 1;
            goto LAB_017191bf;
          }
          *param_2 = local_48;
          if (((char)uVar3 != '\0') && (uVar15 != 0)) {
            FUN_00d50b20();
          }
LAB_01719173:
          *(undefined1 *)(param_2 + 1) = 1;
          local_40 = '\0';
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017702f0();
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b720();
      }
    }
    uVar15 = 0;
    do {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = uVar14;
      }
      FUN_0173b6f0();
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736e70();
      lVar7 = *(longlong *)(*(longlong *)(local_48 + 0x10) + uVar15 * 2);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((uVar15 == 0) ||
         (param_1 = uVar15 & 0xffffffff,
         (~(uint)(*(ulonglong *)(*unaff_RSI + 0x18) >> ((byte)param_1 & 0x3f)) & 0xf) != 0)) {
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        lVar2 = DAT_027cd560;
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
          lVar2 = DAT_027cd560;
        }
        DAT_027cd560 = lVar2;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_017395b0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar15);
        lVar2 = DAT_027cd580;
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
          lVar2 = DAT_027cd580;
        }
        DAT_027cd580 = lVar2;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_017395b0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      pVar10 = (pthread_key_t)param_1;
      uVar15 = uVar15 + 4;
    } while (uVar15 != 0x30);
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar9 = *(int *)(*unaff_RSI + 0xc) * 7;
    iVar13 = iVar9 >> 0x1f;
    pVar10 = (((uint)(iVar9 / 6 + iVar13) >> 1) - iVar13) * 0xc;
    FUN_01738020();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01738020();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar13 = *(int *)(*unaff_RSI + 0xc);
    iVar9 = iVar13 * 7;
    iVar9 = iVar9 + (((uint)(iVar9 / 6 + (iVar9 >> 0x1f)) >> 1) - (iVar9 >> 0x1f)) * -0xc;
    iVar9 = ((iVar9 >> 0x1f & 0xcU) + iVar9) * 7;
    iVar9 = iVar9 + ((int)(short)iVar9 / 0xc) * -0xc;
    cVar4 = ((byte)((uint)(int)(short)iVar9 >> 0xf) & 0xc) + (char)iVar9 + '\x06';
    uVar11 = cVar4 * 0x2b;
    cVar4 = cVar4 + ((char)((uVar11 & 0xffff) >> 0xf) + (char)(uVar11 >> 9)) * -0xc;
    iVar9 = 0xc;
    if (-1 < cVar4) {
      iVar9 = 0;
    }
    pVar10 = (pthread_key_t)(char)(cVar4 + -6);
    if ((int)(iVar9 + pVar10) < iVar13) {
      iVar12 = iVar9 + pVar10 + 0xc;
      if (iVar12 < iVar13) {
        iVar12 = iVar13;
      }
      iVar13 = (iVar12 - iVar9) + -6;
      pVar10 = (((iVar13 - pVar10) - (uint)(iVar13 != pVar10 + 6)) - 6) / 0xc;
    }
    FUN_01736cc0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017548e0();
    FUN_01719d80();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((bVar1) || (uVar14 == 0)) goto LAB_01719864;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar1 || uVar14 == 0) goto LAB_01719864;
  }
  FUN_00d50b00();
LAB_01719864:
  *unaff_RDI = uVar14;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


