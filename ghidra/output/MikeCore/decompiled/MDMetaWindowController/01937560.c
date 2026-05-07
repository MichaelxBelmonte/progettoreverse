// Function: FUN_01937560
// Address: 01937560
// Size: 2537 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x01937ddb) */
/* WARNING: Removing unreachable block (ram,0x01937de4) */
/* WARNING: Removing unreachable block (ram,0x01937d13) */
/* WARNING: Removing unreachable block (ram,0x01937d20) */
/* WARNING: Removing unreachable block (ram,0x01937e27) */
/* WARNING: Removing unreachable block (ram,0x01937e50) */
/* WARNING: Removing unreachable block (ram,0x01937864) */
/* WARNING: Removing unreachable block (ram,0x01937890) */
/* WARNING: Removing unreachable block (ram,0x019376cb) */
/* WARNING: Removing unreachable block (ram,0x019376f0) */
/* WARNING: Removing unreachable block (ram,0x019376cd) */
/* WARNING: Removing unreachable block (ram,0x019376f2) */
/* WARNING: Removing unreachable block (ram,0x01937866) */
/* WARNING: Removing unreachable block (ram,0x01937892) */
/* WARNING: Removing unreachable block (ram,0x01937e29) */
/* WARNING: Removing unreachable block (ram,0x01937e52) */

ulonglong FUN_01937560(undefined8 param_1,char param_2)

{
  bool bVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  char *pcVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  char *pcVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *unaff_RDI;
  longlong *plVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  undefined8 *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_78;
  char local_70;
  int local_60;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar3 = local_78;
  (**(code **)(*unaff_RDI + 0xe20))();
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_00243390();
  if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)((longlong)local_78 + 0xc) == 0) {
    uVar14 = 0;
  }
  else {
    dVar16 = (double)(**(code **)(*unaff_RDI + 0xf08))();
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02572358;
    pcVar2 = DAT_02572370;
    (*DAT_02572370)();
    local_60 = -1;
    while( true ) {
      lVar5 = (longlong)local_60;
      local_60 = local_60 + 1;
      if (*(int *)((longlong)local_78 + 0xc) <= local_60) break;
      lVar10 = *(longlong *)((longlong)local_78 + 0x10);
      plVar15 = *(longlong **)(lVar10 + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar10);
      pVar9 = (pthread_key_t)lVar10;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar17 = (double)FUN_0125a280();
      if (dVar17 < dVar16) {
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar17 = (double)FUN_01259520();
        if (dVar16 < dVar17) {
          local_40[0] = '\0';
          FUN_00d21140();
          local_48 = plVar15;
          if ((local_40[0] != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_001159b0();
    if ((*(int *)((longlong)puVar4 + 0xc) == 0) || (param_2 == '\0')) {
      uVar14 = CONCAT71((int7)((ulonglong)puVar4 >> 8),*(int *)((longlong)puVar4 + 0xc) != 0);
LAB_01937f56:
      FUN_00d50b20();
    }
    else {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_02572358;
      (*pcVar2)();
      local_78 = (longlong *)0x0;
      local_60 = -1;
      bVar1 = false;
      plVar15 = (longlong *)0x0;
      plVar13 = local_48;
      while( true ) {
        local_48 = plVar13;
        lVar5 = (longlong)local_60;
        local_60 = local_60 + 1;
        if (*(int *)((longlong)puVar4 + 0xc) <= local_60) break;
        lVar10 = puVar4[2];
        local_78 = *(longlong **)(lVar10 + 8 + lVar5 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)lVar10);
        pVar9 = (pthread_key_t)lVar10;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar17 = (double)FUN_0125a280();
        plVar13 = local_48;
        if (dVar17 < dVar16) {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar17 = (double)FUN_01259520();
          if (dVar16 < dVar17) {
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            local_38[0] = local_40[0];
            pcVar11 = local_38;
            pcVar8 = local_40;
            if (local_40[0] == '\0') {
              pcVar8 = pcVar11;
            }
            *pcVar8 = '\0';
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pVar9 = (pthread_key_t)pcVar11;
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar17 = (double)FUN_0125a280();
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264180();
            pvVar6 = _pthread_getspecific(pVar9);
            if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar13 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            dVar17 = (double)(**(code **)(*plVar13 + 0x380))(dVar16 - dVar17);
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar18 = (double)FUN_013de8d0();
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013df480();
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar19 = (double)FUN_01327990();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_e8 = '\0';
            local_e0 = 0;
            local_d8 = '\0';
            local_f0 = local_78;
            FUN_01320250((dVar17 + dVar18) * dVar19,&local_f0);
            if (plVar15 == local_48) {
              plVar13 = plVar15;
              if ((!bVar1) && (plVar15 != (longlong *)0x0)) {
                if (local_40[0] != '\0') goto LAB_01937be1;
                FUN_00d50b00();
                goto LAB_01937c36;
              }
joined_r0x01937c1d:
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              plVar13 = local_48;
              if (local_40[0] == '\0') {
                if (local_48 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar1) && (plVar15 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01937c36:
                bVar1 = true;
                goto joined_r0x01937c1d;
              }
              if ((bVar1) && (plVar15 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_01937be1:
              local_40[0] = '\0';
              bVar1 = true;
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_40[0] = '\0';
            FUN_00d21140();
            if ((local_40[0] != '\0') && (plVar13 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_40[0] = '\0';
            FUN_00d23f50();
            if ((local_40[0] != '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar15 = plVar13;
            plVar13 = local_78;
            if ((local_38[0] != '\0') && (plVar13 = local_78, local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar13 = local_78;
            }
          }
        }
      }
      puVar12 = puVar4;
      FUN_001159b0();
      pVar9 = (pthread_key_t)puVar12;
      (**(code **)(&UNK_00001668 + *unaff_RDI))();
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        local_78 = (longlong *)local_78[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      local_c8 = '\0';
      local_d0 = puVar7;
      uVar20 = FUN_01364ca0(dVar16);
      if ((local_c8 != '\0') && (local_d0 != (undefined8 *)0x0)) {
        uVar20 = FUN_00d50b20();
      }
      if (puVar7 != (undefined8 *)0x0) {
        local_60 = -1;
        while( true ) {
          lVar5 = (longlong)local_60;
          local_60 = local_60 + 1;
          if (*(int *)((longlong)puVar7 + 0xc) <= local_60) break;
          local_78 = *(longlong **)(*(longlong *)(puVar7[2] + 8 + lVar5 * 8) + 0x28);
          if (local_78 != (longlong *)0x0) {
            uVar20 = FUN_00d50b00();
          }
          local_40[0] = '\0';
          uVar20 = FUN_00d214d0(uVar20,*(undefined4 *)((longlong)plVar3 + 0xc));
          if ((local_40[0] != '\0') && (local_78 != (longlong *)0x0)) {
            uVar20 = FUN_00d50b20();
          }
          if (local_78 != (longlong *)0x0) {
            uVar20 = FUN_00d50b20();
          }
        }
        FUN_01954b60();
      }
      uVar20 = (**(code **)(*unaff_RDI + 0xda0))();
      local_c0 = (longlong)plVar3;
      local_b8 = '\0';
      (**(code **)(*unaff_RDI + 0xdb8))(uVar20,1);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar1) && (plVar15 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar7 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      uVar14 = CONCAT71((int7)((ulonglong)local_78 >> 8),1);
      if (puVar4 != (undefined8 *)0x0) goto LAB_01937f56;
    }
    if (plVar3 == (longlong *)0x0) goto LAB_01937f69;
  }
  FUN_00d50b20();
LAB_01937f69:
  return uVar14 & 0xffffffff;
}


