// Function: FUN_011f4f10
// Address: 011f4f10
// Size: 3676 bytes
// Class: MUPulseAssignmentTarget
// String references:
//   "MUPulseAssignmentTarget"

bool FUN_011f4f10(double param_1,byte param_2,uint64_t param_3,uint64_t param_4)

{
  uint8_t auVar1 [16];
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  int64_t lVar10;
  int extraout_var;
  uint64_t uVar11;
  void*puVar12;
  void* in_ECX;
  void* pVar13;
  uint uVar14;
  int64_t lVar15;
  int64_t *plVar16;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar17;
  uint uVar18;
  int iVar19;
  int64_t lVar20;
  void* pVar21;
  uint64_t uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  uint8_t auVar26 [16];
  char local_res8;
  char local_res10;
  uint8_t uVar27;
  void*puVar28;
  uint8_t uVar29;
  byte local_dc;
  int64_t local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t local_58;
  int64_t *local_50;
  
  pVar13 = in_ECX;
  pvVar9 = _pthread_getspecific(in_ECX);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c99c0();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(pVar13);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c99c0();
  if (local_78 == '\0') {
    if (local_80 == 0) {
      bVar4 = true;
      local_88 = 0;
      goto LAB_011f50ea;
    }
    FUN_00d50b00();
  }
  local_88 = local_80;
  if (param_2 == 0) {
    if (local_80 != 0) {
      FUN_00d50b00();
      bVar4 = false;
      goto LAB_011f50ea;
    }
  }
  else if (local_80 != 0) {
    FUN_00d50b00();
    bVar4 = false;
    goto LAB_011f50ea;
  }
  bVar4 = true;
  local_88 = 0;
LAB_011f50ea:
  if (local_res8 == '\0') {
    local_dc = 0;
  }
  else {
    local_dc = FUN_011f6ad0();
  }
  lVar10 = *arg1;
  if (*(int *)(lVar10 + 0xc) < 1) {
    bVar3 = false;
    local_58 = 0;
    local_70 = (int64_t *)0x0;
  }
  else {
    lVar20 = 0;
    local_70 = (int64_t *)0x0;
    local_58 = 0;
    lVar15 = 0;
    bVar3 = false;
    do {
      pVar13 = (void*)lVar15;
      plVar16 = *(int64_t **)(*(int64_t *)(lVar10 + 0x10) + lVar20 * 8);
      if ((g_0272fca8 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        g_027902e0 = "MUPulseAssignmentTarget";
        g_027902f0 = 0;
        g_027902e8 = 0;
        ___cxa_guard_release();
      }
      plVar17 = local_70;
      if (plVar16 == (int64_t *)0x0) {
        plVar16 = (int64_t *)0x0;
        if (local_70 != (int64_t *)0x0) goto LAB_011f51be;
      }
      else {
        uVar22 = (**(code **)(*plVar16 + 0x360))();
        lVar10 = FUN_00e86120(uVar22,1);
        plVar16 = (int64_t *)((int64_t)plVar16 + lVar10);
        if (plVar16 != local_70) {
LAB_011f51be:
          plVar17 = plVar16;
          if (local_70 != (int64_t *)0x0) {
            (**(code **)(*local_70 + 0x10))();
          }
        }
      }
      uVar22 = (**(code **)(*plVar17 + 0x18))();
      pvVar9 = _pthread_getspecific(pVar13);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar23 = (double)FUN_016c25f0(uVar22);
      if ((local_res10 == '\0') || (iVar7 = (**(code **)(*plVar17 + 0x70))(), iVar7 == -1)) {
        pVar21 = in_ECX;
        if (in_ECX == 0xffffffff) {
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar25 = (double)FUN_016c9380(uVar22);
          dVar24 = (double)FUN_00e7c860();
          dVar25 = (dVar25 * dVar24) / param_1;
          pVar21 = 0;
          if (g_024110e8 <= dVar25) {
            uVar14 = *(int *)(*(int64_t *)(*(int64_t *)(local_88 + 0x10) + 8) + 0xc) == 3 ^ 3;
            dVar24 = (double)uVar14;
            iVar7 = 1;
            if (dVar24 < dVar25) {
              iVar7 = 1;
              do {
                uVar14 = uVar14 * 2;
                iVar7 = iVar7 + 1;
                dVar24 = (double)(int)uVar14;
              } while (dVar24 < dVar25);
            }
            pVar21 = iVar7 - (uint)((double)((uint64_t)((double)(uVar14 >> 1) - dVar25) &
                                            g_023908f0) <
                                   (double)((uint64_t)(dVar24 - dVar25) & _UNK_023908f8));
          }
        }
        while (*(int *)(local_88 + 0xc) <= (int)pVar21) {
          FUN_011f7510();
        }
        lVar10 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + (int64_t)(int)pVar21 * 8);
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        if (local_58 == lVar10) {
          bVar2 = bVar3;
          if (lVar10 != 0) {
            bVar2 = true;
          }
          lVar15 = local_58;
          if ((bVar3) && (bVar2 = bVar3, lVar10 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
          }
        }
        else {
          bVar2 = true;
          lVar15 = lVar10;
          if ((bVar3) && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = bVar2;
        local_58 = lVar15;
        dVar24 = (double)FUN_00e7c860();
        dVar25 = (double)FUN_00e7c860();
        dVar25 = (dVar23 - dVar24) / dVar25;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = dVar25;
        auVar26 = roundsd(ZEXT816(0),auVar26,9);
        FUN_011f78b0(dVar25 - auVar26._0_8_);
        FUN_00e7bcc0();
        FUN_00e7b820();
        FUN_00e7bac0();
        FUN_00e7b820();
      }
      else {
        iVar7 = (**(code **)(*plVar17 + 0x70))();
        cVar6 = (**(code **)(*plVar17 + 0x68))();
        bVar2 = bVar3;
        if (cVar6 == '\0') {
          while (*(int *)(local_80 + 0xc) <= iVar7) {
            FUN_011f7510();
          }
          lVar10 = *(int64_t *)(*(int64_t *)(local_80 + 0x10) + (int64_t)iVar7 * 8);
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          if (local_58 == lVar10) {
            if (lVar10 != 0) {
              bVar2 = true;
            }
            param_2 = 0;
            if ((bVar3) && (bVar2 = bVar3, lVar10 != 0)) {
              FUN_00d50b20();
              param_2 = 0;
              bVar2 = true;
            }
          }
          else {
            if ((bVar3) && (local_58 != 0)) {
              FUN_00d50b20();
            }
            param_2 = 0;
            local_58 = lVar10;
            bVar2 = true;
          }
        }
        else {
          while (*(int *)(local_80 + 0xc) <= iVar7) {
            FUN_011f7510();
          }
          lVar10 = *(int64_t *)(*(int64_t *)(local_80 + 0x10) + (int64_t)iVar7 * 8);
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          if (local_58 == lVar10) {
            if (lVar10 != 0) {
              bVar2 = true;
            }
            param_2 = 1;
            if ((bVar3) && (bVar2 = bVar3, lVar10 != 0)) {
              FUN_00d50b20();
              bVar2 = true;
            }
          }
          else {
            bVar2 = true;
            if ((bVar3) && (local_58 != 0)) {
              FUN_00d50b20();
              param_2 = 1;
              local_58 = lVar10;
            }
            else {
              param_2 = 1;
              local_58 = lVar10;
            }
          }
        }
        dVar24 = (double)FUN_00e7c860();
        dVar25 = (double)FUN_00e7c860();
        dVar25 = (dVar23 - dVar24) / dVar25;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = dVar25;
        auVar26 = roundsd(ZEXT816(0),auVar1,9);
        FUN_011f78b0(dVar25 - auVar26._0_8_);
        FUN_00e7bcc0();
        FUN_00e7b820();
        FUN_00e7bac0();
        FUN_00e7b820();
        bVar3 = bVar2;
      }
      (**(code **)(*plVar17 + 0x40))();
      (**(code **)(*plVar17 + 0x58))();
      (**(code **)(*plVar17 + 0x60))();
      lVar20 = lVar20 + 1;
      lVar10 = *arg1;
      lVar15 = (int64_t)*(int *)(lVar10 + 0xc);
      local_70 = plVar17;
    } while (lVar20 < lVar15);
  }
  cVar6 = FUN_011f6270();
  pcVar5 = g_02572370;
  bVar2 = false;
  puVar12 = (void*)0x0;
  local_50 = (int64_t *)0x0;
  uVar14 = 0;
  iVar7 = 0;
  while( true ) {
    if ((cVar6 == '\0' & local_dc) != 1) break;
    lVar10 = *arg1;
    if (1 < *(int *)(lVar10 + 0xc)) {
      lVar15 = 0;
      do {
        plVar16 = *(int64_t **)(*(int64_t *)(lVar10 + 0x10) + lVar15 * 8);
        if ((g_0272fca8 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          g_027902e0 = "MUPulseAssignmentTarget";
          g_027902f0 = 0;
          g_027902e8 = 0;
          ___cxa_guard_release();
        }
        if (plVar16 == (int64_t *)0x0) {
          lVar10 = 0;
        }
        else {
          uVar22 = (**(code **)(*plVar16 + 0x360))();
          lVar10 = FUN_00e86120(uVar22,1);
        }
        plVar16 = (int64_t *)((int64_t)plVar16 + lVar10);
        plVar17 = local_70;
        if ((plVar16 != local_70) && (plVar17 = plVar16, local_70 != (int64_t *)0x0)) {
          (**(code **)(*local_70 + 0x10))();
        }
        local_70 = plVar17;
        plVar16 = *(int64_t **)(*(int64_t *)(*arg1 + 0x10) + 8 + lVar15 * 8);
        if ((g_0272fca8 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          g_027902e0 = "MUPulseAssignmentTarget";
          g_027902f0 = 0;
          g_027902e8 = 0;
          ___cxa_guard_release();
        }
        plVar17 = local_50;
        if (plVar16 == (int64_t *)0x0) {
          plVar16 = (int64_t *)0x0;
          if (local_50 != (int64_t *)0x0) goto LAB_011f59de;
        }
        else {
          uVar22 = (**(code **)(*plVar16 + 0x360))();
          lVar10 = FUN_00e86120(uVar22,1);
          plVar16 = (int64_t *)((int64_t)plVar16 + lVar10);
          if (plVar16 != local_50) {
LAB_011f59de:
            plVar17 = plVar16;
            if (local_50 != (int64_t *)0x0) {
              (**(code **)(*local_50 + 0x10))();
            }
          }
        }
        (**(code **)(*plVar17 + 0x38))();
        uVar11 = (**(code **)(*local_70 + 0x38))();
        if (((extraout_var == 0) || (uVar11 >> 0x20 == 0)) ||
           (cVar6 = FUN_00e7c020(), cVar6 == '\0')) {
          if (puVar12 == (void*)0x0) {
            puVar12 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar12 = &g_02572358;
            (*pcVar5)();
            bVar2 = true;
          }
          FUN_00d216c0();
          (**(code **)(*local_70 + 0x10))();
          FUN_00d21140();
          (**(code **)(*plVar17 + 0x10))();
          FUN_00d21140();
          uVar22 = *this_ptr;
          uVar27 = 0;
          uVar29 = 0;
          puVar28 = puVar12;
          iVar8 = FUN_011f6d20(param_3,param_2 & 1,param_4);
          if (4 < iVar8) {
            iVar8 = 5;
          }
          uVar18 = 0xb - iVar8;
          if (199 < uVar18) {
            uVar18 = 200;
          }
          uVar11 = 0;
          iVar19 = 0;
          do {
            iVar7 = iVar19;
            if ((uVar11 & 1) != 0) break;
            FUN_011f70a0(iVar8 + 1 + iVar19,param_2 & 1,param_3,param_4,uVar22,uVar27,puVar28,uVar29
                         ,*this_ptr,0,puVar12,0);
            uVar11 = FUN_011f6270();
            iVar19 = iVar19 + 1;
            iVar7 = uVar18 + 1;
          } while (uVar18 + 1 != iVar19);
        }
        lVar15 = lVar15 + 1;
        lVar10 = *arg1;
        local_50 = plVar17;
      } while (lVar15 < (int64_t)*(int *)(lVar10 + 0xc) + -1);
    }
    cVar6 = FUN_011f6270();
    if ((199 < uVar14) || (uVar14 = uVar14 + 1, 200 < iVar7)) break;
  }
  if (local_80 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (!bVar4 && local_88 != 0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (puVar12 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return cVar6 != '\0';
}

