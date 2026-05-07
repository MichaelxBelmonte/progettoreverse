// Function: FUN_0131f190
// Address: 0131f190
// Size: 2487 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0131f675) */
/* WARNING: Removing unreachable block (ram,0x0131f681) */
/* WARNING: Removing unreachable block (ram,0x0131f5a3) */
/* WARNING: Removing unreachable block (ram,0x0131f5b0) */
/* WARNING: Removing unreachable block (ram,0x0131f371) */
/* WARNING: Removing unreachable block (ram,0x0131f37a) */
/* WARNING: Removing unreachable block (ram,0x0131f6d5) */
/* WARNING: Removing unreachable block (ram,0x0131f6de) */

void FUN_0131f190(pthread_key_t param_1,undefined8 param_2)

{
  double *pdVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  void *pvVar6;
  longlong lVar7;
  uint uVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  longlong *unaff_RDI;
  longlong lVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  double dVar16;
  longlong local_d8;
  char local_d0;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  pthread_key_t local_64;
  double local_60;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  local_64 = param_1;
  local_60 = (double)(**(code **)(*unaff_RDI + 0x5f8))();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_01263cd0();
  if (cVar4 == '\0') {
    dVar16 = (double)(**(code **)(*unaff_RDI + 0x5e0))();
    unaff_RDI[0x1e] = (longlong)(dVar16 - (double)unaff_RDI[0x21]);
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar15 = FUN_0125a280();
    unaff_RDI[0x21] = lVar15;
    dVar16 = (double)(**(code **)(*unaff_RDI + 0x5f0))();
    unaff_RDI[0x1f] = (longlong)(dVar16 - (double)unaff_RDI[0x21]);
    lVar15 = unaff_RDI[0x23];
  }
  else {
    dVar16 = (double)unaff_RDI[0x1e];
    dVar13 = (double)(**(code **)(*unaff_RDI + 0x5e0))();
    dVar14 = (double)(**(code **)(*unaff_RDI + 0x5f0))();
    unaff_RDI[0x1f] = (longlong)((dVar16 - dVar13) + dVar14);
    lVar15 = unaff_RDI[0x23];
  }
  if (lVar15 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265b80();
  local_70 = local_48;
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if (*(int *)(local_70 + 0xc) < 1) {
    bVar3 = false;
    local_38 = 0;
  }
  else {
    lVar11 = 0;
    local_38 = 0;
    bVar3 = false;
    do {
      lVar7 = *(longlong *)(*(longlong *)(local_70 + 0x10) + lVar11 * 8);
      lVar10 = local_70;
      if (local_38 == lVar7) {
        if (bVar3) {
          if (local_38 != 0) goto LAB_0131f3ff;
        }
        else if (local_38 != 0) {
          bVar3 = true;
          lVar7 = local_70;
          FUN_00d50b00();
          pVar9 = (pthread_key_t)lVar7;
          goto LAB_0131f434;
        }
LAB_0131f3a0:
        local_38 = 0;
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (local_38 != 0)) {
          FUN_00d50b20();
        }
        local_38 = lVar7;
        bVar3 = true;
        if (lVar7 == 0) goto LAB_0131f3a0;
LAB_0131f3ff:
        pVar9 = (pthread_key_t)lVar10;
LAB_0131f434:
        cVar4 = FUN_0131eff0();
        if (cVar4 == '\0') {
          FUN_012ddc30();
          FUN_0131dde0();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == 0) break;
          FUN_00d50b00();
          FUN_012dd9b0();
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (local_60 <= DAT_02390448) {
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar16 = (double)FUN_011eeeb0();
          }
          else {
            dVar16 = (double)unaff_RDI[0x1e];
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar13 = (double)FUN_011eedd0();
            dVar16 = dVar16 - dVar13;
          }
          lVar7 = unaff_RDI[0x22];
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          local_88 = 0;
          lVar10 = unaff_RDI[0x23];
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          local_88 = '\x01';
          local_90 = lVar10;
          FUN_0141d120(dVar16,&local_90,unaff_RDI[0x20]);
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          local_40 = '\0';
          FUN_00d21140();
          FUN_00d50b20();
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(local_70 + 0xc));
  }
  lVar11 = unaff_RDI[0x24];
  uVar8 = *(uint *)(lVar11 + 0xc);
  dVar16 = (double)(ulonglong)uVar8;
  if (0 < (int)uVar8) {
    while( true ) {
      local_60 = dVar16;
      uVar12 = uVar8 - 1;
      plVar2 = *(longlong **)(*(longlong *)(lVar11 + 0x10) + (ulonglong)uVar12 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      uVar8 = local_64;
      (**(code **)(*plVar2 + 0x400))(local_64,param_2);
      cVar4 = FUN_0141d060();
      if (cVar4 == '\0') {
        FUN_012ddc30();
        lVar11 = *(longlong *)(*(longlong *)(unaff_RDI[0x24] + 0x10) + (ulonglong)uVar12 * 8);
        local_78 = 0;
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        local_78 = '\x01';
        local_80 = lVar11;
        FUN_0131dea0();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d23620();
      }
      FUN_00d50b20();
      if ((longlong)local_60 < 2) break;
      lVar11 = unaff_RDI[0x24];
      uVar8 = uVar12;
      dVar16 = (double)((longlong)local_60 - 1);
    }
  }
  pvVar6 = _pthread_getspecific(uVar8);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_01263cd0();
  if (cVar4 != '\0') {
    unaff_RDI[0x1e] = unaff_RDI[0x1f];
  }
  lVar11 = unaff_RDI[0x20];
  lVar7 = FUN_012dd9d0();
  lVar10 = (longlong)(int)local_64;
  if (lVar7 < lVar11 - lVar10) goto LAB_0131f9fd;
  local_60 = (double)unaff_RDI[0x1f];
  pvVar6 = _pthread_getspecific(local_64);
  pVar9 = (pthread_key_t)lVar10;
  if ((pvVar6 == (void *)0x0) || (lVar11 = FUN_00e8b990(), lVar11 == 0)) {
    if (local_60 < *(double *)(lVar15 + 0xf0) || local_60 == *(double *)(lVar15 + 0xf0))
    goto LAB_0131f936;
  }
  else {
    pdVar1 = (double *)
             (*(longlong *)(lVar15 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8) + 0xf0);
    if (local_60 < *pdVar1 || local_60 == *pdVar1) {
LAB_0131f936:
      if (0.0 < (double)unaff_RDI[0x1f] || (double)unaff_RDI[0x1f] == 0.0) {
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (local_48 == 0) {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          bVar5 = FUN_01263cd0();
          bVar5 = bVar5 ^ 1;
        }
        else {
          bVar5 = 0;
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (bVar5 == 0) {
          local_60 = (double)unaff_RDI[0x1f];
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar16 = (double)FUN_01270640();
          if (dVar16 < local_60) {
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar16 = (double)FUN_01264170();
            if ((dVar16 == DAT_023b2568) && (!NAN(dVar16) && !NAN(DAT_023b2568))) {
              pvVar6 = _pthread_getspecific(pVar9);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01259540((double)(int)local_64 * (double)unaff_RDI[4] + (double)unaff_RDI[0x1f]);
            }
            *(undefined1 *)(unaff_RDI + 0x1d) = 0;
            FUN_0131ed90();
          }
          goto LAB_0131f9fd;
        }
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 0x1d) = 0;
  FUN_0131ed90();
LAB_0131f9fd:
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if (lVar15 != 0) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}


