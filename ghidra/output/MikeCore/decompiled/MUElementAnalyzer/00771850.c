// Function: FUN_00771850
// Address: 00771850
// Size: 1279 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x007719c5) */
/* WARNING: Removing unreachable block (ram,0x007719d1) */
/* WARNING: Removing unreachable block (ram,0x00771c1a) */
/* WARNING: Removing unreachable block (ram,0x00771c26) */
/* WARNING: Removing unreachable block (ram,0x00771d0b) */
/* WARNING: Removing unreachable block (ram,0x00771d18) */
/* WARNING: Removing unreachable block (ram,0x00771cc0) */
/* WARNING: Removing unreachable block (ram,0x00771c9e) */

void FUN_00771850(pthread_key_t param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  void *pvVar7;
  longlong lVar8;
  uint uVar9;
  longlong *unaff_RDI;
  longlong **pplVar10;
  double dVar11;
  double dVar12;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  int local_70;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  pplVar10 = &local_58;
  FUN_00d3ecf0();
  plVar1 = local_58;
  FUN_000fe4b0();
  if (plVar1 == (longlong *)0x0) {
LAB_007718a2:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_007718a2;
  }
  plVar1 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  FUN_013fe9a0();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  FUN_00757c60();
  plVar4 = local_58;
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != local_98) goto LAB_00771d4e;
  if (unaff_RDI[0x29] != 0) {
    FUN_00100170();
  }
  FUN_013fb9b0();
  plVar4 = local_58;
  if ((((local_50 == '\0') && (local_58 != (longlong *)0x0)) && (FUN_00d50b00(), local_50 != '\0'))
     && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_013fe9d0();
  plVar5 = local_58;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00771a2a;
    }
  }
  else {
LAB_00771a2a:
    if ((plVar4 == (longlong *)0x0) || (plVar5 == (longlong *)0x0)) {
LAB_00771d33:
      if (plVar5 == (longlong *)0x0) goto LAB_00771d40;
    }
    else {
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_58 == (longlong *)0x0) {
        bVar2 = false;
      }
      else {
        dVar11 = (double)FUN_00b7a6e0();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_01264170();
        bVar2 = DAT_023908d0 < dVar11 - dVar12;
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar2) goto LAB_00771d33;
      (**(code **)(*plVar1 + 1000))();
      (**(code **)(*unaff_RDI + 0x610))();
      plVar1 = local_58;
      if (local_50 != '\0') {
        if (local_58 != (longlong *)0x0) goto LAB_00771b7a;
        goto LAB_00771d33;
      }
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_00771b7a:
        local_50 = '\0';
        local_58 = (longlong *)0x0;
        local_48 = plVar1;
        local_38 = 0;
        local_40 = 0;
        if (0 < *(int *)((longlong)plVar1 + 0xc)) {
          uVar9 = 0;
          do {
            lVar3 = local_88;
            local_58 = *(longlong **)(plVar1[2] + (ulonglong)uVar9 * 8);
            FUN_006f4810();
            FUN_002e4d80();
            if (local_80 == '\0') {
              if (local_88 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_80 = '\0';
            }
            if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_88 != 0) {
              local_80 = '\0';
              local_88 = 0;
              local_70 = -1;
              while( true ) {
                lVar8 = (longlong)local_70;
                local_70 = local_70 + 1;
                if (*(int *)(lVar3 + 0xc) <= local_70) break;
                local_88 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 8 + lVar8 * 8);
                FUN_01bca0a0();
              }
              FUN_00713b30();
              FUN_00d50b20();
            }
            uVar9 = uVar9 + 1;
            local_40 = CONCAT44(local_40._4_4_,uVar9);
          } while ((int)uVar9 < *(int *)((longlong)plVar1 + 0xc));
        }
        FUN_000e3600();
        FUN_00d50b20();
        goto LAB_00771d33;
      }
    }
    FUN_00d50b20();
  }
LAB_00771d40:
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00771d4e:
  FUN_00d50b20();
  return;
}


