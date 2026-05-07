// Function: FUN_0126bf30
// Address: 0126bf30
// Size: 1520 bytes
// Class: MUSampledFunction


/* WARNING: Removing unreachable block (ram,0x0126c272) */
/* WARNING: Removing unreachable block (ram,0x0126c27e) */
/* WARNING: Removing unreachable block (ram,0x0126c0d3) */
/* WARNING: Removing unreachable block (ram,0x0126c0dc) */
/* WARNING: Removing unreachable block (ram,0x0126c167) */
/* WARNING: Removing unreachable block (ram,0x0126c170) */

void FUN_0126bf30(pthread_key_t param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong unaff_RDI;
  ulonglong uVar14;
  bool bVar15;
  undefined4 uVar16;
  uint uVar17;
  ulonglong local_a8;
  longlong local_80;
  char local_78;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_0125e7c0();
  if (local_40 == (longlong *)0x0) {
    bVar15 = false;
  }
  else {
    FUN_0125e7c0();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    bVar15 = local_80 != 0;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar15) {
    FUN_0125e7c0();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013ddeb0();
    local_48 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar15 = true;
      local_48 = (longlong *)0x0;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar15 = false;
    }
    else {
      local_38 = '\0';
      bVar15 = false;
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != (longlong *)0x0) {
      uVar7 = FUN_00e7d850(SUB84(*(double *)(unaff_RDI + 0xf0) * DAT_0240f0f0,0));
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(undefined1 *)(puVar9 + 7) = 0;
      *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
      *(undefined2 *)(puVar9 + 8) = 0;
      plVar12 = (longlong *)&DAT_025dc9e8;
      *puVar9 = &DAT_025dc9e8;
      puVar9[9] = 0;
      puVar9[10] = 0;
      (*DAT_025dca00)();
      pvVar8 = _pthread_getspecific((pthread_key_t)plVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb950(SUB84(DAT_0240f0f0,0));
      pvVar8 = _pthread_getspecific((pthread_key_t)plVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb890();
      pVar11 = (pthread_key_t)plVar12;
      if (0 < (int)uVar7) {
        uVar14 = 0;
        do {
          dVar6 = (double)(int)uVar14 / DAT_0240f0f0;
          plVar13 = *(longlong **)(unaff_RDI + 0xd0);
          pvVar8 = _pthread_getspecific((pthread_key_t)plVar12);
          if (pvVar8 != (void *)0x0) {
            plVar13 = *(longlong **)(unaff_RDI + 0xd0);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
          }
          uVar1 = uVar14 + 1;
          uVar3 = (**(code **)(*plVar13 + 0x3b8))(SUB84((double)(int)uVar1 / DAT_0240f0f0,0));
          uVar16 = SUB84(dVar6,0);
          local_a8 = uVar3;
          if (uVar14 == 0) {
            plVar13 = *(longlong **)(unaff_RDI + 0xd0);
            pvVar8 = _pthread_getspecific((pthread_key_t)plVar12);
            if (pvVar8 != (void *)0x0) {
              plVar13 = *(longlong **)(unaff_RDI + 0xd0);
              lVar10 = FUN_00e8b990();
              if (lVar10 != 0) {
                plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
              }
            }
            uVar17 = (**(code **)(*plVar13 + 0x3b8))(uVar16);
            local_a8 = (ulonglong)uVar17;
          }
          pvVar8 = _pthread_getspecific((pthread_key_t)plVar12);
          plVar13 = local_48;
          if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar12 = local_48;
            plVar13 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          dVar4 = (double)(**(code **)(*plVar13 + 0x3a8))((int)local_a8,uVar3);
          plVar13 = *(longlong **)(unaff_RDI + 0x188);
          pvVar8 = _pthread_getspecific((pthread_key_t)plVar12);
          if (pvVar8 != (void *)0x0) {
            plVar13 = *(longlong **)(unaff_RDI + 0x188);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
          }
          dVar5 = (double)(**(code **)(*plVar13 + 0x380))(uVar16);
          dVar6 = (double)FUN_0126c880(SUB84(dVar4 * dVar5,0),dVar6);
          pVar11 = (pthread_key_t)plVar12;
          *(float *)(local_40[2] + uVar14 * 4) = (float)dVar6;
          uVar14 = uVar1;
        } while (uVar1 != uVar7);
      }
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb720();
      puVar2 = *(undefined8 **)(unaff_RDI + 0x78);
      if (puVar2 != puVar9) {
        if (puVar9 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        *(undefined8 **)(unaff_RDI + 0x78) = puVar9;
        if (puVar2 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      if (puVar9 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (!bVar15) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


