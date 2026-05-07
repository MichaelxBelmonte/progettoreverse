// Function: FUN_0150ddd0
// Address: 0150ddd0
// Size: 2375 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x0150e347) */
/* WARNING: Removing unreachable block (ram,0x0150e353) */
/* WARNING: Removing unreachable block (ram,0x0150e146) */
/* WARNING: Removing unreachable block (ram,0x0150e4c5) */
/* WARNING: Removing unreachable block (ram,0x0150e4d1) */
/* WARNING: Removing unreachable block (ram,0x0150dedd) */
/* WARNING: Removing unreachable block (ram,0x0150dee6) */
/* WARNING: Removing unreachable block (ram,0x0150e639) */
/* WARNING: Removing unreachable block (ram,0x0150e642) */

void FUN_0150ddd0(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  code *pcVar8;
  longlong *plVar9;
  char cVar10;
  void *pvVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  pthread_key_t pVar16;
  longlong lVar17;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar18;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  longlong *local_50;
  
  plVar9 = local_78;
  pVar16 = (pthread_key_t)param_1;
  if (*(longlong *)(unaff_RDI + 0x78) == 0) {
    do {
      lVar15 = *(longlong *)(unaff_RDI + 0x50);
      if (lVar15 == 0) goto LAB_0150dea5;
      pvVar11 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar11 != (void *)0x0) {
        lVar15 = *(longlong *)(unaff_RDI + 0x50);
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          lVar15 = *(longlong *)(lVar15 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      pVar16 = (pthread_key_t)param_1;
      unaff_RDI = lVar15;
    } while (*(longlong *)(lVar15 + 0x78) == 0);
    lVar15 = *(longlong *)(lVar15 + 0x78);
  }
  else {
    lVar15 = *(longlong *)(unaff_RDI + 0x78);
  }
  if (lVar15 == 0) {
LAB_0150dea5:
    FUN_0176fff0();
    bVar1 = true;
  }
  else {
    FUN_00d50b00();
    pvVar11 = _pthread_getspecific(pVar16);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    bVar1 = false;
  }
  if (local_70 == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  pcVar8 = DAT_025ecda8;
  lVar15 = *unaff_RSI;
  if (*(int *)(lVar15 + 0xc) < 1) {
    bVar4 = false;
    local_68 = (longlong *)0x0;
    bVar6 = false;
    local_50 = (longlong *)0x0;
    bVar3 = false;
    local_80 = (longlong *)0x0;
    bVar2 = false;
    lVar12 = 0;
  }
  else {
    lVar18 = 0;
    lVar12 = 0;
    bVar2 = false;
    local_80 = (longlong *)0x0;
    bVar3 = false;
    local_50 = (longlong *)0x0;
    bVar6 = false;
    local_68 = (longlong *)0x0;
    lVar17 = 0;
    bVar4 = false;
    do {
      pVar16 = (pthread_key_t)lVar17;
      lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + lVar18 * 8);
      if (lVar12 == lVar15) {
        if ((!bVar2) && (lVar12 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar15 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (lVar12 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          lVar12 = lVar15;
        }
        else {
          bVar2 = true;
          lVar12 = lVar15;
        }
      }
      pvVar11 = _pthread_getspecific(pVar16);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_78 == local_80) {
        if ((!bVar3) && (local_78 != (longlong *)0x0)) {
          bVar3 = true;
          if (local_70 != '\0') goto LAB_0150e15e;
          FUN_00d50b00();
LAB_0150e117:
          bVar3 = true;
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_70 == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (bVar3) {
          if (local_80 != (longlong *)0x0) {
            FUN_00d50b20();
            local_80 = local_78;
            goto LAB_0150e117;
          }
          local_80 = local_78;
          bVar3 = true;
        }
        else {
          local_80 = local_78;
          bVar3 = true;
        }
      }
      else if ((bVar3) && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
        local_80 = local_78;
        bVar3 = true;
      }
      else {
        local_80 = local_78;
        bVar3 = true;
      }
LAB_0150e15e:
      pvVar11 = _pthread_getspecific(pVar16);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar10 = FUN_0125a2d0();
      if (cVar10 != '\0') {
        pvVar11 = _pthread_getspecific(pVar16);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if (local_78 == local_68) {
          plVar13 = local_68;
          bVar5 = bVar4;
          if ((!bVar4) && (local_78 != (longlong *)0x0)) {
            if (local_70 != '\0') {
              bVar5 = true;
              goto LAB_0150e294;
            }
            FUN_00d50b00();
            bVar5 = true;
          }
LAB_0150e280:
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar13 = local_78;
          if (local_70 == '\0') {
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar5 = true;
            if ((bVar4) && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0150e280;
          }
          if ((bVar4) && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar5 = true;
        }
LAB_0150e294:
        if (plVar13 == (longlong *)0x0) {
          plVar13 = (longlong *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar13 = (longlong)&DAT_025ecd90;
          *(undefined4 *)((longlong)plVar13 + 0x54) = 0;
          *(undefined1 *)(plVar13 + 0xb) = 0;
          plVar13[7] = 0;
          plVar13[8] = 0;
          *(undefined8 *)((longlong)plVar13 + 0x42) = 0;
          *(undefined8 *)((longlong)plVar13 + 0x4a) = 0;
          *(undefined8 *)((longlong)plVar13 + 0x5c) = 0;
          *(undefined8 *)((longlong)plVar13 + 100) = 0;
          *(undefined4 *)((longlong)plVar13 + 0x6c) = 0;
          (*pcVar8)();
          pvVar11 = _pthread_getspecific(pVar16);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0128c470();
          bVar5 = true;
        }
        pvVar11 = _pthread_getspecific(pVar16);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        if (local_78 == local_50) {
          plVar14 = local_50;
          bVar7 = bVar6;
          if ((!bVar6) && (local_78 != (longlong *)0x0)) {
            if (local_70 != '\0') {
              bVar7 = true;
              goto LAB_0150e454;
            }
            FUN_00d50b00();
            bVar7 = true;
          }
LAB_0150e440:
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar14 = local_78;
          if (local_70 == '\0') {
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar7 = true;
            if ((bVar6) && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0150e440;
          }
          if ((bVar6) && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar7 = true;
        }
LAB_0150e454:
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)FUN_0117a3f0();
          (**(code **)(*plVar14 + 0x18))();
          pvVar11 = _pthread_getspecific(pVar16);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508860();
          FUN_0150d3a0();
          pvVar11 = _pthread_getspecific(pVar16);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar11 = _pthread_getspecific(pVar16);
          if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar16 = (pthread_key_t)plVar9;
          }
          pvVar11 = _pthread_getspecific(pVar16);
          if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar16 = (pthread_key_t)lVar12;
          }
          FUN_0125dfa0();
          FUN_01773f20();
          FUN_01508220();
          pvVar11 = _pthread_getspecific(pVar16);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152dc80();
          bVar7 = true;
          FUN_0150d720();
        }
        local_70 = '\0';
        cVar10 = FUN_00d23d70();
        local_78 = plVar14;
        local_68 = plVar13;
        local_50 = plVar14;
        bVar4 = bVar5;
        bVar6 = bVar7;
        if (cVar10 == '\0') {
          FUN_0150d3a0();
          FUN_0150d720();
        }
      }
      lVar18 = lVar18 + 1;
      lVar15 = *unaff_RSI;
      lVar17 = (longlong)*(int *)(lVar15 + 0xc);
    } while (lVar18 < lVar17);
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  return;
}


