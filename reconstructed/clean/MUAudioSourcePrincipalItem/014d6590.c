// Function: FUN_014d6590
// Address: 014d6590
// Size: 9328 bytes
// Class: MUAudioSourcePrincipalItem

void* FUN_014d6590(void* param_1,void*param_2)

{
  void* pVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  void*puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t *******ppppppplVar13;
  int64_t *******ppppppplVar14;
  int64_t ******pppppplVar15;
  void*puVar16;
  void*puVar17;
  void* pVar18;
  int64_t *******ppppppplVar19;
  int iVar20;
  int64_t *******ppppppplVar21;
  int64_t *arg1;
  void*this_ptr;
  char cVar22;
  int64_t lVar23;
  void*puVar24;
  double dVar25;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar26;
  int64_t *******local_128;
  char local_120;
  int64_t *******local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  void* local_f4;
  void*local_f0;
  int64_t *******local_e8;
  char local_e0;
  int64_t ******local_d8;
  char local_d0;
  void*local_b0;
  int64_t ******local_68;
  int64_t *******local_60;
  char local_58 [8];
  int64_t *******local_50;
  int64_t ******local_48;
  void*local_40;
  int64_t *******local_38;
  
  local_f4 = param_1;
  (**(code **)(*arg1 + 0x378))();
  local_50 = local_60;
  if ((((local_58[0] == '\0') && (local_60 != (int64_t *******)0x0)) &&
      (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  pvVar10 = _pthread_getspecific(param_1);
  if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    param_1 = (void*)local_50;
  }
  FUN_0132d790();
  local_48 = local_60[7];
  if (local_58[0] != '\0') {
    FUN_00d50b20();
  }
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_38 = (int64_t *******)FUN_01327990();
  lVar11 = (**(code **)(*arg1 + 0x380))();
  pVar18 = (void*)((double)local_38 * g_0241b6a8);
  lVar23 = (int64_t)(int)pVar18;
  if (lVar11 + lVar23 <= (int64_t)param_2) {
    lVar11 = (**(code **)(*arg1 + 0x380))();
    lVar12 = (**(code **)(*arg1 + 0x388))();
    if ((int64_t)param_2 < (lVar11 - lVar23) + lVar12) {
      FUN_014bc420();
      if (((local_58[0] == '\0') && (local_60 != (int64_t *******)0x0)) &&
         ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != (int64_t *******)0x0)))) {
        FUN_00d50b20();
      }
      lVar11 = arg1[0x23];
      local_40 = param_2;
      if (lVar11 != 0) {
        FUN_00d50b00();
        pvVar10 = _pthread_getspecific(pVar18);
        if ((pvVar10 == (void *)0x0) || (lVar23 = FUN_00e8b990(), lVar23 == 0)) {
          lVar23 = *(int64_t *)(lVar11 + 0x110);
        }
        else {
          lVar11 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar23 + 0x154) & 1) * 8);
          lVar23 = *(int64_t *)(lVar11 + 0x110);
        }
        if (lVar23 != 0) {
          FUN_00d64850();
          *(void*)(lVar11 + 0x110) = 0;
          FUN_00d64910();
        }
        if (arg1[0x23] != 0) {
          FUN_00d64850();
          arg1[0x23] = 0;
          FUN_00d64910();
        }
        FUN_00d50b20();
      }
      puVar5 = local_40;
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar25 = (double)FUN_01327990();
      iVar7 = FUN_00e7d850(dVar25 * g_023944e0);
      local_b0 = (void*)(**(code **)(*arg1 + 0x380))();
      cVar6 = (**(code **)(*arg1 + 0x3c0))();
      ppppppplVar19 = (int64_t *******)0x7fffffffffffffff;
      if (cVar6 == '\0') {
        cVar6 = (**(code **)(*arg1 + 0x3c8))();
        lVar11 = (int64_t)iVar7;
        if (cVar6 == '\0') {
LAB_014d6921:
          bVar2 = false;
        }
        else {
          lVar23 = (**(code **)(*arg1 + 0x3b0))();
          local_b0 = local_b0 + lVar23;
          if ((int64_t)(local_b0 + lVar11) <= (int64_t)puVar5) goto LAB_014d6921;
          ppppppplVar13 = (int64_t *******)(puVar5 + -(int64_t)local_b0);
          ppppppplVar19 = (int64_t *******)-(int64_t)ppppppplVar13;
          if (0 < (int64_t)ppppppplVar13) {
            ppppppplVar19 = ppppppplVar13;
          }
          if ((int64_t)ppppppplVar19 < lVar11) {
            local_b0 = puVar5;
          }
          bVar2 = true;
        }
        cVar6 = (**(code **)(*arg1 + 0x3d0))();
        if (cVar6 == '\0') {
          bVar3 = false;
          puVar24 = (void*)0x7fffffffffffffff;
        }
        else {
          lVar23 = (**(code **)(*arg1 + 0x380))();
          lVar12 = (**(code **)(*arg1 + 0x3b8))();
          puVar24 = (void*)(lVar12 + lVar23);
          ppppppplVar19 = (int64_t *******)(puVar24 + -lVar11);
          if ((int64_t)ppppppplVar19 < (int64_t)puVar5) {
            lVar12 = (int64_t)puVar5 - (int64_t)puVar24;
            lVar23 = -lVar12;
            if (0 < lVar12) {
              lVar23 = lVar12;
            }
            if (lVar23 < lVar11) {
              puVar24 = puVar5;
            }
            ppppppplVar19 = (int64_t *******)CONCAT71((int7)((uint64_t)lVar23 >> 8),1);
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
        }
      }
      else {
        bVar3 = true;
        puVar24 = (void*)0x7fffffffffffffff;
        bVar2 = true;
      }
      ppppppplVar13 = (int64_t *******)FUN_00e8fc40();
      FUN_010fe5f0();
      (*(*ppppppplVar13)[3])();
      local_38 = ppppppplVar13;
      cVar6 = (**(code **)(*arg1 + 1000))();
      if (cVar6 == '\0') {
LAB_014d6c7d:
        local_f0 = puVar24;
        (**(code **)(*arg1 + 0x380))();
        (**(code **)(*arg1 + 0x388))();
        pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          ppppppplVar19 = local_38;
        }
        FUN_014bb250();
        pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          ppppppplVar19 = local_38;
        }
        FUN_014bb2b0();
        (**(code **)(*arg1 + 0x380))();
        FUN_014bb2b0();
        pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          ppppppplVar19 = local_50;
        }
        iVar7 = FUN_01326de0();
        pVar18 = (void*)ppppppplVar19;
        if (iVar7 == 3) {
          FUN_014ce440();
          FUN_014ceed0();
          FUN_014cfcc0();
          pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            ppppppplVar19 = local_38;
          }
          FUN_014ce440();
          pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            ppppppplVar19 = local_38;
          }
          FUN_014ceed0();
          pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            ppppppplVar19 = local_38;
          }
          FUN_014cfcc0();
        }
        else {
          FUN_014bc090();
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013eb920();
          pVar18 = *(void* *)(local_60 + 3);
          pVar1 = pVar18 + 3;
          if (-1 < (int)pVar18) {
            pVar1 = pVar18;
          }
          pVar18 = pVar1;
          if (local_58[0] != '\0') {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (CONCAT71(local_d8._1_7_,(char)local_d8) != 0)) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific(pVar18);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            pVar18 = (void*)local_50;
          }
          (**(code **)(*arg1 + 0x380))();
          iVar7 = FUN_0132dca0();
          pvVar10 = _pthread_getspecific(pVar18);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            pVar18 = (void*)local_50;
          }
          iVar8 = FUN_0132dca0();
          pvVar10 = _pthread_getspecific(pVar18);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            pVar18 = (void*)local_50;
          }
          uVar26 = FUN_0132dc40();
          FUN_014bc090();
          if ((((local_58[0] == '\0') && (local_60 != (int64_t *******)0x0)) &&
              (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013eb920();
          ppppppplVar19 = (int64_t *******)local_60[2];
          if (local_58[0] != '\0') {
            FUN_00d50b20();
          }
          local_68 = (int64_t ******)FUN_00e8fc40();
          FUN_00d4ff40();
          *(void*)(local_68 + 7) = 0;
          *(void*)((int64_t)local_68 + 0x3c) = 0;
          *(void*)(local_68 + 8) = 0;
          pVar18 = 0x25dc9e8;
          *local_68 = (int64_t *****)&g_025dc9e8;
          local_68[9] = (int64_t *****)0x0;
          local_68[10] = (int64_t *****)0x0;
          pcVar4 = g_025dca00;
          (*g_025dca00)();
          local_40 = (void*)0x0;
          local_48 = (int64_t ******)0x0;
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            local_40 = (void*)0x0;
            local_48 = (int64_t ******)0x0;
            lVar11 = FUN_00e8b990();
            if (lVar11 != 0) {
              pVar18 = (void*)local_68;
            }
          }
          local_40 = (void*)0x0;
          local_48 = (int64_t ******)0x0;
          FUN_013eb950(uVar26);
          local_40 = (void*)0x0;
          local_48 = (int64_t ******)0x0;
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            local_40 = (void*)0x0;
            local_48 = (int64_t ******)0x0;
            lVar11 = FUN_00e8b990();
            if (lVar11 != 0) {
              pVar18 = (void*)local_68;
            }
          }
          FUN_00c8e2b0();
          if (((local_58[0] == '\0') && (local_60 != (int64_t *******)0x0)) &&
             ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != (int64_t *******)0x0)))) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          FUN_00c92160();
          FUN_013eb890();
          if (local_60 != (int64_t *******)0x0) {
            FUN_00d50b20();
          }
          if ((int64_t ******)arg1[0x11] != local_68) {
            FUN_00d64850();
            pppppplVar15 = (int64_t ******)arg1[0x11];
            if (pppppplVar15 != local_68) {
              FUN_00d50b00();
              arg1[0x11] = (int64_t)local_68;
              if (pppppplVar15 != (int64_t ******)0x0) {
                FUN_00d50b20();
              }
            }
            FUN_00d64910();
          }
          pppppplVar15 = (int64_t ******)FUN_00e8fc40();
          FUN_00d4ff40();
          *(void*)(pppppplVar15 + 7) = 0;
          *(void*)((int64_t)pppppplVar15 + 0x3c) = 0;
          *(void*)(pppppplVar15 + 8) = 0;
          *pppppplVar15 = (int64_t *****)&g_025dc9e8;
          pppppplVar15[9] = (int64_t *****)0x0;
          pppppplVar15[10] = (int64_t *****)0x0;
          (*pcVar4)();
          if (local_68 == pppppplVar15) {
            FUN_00d50b20();
          }
          else {
            FUN_00d50b20();
            local_68 = pppppplVar15;
          }
          local_40 = (void*)0x0;
          local_48 = (int64_t ******)0x0;
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            local_40 = (void*)0x0;
            local_48 = (int64_t ******)0x0;
            lVar11 = FUN_00e8b990();
            if (lVar11 != 0) {
              pVar18 = (void*)local_68;
            }
          }
          local_40 = (void*)0x0;
          local_48 = (int64_t ******)0x0;
          FUN_013eb950(uVar26);
          local_40 = (void*)0x0;
          local_48 = (int64_t ******)0x0;
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            local_40 = (void*)0x0;
            local_48 = (int64_t ******)0x0;
            FUN_00e8b990();
          }
          iVar7 = (((int)pVar1 >> 2) - (iVar8 - iVar7)) * 4;
          FUN_00c8e2b0();
          if (((local_58[0] == '\0') && (local_60 != (int64_t *******)0x0)) &&
             ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != (int64_t *******)0x0)))) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          FUN_00c92160();
          FUN_013eb890();
          if (local_60 != (int64_t *******)0x0) {
            FUN_00d50b20();
          }
          local_40 = (void*)0x0;
          local_48 = (int64_t ******)0x0;
          pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
          if (pvVar10 == (void *)0x0) {
LAB_014d7636:
            pppppplVar15 = local_38[0x11];
            ppppppplVar13 = local_38;
          }
          else {
            local_40 = (void*)0x0;
            local_48 = (int64_t ******)0x0;
            lVar11 = FUN_00e8b990();
            if (lVar11 == 0) goto LAB_014d7636;
            ppppppplVar13 =
                 (int64_t *******)local_38[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
            pppppplVar15 = ppppppplVar13[0x11];
            ppppppplVar19 = local_38;
          }
          pVar18 = (void*)ppppppplVar19;
          if (pppppplVar15 != local_68) {
            FUN_00d64850();
            pppppplVar15 = ppppppplVar13[0x11];
            if (pppppplVar15 != local_68) {
              FUN_00d50b00();
              ppppppplVar13[0x11] = local_68;
              if (pppppplVar15 != (int64_t ******)0x0) {
                FUN_00d50b20();
              }
            }
            FUN_00d64910();
          }
          FUN_014bc0d0();
          if ((local_58[0] != '\0') && (local_60 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific(pVar18);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            pVar18 = (void*)local_60;
          }
          FUN_013eb920();
          ppppppplVar19 = (int64_t *******)local_60[2];
          if (local_58[0] != '\0') {
            FUN_00d50b20();
          }
          pppppplVar15 = (int64_t ******)FUN_00e8fc40();
          FUN_00d4ff40();
          *(void*)(pppppplVar15 + 7) = 0;
          *(void*)((int64_t)pppppplVar15 + 0x3c) = 0;
          *(void*)(pppppplVar15 + 8) = 0;
          *pppppplVar15 = (int64_t *****)&g_025dc9e8;
          pppppplVar15[9] = (int64_t *****)0x0;
          pppppplVar15[10] = (int64_t *****)0x0;
          (*pcVar4)();
          local_40 = (void*)0x0;
          local_48 = pppppplVar15;
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            local_40 = (void*)0x0;
            lVar11 = FUN_00e8b990();
            if (lVar11 != 0) {
              pVar18 = (void*)local_48;
            }
          }
          local_40 = (void*)0x0;
          FUN_013eb950(uVar26);
          local_40 = (void*)0x0;
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            local_40 = (void*)0x0;
            lVar11 = FUN_00e8b990();
            if (lVar11 != 0) {
              pVar18 = (void*)local_48;
            }
          }
          FUN_00c8e2b0();
          if ((((local_58[0] == '\0') && (local_60 != (int64_t *******)0x0)) &&
              (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          FUN_00c92160();
          FUN_013eb890();
          if (local_60 != (int64_t *******)0x0) {
            FUN_00d50b20();
          }
          if ((int64_t ******)arg1[9] != local_48) {
            FUN_00d64850();
            pppppplVar15 = (int64_t ******)arg1[9];
            if (pppppplVar15 != local_48) {
              FUN_00d50b00();
              arg1[9] = (int64_t)local_48;
              if (pppppplVar15 != (int64_t ******)0x0) {
                FUN_00d50b20();
              }
            }
            FUN_00d64910();
          }
          pppppplVar15 = (int64_t ******)FUN_00e8fc40();
          FUN_00d4ff40();
          *(void*)(pppppplVar15 + 7) = 0;
          *(void*)((int64_t)pppppplVar15 + 0x3c) = 0;
          *(void*)(pppppplVar15 + 8) = 0;
          *pppppplVar15 = (int64_t *****)&g_025dc9e8;
          pppppplVar15[9] = (int64_t *****)0x0;
          pppppplVar15[10] = (int64_t *****)0x0;
          (*pcVar4)();
          if (local_48 == pppppplVar15) {
            FUN_00d50b20();
          }
          else {
            FUN_00d50b20();
            local_48 = pppppplVar15;
          }
          local_40 = (void*)0x0;
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            local_40 = (void*)0x0;
            lVar11 = FUN_00e8b990();
            if (lVar11 != 0) {
              pVar18 = (void*)local_48;
            }
          }
          local_40 = (void*)0x0;
          FUN_013eb950(uVar26);
          local_40 = (void*)0x0;
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            local_40 = (void*)0x0;
            FUN_00e8b990();
          }
          FUN_00c8e2b0(ppppppplVar19,iVar7);
          if (((local_58[0] == '\0') && (local_60 != (int64_t *******)0x0)) &&
             ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != (int64_t *******)0x0)))) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          FUN_00c92160();
          FUN_013eb890();
          if (local_60 != (int64_t *******)0x0) {
            FUN_00d50b20();
          }
          local_40 = (void*)0x0;
          pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
          if (pvVar10 == (void *)0x0) {
LAB_014d7b1e:
            ppppppplVar13 = local_38;
            if (local_38[9] != local_48) {
LAB_014d7b2c:
              FUN_00d64850();
              pppppplVar15 = ppppppplVar13[9];
              if (pppppplVar15 != local_48) {
                FUN_00d50b00();
                ppppppplVar13[9] = local_48;
                if (pppppplVar15 != (int64_t ******)0x0) {
                  FUN_00d50b20();
                }
              }
              FUN_00d64910();
            }
          }
          else {
            local_40 = (void*)0x0;
            lVar11 = FUN_00e8b990();
            if (lVar11 == 0) goto LAB_014d7b1e;
            ppppppplVar19 = local_38;
            ppppppplVar13 =
                 (int64_t *******)local_38[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
            if ((int64_t ******)local_38[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4][9] !=
                local_48) goto LAB_014d7b2c;
          }
          pVar18 = (void*)ppppppplVar19;
          FUN_014bc240();
          if ((local_58[0] != '\0') && (local_60 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific(pVar18);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            pVar18 = (void*)local_60;
          }
          FUN_013eb920();
          ppppppplVar19 = (int64_t *******)local_60[2];
          if (local_58[0] != '\0') {
            FUN_00d50b20();
          }
          puVar16 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *(void*)(puVar16 + 7) = 0;
          *(void*)((int64_t)puVar16 + 0x3c) = 0;
          *(void*)(puVar16 + 8) = 0;
          *puVar16 = &g_025dc9e8;
          puVar16[9] = 0;
          puVar16[10] = 0;
          (*pcVar4)();
          local_40 = &g_02802501;
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013eb950(uVar26);
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00c8e2b0();
          if ((((local_58[0] == '\0') && (local_60 != (int64_t *******)0x0)) &&
              (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          FUN_00c92160();
          FUN_013eb890();
          if (local_60 != (int64_t *******)0x0) {
            FUN_00d50b20();
          }
          FUN_014bc1d0();
          puVar17 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *(void*)(puVar17 + 7) = 0;
          *(void*)((int64_t)puVar17 + 0x3c) = 0;
          *(void*)(puVar17 + 8) = 0;
          *puVar17 = &g_025dc9e8;
          puVar17[9] = 0;
          puVar17[10] = 0;
          (*pcVar4)();
          if (puVar16 == puVar17) {
            FUN_00d50b20();
          }
          else {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013eb950(uVar26);
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00c8e2b0(ppppppplVar19,iVar7);
          if (((local_58[0] == '\0') && (local_60 != (int64_t *******)0x0)) &&
             ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != (int64_t *******)0x0)))) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          FUN_00c92160();
          FUN_013eb890();
          if (local_60 != (int64_t *******)0x0) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            ppppppplVar19 = local_38;
          }
          FUN_014bc1d0();
          pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            ppppppplVar19 = local_50;
          }
          cVar6 = FUN_0132dd90();
          if (cVar6 == '\0') {
            pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
            if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
              ppppppplVar19 = local_50;
            }
            local_40 = (void*)FUN_01327990();
            FUN_014bd640(local_40);
            pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
            if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
              ppppppplVar19 = local_38;
            }
            FUN_014bd640(local_40);
          }
          else {
            pVar18 = 0;
            FUN_014d9720(0,0);
            pvVar10 = _pthread_getspecific(pVar18);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            ppppppplVar19 = (int64_t *******)0x0;
            FUN_014d9720(0,0);
          }
          if (local_60 != (int64_t *******)0x0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          FUN_00d50b20();
          FUN_00d50b20();
        }
        pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          ppppppplVar19 = local_38;
        }
        FUN_014bb7f0();
        FUN_014bb800();
        FUN_014bb800();
        pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          ppppppplVar19 = local_38;
        }
        if (arg1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_014bc2e0();
        if (arg1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_014bc360();
        if (local_60 != (int64_t *******)0x0) {
          pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            ppppppplVar19 = local_38;
          }
          FUN_014bc360();
          pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            ppppppplVar19 = local_60;
          }
          FUN_014bc2e0();
        }
        pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          ppppppplVar19 = local_38;
        }
        FUN_014bc1c0();
        FUN_014bc170();
        pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          ppppppplVar19 = local_38;
        }
        FUN_014bc030();
        pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          ppppppplVar19 = local_50;
        }
        cVar6 = FUN_01334f30();
        pVar18 = (void*)ppppppplVar19;
        if ((cVar6 != '\0') && (*(char *)((int64_t)arg1 + 0xac) == '\0')) {
          if (bVar2) {
            if (arg1[0x1d] != 0x7fffffffffffffff) {
              FUN_00d64850();
              arg1[0x1d] = 0x7fffffffffffffff;
              FUN_00d64910();
            }
            if (arg1[0x1e] != 0x7fffffffffffffff) {
              FUN_00d64850();
              arg1[0x1e] = 0x7fffffffffffffff;
              FUN_00d64910();
            }
          }
          else {
            lVar23 = (**(code **)(*arg1 + 0x380))();
            lVar11 = 0;
            if (-1 < (int64_t)local_b0 - lVar23) {
              lVar11 = (int64_t)local_b0 - lVar23;
            }
            if (arg1[0x1d] != lVar11) {
              FUN_00d64850();
              arg1[0x1d] = lVar11;
              FUN_00d64910();
            }
            local_128 = local_50;
            local_120 = '\0';
            ppppppplVar19 = (int64_t *******)&local_128;
            FUN_014c0100(ppppppplVar19,1);
            if ((local_120 != '\0') && (local_128 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
          }
          if (bVar3) {
            pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
            ppppppplVar13 = local_38;
            if ((pvVar10 != (void *)0x0) &&
               (lVar11 = FUN_00e8b990(), ppppppplVar13 = local_38, lVar11 != 0)) {
              ppppppplVar19 = local_38;
              ppppppplVar13 =
                   (int64_t *******)local_38[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
            }
            if (ppppppplVar13[0x1d] != (int64_t ******)0x7fffffffffffffff) {
              FUN_00d64850();
              ppppppplVar13[0x1d] = (int64_t ******)0x7fffffffffffffff;
              FUN_00d64910();
            }
            if (ppppppplVar13[0x1e] != (int64_t ******)0x7fffffffffffffff) {
              FUN_00d64850();
              ppppppplVar13[0x1e] = (int64_t ******)0x7fffffffffffffff;
              FUN_00d64910();
            }
          }
          else {
            pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_118 = local_50;
            local_110 = '\0';
            ppppppplVar19 = (int64_t *******)&local_118;
            FUN_014c0100(ppppppplVar19,0);
            if ((local_110 != '\0') && (local_118 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
            ppppppplVar13 = local_38;
            if ((pvVar10 != (void *)0x0) &&
               (lVar11 = FUN_00e8b990(), ppppppplVar13 = local_38, lVar11 != 0)) {
              ppppppplVar19 = local_38;
              ppppppplVar13 =
                   (int64_t *******)local_38[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
            }
            lVar11 = (*(*ppppppplVar13)[0x70])();
            pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
            ppppppplVar13 = local_38;
            if ((pvVar10 != (void *)0x0) &&
               (lVar23 = FUN_00e8b990(), ppppppplVar13 = local_38, lVar23 != 0)) {
              ppppppplVar19 = local_38;
              ppppppplVar13 =
                   (int64_t *******)local_38[(uint64_t)(*(uint *)(lVar23 + 0x154) & 1) + 4];
            }
            lVar23 = (*(*ppppppplVar13)[0x70])();
            pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
            ppppppplVar13 = local_38;
            if ((pvVar10 != (void *)0x0) &&
               (lVar12 = FUN_00e8b990(), ppppppplVar13 = local_38, lVar12 != 0)) {
              ppppppplVar19 = local_38;
              ppppppplVar13 =
                   (int64_t *******)local_38[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
            }
            pVar18 = (void*)ppppppplVar19;
            lVar12 = (*(*ppppppplVar13)[0x71])();
            ppppppplVar13 = (int64_t *******)(local_f0 + -lVar11);
            if (lVar12 + lVar23 < (int64_t)ppppppplVar13) {
              ppppppplVar13 = (int64_t *******)0x7fffffffffffffff;
            }
            pvVar10 = _pthread_getspecific(pVar18);
            ppppppplVar21 = local_38;
            if ((pvVar10 != (void *)0x0) &&
               (lVar11 = FUN_00e8b990(), ppppppplVar21 = local_38, lVar11 != 0)) {
              ppppppplVar21 =
                   (int64_t *******)local_38[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
            }
            ppppppplVar19 = ppppppplVar13;
            if ((int64_t *******)ppppppplVar21[0x1e] != ppppppplVar13) {
              FUN_00d64850();
              ppppppplVar21[0x1e] = (int64_t ******)ppppppplVar13;
              FUN_00d64910();
            }
          }
          pVar18 = (void*)ppppppplVar19;
          FUN_014bd410();
          pvVar10 = _pthread_getspecific(pVar18);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            pVar18 = (void*)local_38;
          }
          FUN_014bd410();
        }
        if ((char)local_f4 != '\0') {
          local_100 = '\0';
          local_108 = 0;
          FUN_014dcf30();
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific(pVar18);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            pVar18 = (void*)local_38;
          }
          (**(code **)(*arg1 + 0x378))();
          if (local_58[0] == '\0') {
            if (local_60 != (int64_t *******)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58[0] = '\0';
          }
          local_e0 = '\x01';
          local_e8 = local_60;
          FUN_014dcf30();
          if ((local_e0 != '\0') && (local_e8 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58[0] != '\0') && (local_60 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_014bfad0();
        pvVar10 = _pthread_getspecific(pVar18);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bfad0();
        *this_ptr = local_38;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          ppppppplVar19 = local_50;
        }
        iVar7 = FUN_0134c230();
        FUN_014c34a0(extraout_XMM0_Qa,iVar7);
        if ((local_58[0] != '\0') && (local_60 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        if (local_60 != (int64_t *******)0x0) {
          cVar6 = (**(code **)(*arg1 + 1000))();
          iVar8 = -1;
          local_f0 = puVar24;
          if ((cVar6 != '\0') && (lVar11 = **(int64_t **)(arg1[0x21] + 0x10), lVar11 != 0)) {
            FUN_00d50b00();
            iVar8 = *(int *)(lVar11 + 0xc);
            FUN_00d50b20();
          }
          iVar20 = (int)(g_0241b6a8 / (double)local_48 + g_023942d0);
          if ((iVar20 <= iVar7 - iVar8) && (iVar8 = FUN_014c2f80(), iVar20 + -1 <= iVar8 - iVar7)) {
            ppppppplVar21 = (int64_t *******)0x0;
            ppppppplVar13 = (int64_t *******)0x0;
            do {
              cVar6 = (**(code **)(*arg1 + 1000))();
              cVar22 = (char)ppppppplVar21;
              if (cVar6 == '\0') {
                if (ppppppplVar13 == (int64_t *******)0x0) {
                  ppppppplVar14 = (int64_t *******)0x0;
                }
                else {
                  if (cVar22 != '\0') {
                    FUN_00d50b20();
                  }
                  ppppppplVar21 = (int64_t *******)((int64_t)&MACH_HEADER.magic + 1);
                  ppppppplVar14 = (int64_t *******)0x0;
                }
              }
              else {
                FUN_00d23340();
                local_d8._0_1_ = local_58[0];
                ppppppplVar19 = &local_d8;
                ppppppplVar14 = (int64_t *******)local_58;
                if (local_58[0] == '\0') {
                  ppppppplVar14 = ppppppplVar19;
                }
                *(void*)ppppppplVar14 = 0;
                if ((local_58[0] != '\0') && (local_60 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
                if (((char)local_d8 == '\0') && (local_60 != (int64_t *******)0x0)) {
                  FUN_00d50b00();
                }
                if (local_60 == ppppppplVar13) {
                  uVar9 = (uint)ppppppplVar21;
                  if (local_60 != (int64_t *******)0x0) {
                    uVar9 = 1;
                  }
                  ppppppplVar19 = ppppppplVar21;
                  ppppppplVar14 = ppppppplVar13;
                  if ((cVar22 == '\0') ||
                     (uVar9 = (uint)ppppppplVar21, local_60 == (int64_t *******)0x0)) {
                    ppppppplVar21 = (int64_t *******)(uint64_t)uVar9;
                  }
                  else {
                    FUN_00d50b20();
                  }
                }
                else {
                  ppppppplVar21 = (int64_t *******)((int64_t)&MACH_HEADER.magic + 1);
                  ppppppplVar14 = local_60;
                  if ((cVar22 != '\0') && (ppppppplVar13 != (int64_t *******)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              pvVar10 = _pthread_getspecific((void*)ppppppplVar19);
              if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                ppppppplVar19 = local_38;
              }
              FUN_014c2e20();
              FUN_014c2cf0();
              puVar24 = local_f0;
              ppppppplVar13 = ppppppplVar14;
            } while (*(int *)((int64_t)ppppppplVar14 + 0xc) != iVar7);
            if ((char)ppppppplVar21 != '\0') {
              FUN_00d50b20();
            }
            goto LAB_014d6c7d;
          }
        }
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        FUN_00d50b20();
      }
      if (local_60 != (int64_t *******)0x0) {
        FUN_00d50b20();
      }
      goto LAB_014d6796;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_014d6796:
  if (local_50 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

