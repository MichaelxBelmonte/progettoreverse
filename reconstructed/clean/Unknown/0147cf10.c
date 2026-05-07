// Function: FUN_0147cf10
// Address: 0147cf10
// Size: 4305 bytes
// Class: Unknown

void FUN_0147cf10(void)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  uint8_t uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  void*puVar9;
  void *pvVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  int64_t lVar13;
  int64_t *plVar14;
  uint64_t uVar15;
  int64_t *plVar16;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  void* pVar17;
  void* pVar18;
  int64_t lVar19;
  uint uVar20;
  int iVar21;
  bool bVar22;
  uint32_t uVar23;
  float fVar24;
  float fVar25;
  uint64_t local_50;
  char local_48;
  int64_t *local_40;
  int64_t *local_38;
  
  plVar3 = local_50;
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar17 = 0x2572358;
  *puVar9 = &g_02572358;
  (*g_02572370)();
  pvVar10 = _pthread_getspecific(pVar17);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_016ca5b0();
  pvVar10 = _pthread_getspecific(pVar17);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar11 = (int64_t *)FUN_016ca6f0();
  uVar12 = FUN_00e7bdb0();
  uVar23 = FUN_0147e670();
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      uVar23 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d242c0(uVar23,0);
  iVar21 = *(int *)((int64_t)local_50 + 0xc);
  if (iVar21 < 1) {
    bVar2 = false;
    local_38 = (int64_t *)0x0;
    bVar1 = false;
    plVar14 = (int64_t *)0x0;
    local_40 = (int64_t *)0x0;
  }
  else {
    lVar19 = 0;
    local_40 = (int64_t *)0x0;
    bVar1 = false;
    local_38 = (int64_t *)0x0;
    bVar2 = false;
    do {
      plVar14 = *(int64_t **)(plVar3[2] + lVar19 * 8);
      plVar16 = plVar3;
      if (local_40 == plVar14) {
        if ((!bVar1) && (local_40 != (int64_t *)0x0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar14 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar1 = true;
          local_40 = plVar14;
        }
        else {
          bVar1 = true;
          local_40 = plVar14;
        }
      }
      pVar18 = (void*)plVar16;
      pvVar10 = _pthread_getspecific(pVar18);
      pVar17 = (void*)local_40;
      if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        pVar18 = pVar17;
      }
      FUN_014bc420();
      if (local_50 == local_38) {
        if ((!bVar2) && (local_50 != (int64_t *)0x0)) {
          plVar14 = local_38;
          if (local_48 != '\0') goto LAB_0147d1c4;
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        plVar14 = local_50;
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (local_38 != (int64_t *)0x0)) {
            FUN_00d50b20();
            local_38 = local_50;
            bVar2 = true;
            goto LAB_0147d230;
          }
        }
        else {
          if ((bVar2) && (local_38 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_0147d1c4:
          local_48 = '\0';
        }
        local_38 = plVar14;
        bVar2 = true;
      }
LAB_0147d230:
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38 != (int64_t *)0x0) {
        pvVar10 = _pthread_getspecific(pVar18);
        if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar18 = pVar17;
        }
        plVar14 = (int64_t *)FUN_014bb920();
        pvVar10 = _pthread_getspecific(pVar18);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar15 = FUN_014bb920();
        local_50._4_4_ = (int)((uint64_t)plVar14 >> 0x20);
        bVar22 = local_50._4_4_ != 0;
        local_50 = plVar14;
        if (((bVar22) && (uVar15 >> 0x20 != 0)) && (cVar5 = FUN_00e7c000(), cVar5 != '\0')) {
          FUN_00d216c0();
          cVar5 = FUN_00d23d70();
          if (cVar5 != '\0') {
            FUN_00d21140();
          }
          cVar5 = FUN_00d23d70();
          if (cVar5 != '\0') {
            FUN_00d21140();
          }
          local_48 = '\0';
          local_50 = local_38;
          if (*(int *)((int64_t)puVar9 + 0xc) != 0) {
            plVar14 = plVar11;
            uVar7 = FUN_011f6d20(plVar11,uVar4,uVar12);
            if (4 < (int)uVar7) {
              uVar7 = 5;
            }
            uVar20 = 5 - uVar7;
            if (0x13 < uVar20) {
              uVar20 = 0x14;
            }
            iVar21 = uVar20 + 1;
            do {
              uVar7 = uVar7 + 1;
              pVar18 = (void*)plVar14;
              pvVar10 = _pthread_getspecific(pVar18);
              if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                pVar18 = pVar17;
              }
              plVar14 = (int64_t *)FUN_014bb920();
              pvVar10 = _pthread_getspecific(pVar18);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar15 = FUN_014bb920();
              local_50._4_4_ = (int)((uint64_t)plVar14 >> 0x20);
              bVar22 = local_50._4_4_ == 0;
              local_50 = plVar14;
              if (((bVar22) || (uVar15 >> 0x20 == 0)) || (cVar5 = FUN_00e7c000(), cVar5 == '\0'))
              break;
              plVar14 = (int64_t *)(uint64_t)uVar7;
              FUN_011f70a0(plVar14,uVar4,plVar11,uVar12);
              pvVar10 = _pthread_getspecific((void*)plVar14);
              if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                plVar14 = local_38;
              }
              plVar16 = (int64_t *)FUN_014bb920();
              pvVar10 = _pthread_getspecific((void*)plVar14);
              if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                plVar14 = local_40;
              }
              uVar15 = FUN_014bb920();
              local_50._4_4_ = (int)((uint64_t)plVar16 >> 0x20);
              bVar22 = local_50._4_4_ != 0;
              local_50 = plVar16;
              if (((bVar22) && (uVar15 >> 0x20 != 0)) && (cVar5 = FUN_00e7c020(), cVar5 != '\0')) {
                pvVar10 = _pthread_getspecific((void*)plVar14);
                if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  plVar14 = local_38;
                }
                pvVar10 = _pthread_getspecific((void*)plVar14);
                if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  plVar14 = local_40;
                }
                local_50 = (int64_t *)FUN_014bb920();
                pvVar10 = _pthread_getspecific((void*)plVar14);
                if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  plVar14 = local_40;
                }
                FUN_014bb920();
                pvVar10 = _pthread_getspecific((void*)plVar14);
                if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  plVar14 = local_38;
                }
                FUN_014bb920();
                FUN_00e7b970();
                FUN_00e7b820();
                FUN_014bb8e0();
                pvVar10 = _pthread_getspecific((void*)plVar14);
                if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  plVar14 = local_38;
                }
                FUN_014bc420();
                if (local_50 != (int64_t *)0x0) {
                  pvVar10 = _pthread_getspecific((void*)plVar14);
                  if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                    plVar14 = local_38;
                  }
                  FUN_014bb920();
                  pvVar10 = _pthread_getspecific((void*)plVar14);
                  if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                    plVar14 = local_38;
                  }
                  FUN_014bc420();
                  pvVar10 = _pthread_getspecific((void*)plVar14);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar15 = FUN_014bb920();
                  cVar5 = '\0';
                  if ((extraout_var != 0) && (uVar15 >> 0x20 != 0)) {
                    cVar5 = FUN_00e7c020();
                  }
                  if (cVar5 != '\0') {
                    pvVar10 = _pthread_getspecific((void*)plVar14);
                    if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                      plVar14 = local_38;
                    }
                    pvVar10 = _pthread_getspecific((void*)plVar14);
                    if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                      plVar14 = local_40;
                    }
                    FUN_014bb920();
                    FUN_014bb8e0();
                  }
                }
              }
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
          }
        }
      }
      lVar19 = lVar19 + 1;
      iVar21 = *(int *)((int64_t)plVar3 + 0xc);
      plVar14 = plVar3;
    } while (lVar19 < iVar21);
  }
  if (1 < iVar21) {
    lVar19 = 0;
    do {
      plVar16 = *(int64_t **)(plVar3[2] + lVar19 * 8);
      if (local_40 == plVar16) {
        if ((!bVar1) && (local_40 != (int64_t *)0x0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar16 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar1 = true;
          local_40 = plVar16;
        }
        else {
          bVar1 = true;
          local_40 = plVar16;
        }
      }
      plVar16 = *(int64_t **)(plVar3[2] + 8 + lVar19 * 8);
      if (local_38 == plVar16) {
        if ((!bVar2) && (local_38 != (int64_t *)0x0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar16 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar2 = true;
          local_38 = plVar16;
        }
        else {
          bVar2 = true;
          local_38 = plVar16;
        }
      }
      pvVar10 = _pthread_getspecific((void*)plVar14);
      if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        plVar14 = local_40;
      }
      FUN_014bb920();
      pvVar10 = _pthread_getspecific((void*)plVar14);
      if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        plVar14 = local_38;
      }
      uVar15 = FUN_014bb920();
      if (((extraout_var_00 != 0) && (uVar15 >> 0x20 != 0)) &&
         (cVar5 = FUN_00e7c000(), cVar5 != '\0')) {
        pvVar10 = _pthread_getspecific((void*)plVar14);
        plVar16 = local_40;
        if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          plVar14 = local_40;
          plVar16 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
        }
        fVar24 = (float)(**(code **)(*plVar16 + 0x3e0))();
        pvVar10 = _pthread_getspecific((void*)plVar14);
        plVar16 = local_38;
        if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          plVar14 = local_38;
          plVar16 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
        }
        fVar25 = (float)(**(code **)(*plVar16 + 0x3e0))();
        if ((float)((uint)(fVar24 - fVar25) & g_02390140) < g_0240df18) {
          FUN_00d216c0();
          cVar5 = FUN_00d23d70();
          if (cVar5 != '\0') {
            FUN_00d21140();
          }
          cVar5 = FUN_00d23d70();
          if (cVar5 != '\0') {
            FUN_00d21140();
          }
          if (*(int *)((int64_t)puVar9 + 0xc) != 0) {
            iVar8 = FUN_011f6d20(plVar11,uVar4,uVar12);
            iVar21 = 5;
            if (iVar8 < 5) {
              iVar21 = iVar8;
            }
            plVar14 = (int64_t *)(uint64_t)(iVar21 + 1);
            FUN_011f70a0(plVar14,uVar4,plVar11,uVar12);
            pvVar10 = _pthread_getspecific((void*)plVar14);
            if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              plVar14 = local_40;
            }
            FUN_014bb920();
            pvVar10 = _pthread_getspecific((void*)plVar14);
            if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              plVar14 = local_38;
            }
            uVar15 = FUN_014bb920();
            if ((extraout_var_01 != 0) && (uVar15 >> 0x20 != 0)) {
              bVar6 = FUN_00e7c000();
              plVar14 = (int64_t *)CONCAT71((int7)((uint64_t)plVar14 >> 8),iVar8 < 5);
              if ((bVar6 & iVar8 < 5) == 1) {
                plVar14 = (int64_t *)(uint64_t)(iVar21 + 2);
                FUN_011f70a0(plVar14,uVar4,plVar11,uVar12);
              }
            }
          }
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int64_t)*(int *)((int64_t)plVar3 + 0xc) + -1);
  }
  FUN_00d50b20();
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

