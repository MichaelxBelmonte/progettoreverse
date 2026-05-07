// Function: FUN_01a26560
// Address: 01a26560
// Size: 9578 bytes
// Class: MUScalePitchSystem
// String references:
//   "MUScalePitchSystem"
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_01a26560(float param_1,int64_t *param_2,int64_t *param_3,uint param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t ***ppplVar3;
  int64_t ***ppplVar4;
  int64_t ***ppplVar5;
  int64_t ***ppplVar6;
  int64_t ***ppplVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  int64_t *plVar13;
  int64_t lVar14;
  float *pfVar15;
  void* pVar16;
  void* pVar17;
  void* pVar18;
  uint64_t in_RCX;
  int64_t *plVar19;
  int64_t ****pppplVar20;
  int64_t ****pppplVar21;
  int64_t *plVar22;
  byte bVar23;
  int64_t *this_ptr;
  size_t sVar24;
  bool bVar25;
  uint32_t uVar26;
  float fVar27;
  float fVar28;
  uint uVar29;
  uint32_t uVar30;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t ***local_140;
  char local_138;
  int64_t ***local_130;
  char local_128;
  int64_t *local_120;
  float local_118;
  float local_114;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  uint64_t local_d8;
  float local_cc;
  int64_t ***local_c8;
  int64_t ***local_c0;
  float local_88;
  int64_t ***local_78;
  char local_70 [8];
  int64_t ***local_68;
  uint64_t local_60;
  int local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  char local_39;
  int64_t ***local_38;
  
  sVar24 = (size_t)param_3;
  local_118 = param_1;
  local_d8 = in_RCX;
  uVar26 = FUN_01a295a0();
  ppplVar3 = local_78;
  pppplVar20 = (int64_t ****)*param_2;
  local_e0 = param_2;
  if (pppplVar20 == (int64_t ****)local_78) {
    if (((char)param_2[1] != '\0') || ((int64_t ****)local_78 == (int64_t ****)0x0)) {
      if ((local_70[0] != '\0') && ((int64_t ****)local_78 != (int64_t ****)0x0)) {
        uVar26 = FUN_00d50b20();
      }
      goto LAB_01a26662;
    }
    local_c0 = (int64_t ***)CONCAT44(local_c0._4_4_,param_4);
    if (local_70[0] == '\0') {
      uVar26 = FUN_00d50b00();
    }
  }
  else {
    local_c0 = (int64_t ***)CONCAT44(local_c0._4_4_,param_4);
    lVar2 = param_2[1];
    if (local_70[0] == '\0') {
      if ((int64_t ****)local_78 != (int64_t ****)0x0) {
        uVar26 = FUN_00d50b00();
      }
      *local_e0 = (int64_t)ppplVar3;
      if (((char)lVar2 != '\0') && (pppplVar20 != (int64_t ****)0x0)) {
        uVar26 = FUN_00d50b20();
      }
    }
    else {
      *param_2 = (int64_t)local_78;
      if (((char)lVar2 != '\0') && (pppplVar20 != (int64_t ****)0x0)) {
        uVar26 = FUN_00d50b20();
      }
    }
  }
  *(void*)(param_2 + 1) = 1;
  param_4 = (uint)local_c0;
LAB_01a26662:
  plVar22 = local_e0;
  FUN_01a296f0(uVar26,param_4 & 0xff);
  local_120 = (int64_t *)(uint64_t)*(uint *)(*plVar22 + 0xc);
  FUN_00c8e690();
  ppplVar3 = local_78;
  if ((((local_70[0] == '\0') && ((int64_t ****)local_78 != (int64_t ****)0x0)) &&
      (FUN_00d50b00(), local_70[0] != '\0')) && ((int64_t ****)local_78 != (int64_t ****)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(ppplVar3 + 3)) {
    _memset_pattern16(ppplVar3,(void *)((uint64_t)((*(uint *)(ppplVar3 + 3) >> 2) - 1) * 4 + 4),
                      sVar24);
  }
  FUN_00c8e690();
  ppplVar4 = local_78;
  if (((local_70[0] == '\0') && ((int64_t ****)local_78 != (int64_t ****)0x0)) &&
     ((FUN_00d50b00(), local_70[0] != '\0' && ((int64_t ****)local_78 != (int64_t ****)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_c0 = ppplVar4;
  if (3 < (int)*(uint *)(ppplVar4 + 3)) {
    _memset_pattern16(ppplVar4,(void *)((uint64_t)((*(uint *)(ppplVar4 + 3) >> 2) - 1) * 4 + 4),
                      sVar24);
  }
  FUN_00c8e690();
  ppplVar4 = local_78;
  if (((local_70[0] == '\0') && ((int64_t ****)local_78 != (int64_t ****)0x0)) &&
     ((FUN_00d50b00(), local_70[0] != '\0' && ((int64_t ****)local_78 != (int64_t ****)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_c8 = ppplVar4;
  if (3 < (int)*(uint *)(ppplVar4 + 3)) {
    _memset_pattern16(ppplVar4,(void *)((uint64_t)((*(uint *)(ppplVar4 + 3) >> 2) - 1) * 4 + 4),
                      sVar24);
  }
  if (0 < (int)local_120) {
    plVar22 = (int64_t *)0x0;
    do {
      lVar2 = *(int64_t *)(*(int64_t *)(*local_e0 + 0x10) + (int64_t)plVar22 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      plVar1 = (int64_t *)*this_ptr;
      FUN_0039e8b0();
      local_108 = 0;
      lVar14 = CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        if (lVar14 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_108 = '\x01';
      local_190 = *param_3;
      local_188 = '\0';
      plVar19 = &local_190;
      local_110 = lVar14;
      (**(code **)(*plVar1 + 0xe50))(plVar19,&local_110);
      ppplVar4 = local_78;
      if (local_70[0] == '\0') {
        if ((((int64_t ****)local_78 != (int64_t ****)0x0) &&
            (FUN_00d50b00(), local_70[0] != '\0')) &&
           ((int64_t ****)local_78 != (int64_t ****)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70[0] = '\0';
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      pvVar12 = _pthread_getspecific((void*)plVar19);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar8 = FUN_0125a2d0();
      bVar23 = 0;
      if (cVar8 != '\0') {
        pvVar12 = _pthread_getspecific((void*)plVar19);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar8 = FUN_01263cf0();
        if (cVar8 == '\0') {
          pvVar12 = _pthread_getspecific((void*)plVar19);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar27 = (float)FUN_0125a2c0();
          fVar27 = fVar27 + local_118;
          plVar1 = (int64_t *)*this_ptr;
          if (((plVar1 != (int64_t *)0x0) && ((int64_t ****)ppplVar4 != (int64_t ****)0x0)) &&
             (*(int *)((int64_t)ppplVar4 + 0xc) != 0)) {
            FUN_00d23310();
            ppplVar5 = local_78;
            local_50 = local_70[0];
            plVar19 = (int64_t *)&local_50;
            plVar13 = (int64_t *)local_70;
            if (local_70[0] == '\0') {
              plVar13 = plVar19;
            }
            *(void*)plVar13 = 0;
            if ((local_70[0] != '\0') && ((int64_t ****)local_78 != (int64_t ****)0x0)) {
              FUN_00d50b20();
            }
            local_128 = 0;
            if ((local_50 == '\0') && ((int64_t ****)ppplVar5 != (int64_t ****)0x0)) {
              FUN_00d50b00();
            }
            local_130 = ppplVar5;
            local_128 = '\x01';
            uVar26 = (**(code **)((int64_t)&dylib_command_000011b8.cmd + *plVar1))();
            local_38 = (int64_t ***)CONCAT44(local_38._4_4_,uVar26);
            if ((local_128 != '\0') && ((int64_t ****)local_130 != (int64_t ****)0x0)) {
              FUN_00d50b20();
            }
            if (!NAN(local_38._0_4_)) {
              *(float *)((int64_t)local_c0[2] + (int64_t)plVar22 * 4) = fVar27;
              plVar19 = plVar22;
            }
          }
          pVar16 = (void*)plVar19;
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          ppplVar5 = local_78;
          if ((((local_70[0] == '\0') && ((int64_t ****)local_78 != (int64_t ****)0x0)) &&
              (FUN_00d50b00(), local_70[0] != '\0')) &&
             ((int64_t ****)local_78 != (int64_t ****)0x0)) {
            FUN_00d50b20();
          }
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar26 = FUN_0152ebe0();
          ppplVar6 = local_78;
          if (((local_70[0] == '\0') && ((int64_t ****)local_78 != (int64_t ****)0x0)) &&
             ((uVar26 = FUN_00d50b00(), local_70[0] != '\0' &&
              ((int64_t ****)local_78 != (int64_t ****)0x0)))) {
            uVar26 = FUN_00d50b20();
          }
          local_178 = '\0';
          local_180 = lVar2;
          FUN_019d4fe0(uVar26,&local_180);
          local_70[0] = 0;
          pppplVar20 = (int64_t ****)CONCAT71(uStack_4f,local_50);
          if (local_48 == '\0') {
            if (pppplVar20 == (int64_t ****)0x0) {
              local_78 = (int64_t ***)0x0;
              local_70[0] = '\x01';
            }
            else {
              FUN_00d50b00();
              local_78 = (int64_t ***)pppplVar20;
              local_70[0] = '\x01';
              if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_78 = (int64_t ***)pppplVar20;
            local_70[0] = '\x01';
            local_48 = '\0';
          }
          if ((local_178 != '\0') && (local_180 != 0)) {
            FUN_00d50b20();
          }
          ppplVar7 = local_78;
          if ((g_027c0160 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
            g_0270ab28 = FUN_0015ea50();
            g_0270ab10 = "MUScalePitchSystem";
            g_0270ab18 = 0x78;
            g_0270ab20 = FUN_0015ecf0;
            g_0270ab30 = 0;
            ram_000000000270ab38 = 0;
            g_0270ab40 = 0;
            ram_000000000270ab48 = 0;
            g_0270ab50 = 0;
            ram_000000000270ab58 = 0;
            g_0270ab60 = 0;
            ram_000000000270ab68 = 0;
            g_0270ab70 = 0;
            ram_000000000270ab78 = 0;
            g_0270ab80 = 0;
            ram_000000000270ab88 = 0;
            g_0270ab90 = 0;
            ram_000000000270ab98 = 0;
            g_0270aba0 = 0;
            ram_000000000270aba8 = 0;
            g_0270abb0 = 0;
            ram_000000000270abb8 = 0;
            g_0270abc0 = 0;
            ram_000000000270abc8 = 0;
            g_0270abd0 = 0;
            ___cxa_guard_release();
          }
          pppplVar20 = (int64_t ****)&g_02802688;
          if ((int64_t ****)ppplVar7 != (int64_t ****)0x0) {
            (*(*ppplVar7)[0x6c])();
            cVar8 = FUN_00e85ea0();
            pppplVar20 = &local_78;
            if (cVar8 == '\0') {
              pppplVar20 = (int64_t ****)&g_02802688;
            }
          }
          pppplVar21 = (int64_t ****)*pppplVar20;
          cVar8 = *(char *)(pppplVar20 + 1);
          bVar25 = pppplVar21 != (int64_t ****)0x0;
          if ((cVar8 != '\0') && (pppplVar21 != (int64_t ****)0x0)) {
            FUN_00d50b00();
          }
          local_38 = (int64_t ***)pppplVar21;
          pvVar12 = _pthread_getspecific((void*)pppplVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          pvVar12 = _pthread_getspecific((void*)pppplVar20);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar10 = FUN_01326de0();
          if (iVar10 != 2) {
            pvVar12 = _pthread_getspecific((void*)pppplVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            pvVar12 = _pthread_getspecific((void*)pppplVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar10 = FUN_01326de0();
            bVar25 = (int64_t ****)local_38 != (int64_t ****)0x0;
            if ((local_168 != '\0') && (local_170 != 0)) {
              FUN_00d50b20();
            }
            bVar25 = iVar10 == 4 && bVar25;
          }
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
          }
          if (bVar25) {
            if ((int64_t ****)local_38 != (int64_t ****)0x0) {
              if (cVar8 == '\0') {
                cVar8 = '\0';
                local_38 = (int64_t ***)0x0;
              }
              else {
                cVar8 = '\0';
                local_38 = (int64_t ***)0x0;
                FUN_00d50b20();
              }
            }
            FUN_019ac590();
            cVar9 = local_70[0];
            ppplVar7 = local_78;
            pppplVar21 = (int64_t ****)CONCAT71(uStack_4f,local_50);
            if ((int64_t ****)local_78 == pppplVar21) {
              if ((local_70[0] != '\0') || (pppplVar21 == (int64_t ****)0x0)) goto LAB_01a26ff2;
              pppplVar21 = (int64_t ****)local_78;
              if (local_48 == '\0') {
                FUN_00d50b00();
                goto LAB_01a26fee;
              }
            }
            else {
              if (local_48 == '\0') {
                if (pppplVar21 != (int64_t ****)0x0) {
                  FUN_00d50b00();
                }
                local_78 = (int64_t ***)pppplVar21;
                if ((cVar9 != '\0') && ((int64_t ****)ppplVar7 != (int64_t ****)0x0)) {
                  FUN_00d50b20();
                }
LAB_01a26fee:
                local_70[0] = '\x01';
LAB_01a26ff2:
                if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_01a27010;
              }
              if ((local_70[0] != '\0') && ((int64_t ****)local_78 != (int64_t ****)0x0)) {
                local_78 = (int64_t ***)pppplVar21;
                FUN_00d50b20();
                pppplVar21 = (int64_t ****)local_78;
              }
            }
            local_78 = (int64_t ***)pppplVar21;
            local_70[0] = '\x01';
          }
LAB_01a27010:
          pVar16 = (void*)plVar22;
          if ((int64_t ****)local_78 == (int64_t ****)0x0) {
            pvVar12 = _pthread_getspecific((void*)pppplVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01507e40();
            plVar1 = (int64_t *)CONCAT71(uStack_4f,local_50);
            if ((((local_48 == '\0') && (plVar1 != (int64_t *)0x0)) &&
                (FUN_00d50b00(), local_48 != '\0')) && (CONCAT71(uStack_4f,local_50) != 0)) {
              FUN_00d50b20();
            }
            *(float *)((int64_t)ppplVar3[2] + (int64_t)plVar22 * 4) = fVar27;
            pvVar12 = _pthread_getspecific(pVar16);
            plVar19 = plVar1;
            if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              plVar19 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
            }
            fVar28 = (float)(**(code **)(*plVar19 + 0x390))();
            bVar23 = 1;
            if (fVar28 <= fVar27) {
              fVar27 = *(float *)((int64_t)ppplVar3[2] + (int64_t)plVar22 * 4);
              pvVar12 = _pthread_getspecific(pVar16);
              plVar19 = plVar1;
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                plVar19 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
              }
              fVar28 = (float)(**(code **)(*plVar19 + 0x398))();
              bVar23 = (fVar27 <= fVar28) * '\x03' + 1;
            }
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
LAB_01a282ab:
            if ((cVar8 != '\0') && ((int64_t ****)local_38 != (int64_t ****)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            pvVar12 = _pthread_getspecific((void*)pppplVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar26 = FUN_0125dfc0(fVar27);
            pppplVar21 = (int64_t ****)local_78;
            if ((int64_t ****)local_38 != (int64_t ****)0x0) {
              if ((void*)local_d8 == 0) {
                *(float *)((int64_t)ppplVar3[2] + (int64_t)plVar22 * 4) = fVar27;
                pvVar12 = _pthread_getspecific(pVar16);
                ppplVar7 = local_78;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar14 = FUN_00e8b990(), pppplVar21 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                  pppplVar21 = (int64_t ****)
                               ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                }
                fVar28 = (float)(*(*pppplVar21)[0x72])();
                pppplVar20 = (int64_t ****)local_78;
                bVar23 = 1;
                if (fVar27 < fVar28) goto LAB_01a282ab;
                local_88 = *(float *)((int64_t)ppplVar3[2] + (int64_t)plVar22 * 4);
                pvVar12 = _pthread_getspecific(pVar16);
                ppplVar7 = local_78;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                  pppplVar20 = (int64_t ****)
                               ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                }
                fVar27 = (float)(*(*pppplVar20)[0x73])();
LAB_01a28276:
                bVar23 = 1;
                if (fVar27 < local_88) goto LAB_01a282ab;
              }
              else {
                pvVar12 = _pthread_getspecific((void*)pppplVar20);
                pppplVar21 = (int64_t ****)local_38;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar14 = FUN_00e8b990(), pppplVar21 = (int64_t ****)local_38, lVar14 != 0)) {
                  pppplVar20 = (int64_t ****)local_38;
                  pppplVar21 = (int64_t ****)
                               local_38[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                }
                pvVar12 = _pthread_getspecific((void*)pppplVar20);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01507f00();
                pppplVar21 = (int64_t ****)*pppplVar21;
                fVar27 = (float)(*pppplVar21[0x74])();
                fVar27 = fVar27 + local_118;
                if ((void*)local_d8 == 1) {
                  pvVar12 = _pthread_getspecific((void*)pppplVar21);
                  pppplVar20 = (int64_t ****)local_38;
                  if ((pvVar12 != (void *)0x0) &&
                     (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)local_38, lVar14 != 0)) {
                    pppplVar21 = (int64_t ****)local_38;
                    pppplVar20 = (int64_t ****)
                                 local_38[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                  }
                  iVar10 = (*(*pppplVar20)[0x75])(fVar27);
                }
                else {
                  pvVar12 = _pthread_getspecific((void*)pppplVar21);
                  pppplVar20 = (int64_t ****)local_38;
                  if ((pvVar12 != (void *)0x0) &&
                     (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)local_38, lVar14 != 0)) {
                    pppplVar21 = (int64_t ****)local_38;
                    pppplVar20 = (int64_t ****)
                                 local_38[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                  }
                  iVar10 = (*(*pppplVar20)[0x76])(fVar27);
                }
                pvVar12 = _pthread_getspecific((void*)pppplVar21);
                if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  pppplVar21 = (int64_t ****)local_38;
                }
                FUN_0173b790();
                pvVar12 = _pthread_getspecific((void*)pppplVar21);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar12 = _pthread_getspecific((void*)pppplVar21);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar26 = FUN_0125a2c0();
                pvVar12 = _pthread_getspecific((void*)pppplVar21);
                if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  pppplVar21 = (int64_t ****)ppplVar6;
                }
                FUN_01507f00();
                uVar29 = FUN_01775300(uVar26);
                if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
                  FUN_00d50b20();
                }
                pVar18 = (void*)pppplVar21;
                if (((void*)local_d8 == 1) ||
                   ((float)(uVar29 & g_02390140) < g_0239425c)) {
LAB_01a27af4:
                  pvVar12 = _pthread_getspecific(pVar18);
                  if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                    pVar18 = (void*)local_38;
                  }
                  FUN_0173b790();
                  pvVar12 = _pthread_getspecific(pVar18);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_88 = (float)FUN_01775370(uVar29);
                  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  pvVar12 = _pthread_getspecific(pVar18);
                  if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                    pppplVar21 = (int64_t ****)local_38;
                  }
                  FUN_0173ba80();
                  local_f8 = 0;
                  lVar14 = CONCAT71(uStack_4f,local_50);
                  if (local_48 == '\0') {
                    if (lVar14 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_48 = '\0';
                  }
                  local_f8 = '\x01';
                  local_100 = lVar14;
                  cVar9 = FUN_01750eb0();
                  if ((local_f8 != '\0') && (local_100 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
                    FUN_00d50b20();
                  }
                  pVar18 = (void*)pppplVar21;
                  if (cVar9 != '\0') goto LAB_01a27af4;
                  pvVar12 = _pthread_getspecific(pVar18);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_88 = (float)FUN_0125a2c0();
                  pvVar12 = _pthread_getspecific((void*)pppplVar21);
                  pppplVar20 = (int64_t ****)local_38;
                  if ((pvVar12 != (void *)0x0) &&
                     (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)local_38, lVar14 != 0)) {
                    pppplVar21 = (int64_t ****)local_38;
                    pppplVar20 = (int64_t ****)
                                 local_38[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                  }
                  iVar11 = (*(*pppplVar20)[0x76])(local_88);
                  pVar18 = (void*)pppplVar21;
                  if (iVar10 != iVar11) {
                    pvVar12 = _pthread_getspecific(pVar18);
                    pppplVar20 = (int64_t ****)local_38;
                    if ((pvVar12 != (void *)0x0) &&
                       (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)local_38, lVar14 != 0))
                    {
                      pppplVar21 = (int64_t ****)local_38;
                      pppplVar20 = (int64_t ****)
                                   local_38[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                    }
                    local_cc = (float)(*(*pppplVar20)[0x74])();
                    pvVar12 = _pthread_getspecific((void*)pppplVar21);
                    pppplVar20 = (int64_t ****)local_38;
                    if ((pvVar12 != (void *)0x0) &&
                       (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)local_38, lVar14 != 0))
                    {
                      pppplVar21 = (int64_t ****)local_38;
                      pppplVar20 = (int64_t ****)
                                   local_38[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                    }
                    local_114 = (float)(*(*pppplVar20)[0x74])();
                    local_88 = local_88 - local_cc;
                    iVar10 = (uint)(0.0 <= local_88) * 2 + -1;
                    iVar11 = 1000;
                    local_cc = (float)iVar10;
                    local_39 = cVar8;
                    do {
                      pvVar12 = _pthread_getspecific((void*)pppplVar21);
                      if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                        pppplVar21 = (int64_t ****)local_38;
                      }
                      FUN_01740240();
                      lVar14 = CONCAT71(uStack_4f,local_50);
                      if ((local_48 != '\0') && (lVar14 != 0)) {
                        FUN_00d50b20();
                      }
                      pVar18 = (void*)pppplVar21;
                      cVar8 = local_39;
                      if (lVar14 == 0) break;
                      pvVar12 = _pthread_getspecific(pVar18);
                      pppplVar20 = (int64_t ****)local_38;
                      if ((pvVar12 != (void *)0x0) &&
                         (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)local_38, lVar14 != 0
                         )) {
                        pppplVar21 = (int64_t ****)local_38;
                        pppplVar20 = (int64_t ****)
                                     local_38[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                      }
                      cVar9 = (*(*pppplVar20)[0x87])();
                      cVar8 = local_39;
                      pVar18 = (void*)pppplVar21;
                      if (cVar9 != '\0') {
                        if (iVar10 != 0) {
                          pvVar12 = _pthread_getspecific(pVar18);
                          pppplVar20 = (int64_t ****)local_38;
                          if ((pvVar12 != (void *)0x0) &&
                             (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)local_38,
                             lVar14 != 0)) {
                            pppplVar21 = (int64_t ****)local_38;
                            pppplVar20 = (int64_t ****)
                                         local_38[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                          }
                          pVar18 = (void*)pppplVar21;
                          fVar27 = (float)(*(*pppplVar20)[0x74])();
                          fVar27 = (fVar27 - local_114) * g_0241bdc0;
                          uVar29 = -(uint)((float)((uint)fVar27 & g_02390140) <
                                          (float)((uint)local_88 & g_02390140));
                          local_88 = (float)(~uVar29 & (uint)local_88 | (uint)fVar27 & uVar29);
                        }
                        break;
                      }
                      iVar10 = iVar10 + (int)local_cc;
                      iVar11 = iVar11 + -1;
                    } while (iVar11 != 0);
                    local_88 = local_88 + local_114;
                  }
                }
                pvVar12 = _pthread_getspecific(pVar18);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar27 = (float)FUN_0125a2c0();
                pppplVar20 = (int64_t ****)local_78;
                if (g_02394254 < (float)((uint)(local_88 - fVar27) & g_02390140)) {
                  *(float *)((int64_t)ppplVar3[2] + (int64_t)plVar22 * 4) = local_88;
                  pvVar12 = _pthread_getspecific(pVar16);
                  ppplVar7 = local_78;
                  if ((pvVar12 != (void *)0x0) &&
                     (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                    pppplVar20 = (int64_t ****)
                                 ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                  }
                  fVar27 = (float)(*(*pppplVar20)[0x72])();
                  pppplVar20 = (int64_t ****)local_78;
                  bVar23 = 1;
                  if (local_88 < fVar27) goto LAB_01a282ab;
                  local_88 = *(float *)((int64_t)ppplVar3[2] + (int64_t)plVar22 * 4);
                  pvVar12 = _pthread_getspecific(pVar16);
                  ppplVar7 = local_78;
                  if ((pvVar12 != (void *)0x0) &&
                     (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                    pppplVar20 = (int64_t ****)
                                 ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                  }
                  fVar27 = (float)(*(*pppplVar20)[0x73])();
                  goto LAB_01a28276;
                }
                *(void*)((int64_t)ppplVar3[2] + (int64_t)plVar22 * 4) = 0x7f7fffff;
              }
              *(void*)((int64_t)local_c8[2] + (int64_t)plVar22 * 4) = 0;
              bVar23 = 0;
              goto LAB_01a282ab;
            }
            bVar23 = 0;
            pVar18 = (void*)ppplVar5;
            if ((void*)local_d8 - 2 < 2) {
              pVar17 = (void*)local_d8;
              pvVar12 = _pthread_getspecific((void*)local_d8);
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pVar17 = pVar18;
              }
              uVar30 = FUN_0152d500();
              pppplVar20 = (int64_t ****)local_78;
              local_38 = (int64_t ***)CONCAT44(local_38._4_4_,uVar30);
              pvVar12 = _pthread_getspecific(pVar17);
              ppplVar7 = local_78;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                pppplVar20 = (int64_t ****)ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4]
                ;
              }
              (*(*pppplVar20)[0x75])(uVar26);
              pppplVar20 = (int64_t ****)local_78;
              pvVar12 = _pthread_getspecific(pVar17);
              ppplVar7 = local_78;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                pppplVar20 = (int64_t ****)ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4]
                ;
              }
              (*(*pppplVar20)[0x74])();
              pppplVar20 = (int64_t ****)local_78;
              pvVar12 = _pthread_getspecific(pVar17);
              ppplVar7 = local_78;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                pppplVar20 = (int64_t ****)ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4]
                ;
              }
              (*(*pppplVar20)[0x76])(uVar26);
              pppplVar20 = (int64_t ****)local_78;
              pvVar12 = _pthread_getspecific(pVar17);
              ppplVar7 = local_78;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                pppplVar20 = (int64_t ****)ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4]
                ;
              }
              fVar27 = (float)(*(*pppplVar20)[0x74])();
              pppplVar20 = (int64_t ****)local_78;
              if (local_38._0_4_ <= g_0239424c) {
                pvVar12 = _pthread_getspecific(pVar17);
                ppplVar7 = local_78;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                  pppplVar20 = (int64_t ****)
                               ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                }
                fVar28 = (float)(*(*pppplVar20)[0x74])();
              }
              else {
                pvVar12 = _pthread_getspecific(pVar17);
                ppplVar7 = local_78;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                  pppplVar20 = (int64_t ****)
                               ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                }
                fVar28 = (float)(*(*pppplVar20)[0x74])();
              }
              local_38 = (int64_t ***)
                         CONCAT44(local_38._4_4_,
                                  local_38._0_4_ * (float)((uint)(fVar28 - fVar27) & g_02390140)
                                  * g_0239011c);
              pvVar12 = _pthread_getspecific(pVar17);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar28 = (float)FUN_0125a2c0();
              pppplVar20 = (int64_t ****)local_78;
              fVar27 = fVar27 + local_38._0_4_;
              pfVar15 = (float *)((int64_t)plVar22 * 4 + (int64_t)ppplVar3[2]);
              if (g_02394254 < (float)((uint)(fVar27 - fVar28) & g_02390140)) {
                *pfVar15 = fVar27;
                pvVar12 = _pthread_getspecific((void*)ppplVar3);
                ppplVar7 = local_78;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                  pppplVar20 = (int64_t ****)
                               ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                }
                fVar28 = (float)(*(*pppplVar20)[0x72])();
                pppplVar20 = (int64_t ****)local_78;
                bVar23 = 1;
                if (fVar28 <= fVar27) {
                  local_38 = (int64_t ***)
                             CONCAT44(local_38._4_4_,
                                      *(void*)((int64_t)ppplVar3[2] + (int64_t)plVar22 * 4)
                                     );
                  pvVar12 = _pthread_getspecific(pVar16);
                  ppplVar7 = local_78;
                  if ((pvVar12 != (void *)0x0) &&
                     (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                    pppplVar20 = (int64_t ****)
                                 ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                  }
                  fVar27 = (float)(*(*pppplVar20)[0x73])();
                  goto LAB_01a27f03;
                }
              }
              else {
LAB_01a27f12:
                *pfVar15 = 3.4028235e+38;
LAB_01a27f18:
                *(void*)((int64_t)local_c8[2] + (int64_t)plVar22 * 4) = 0;
                bVar23 = 0;
              }
            }
            else if ((void*)local_d8 == 1) {
              pVar17 = (void*)local_d8;
              pvVar12 = _pthread_getspecific(1);
              if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                pVar17 = pVar18;
              }
              uVar30 = FUN_0152d500();
              pppplVar20 = (int64_t ****)local_78;
              local_38 = (int64_t ***)CONCAT44(local_38._4_4_,uVar30);
              pvVar12 = _pthread_getspecific(pVar17);
              ppplVar7 = local_78;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                pppplVar20 = (int64_t ****)ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4]
                ;
              }
              (*(*pppplVar20)[0x75])(uVar26);
              pppplVar20 = (int64_t ****)local_78;
              pvVar12 = _pthread_getspecific(pVar17);
              ppplVar7 = local_78;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                pppplVar20 = (int64_t ****)ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4]
                ;
              }
              fVar27 = (float)(*(*pppplVar20)[0x74])();
              pppplVar20 = (int64_t ****)local_78;
              if (local_38._0_4_ <= g_0239424c) {
                pvVar12 = _pthread_getspecific(pVar17);
                ppplVar7 = local_78;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                  pppplVar20 = (int64_t ****)
                               ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                }
                fVar28 = (float)(*(*pppplVar20)[0x74])();
              }
              else {
                pvVar12 = _pthread_getspecific(pVar17);
                ppplVar7 = local_78;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                  pppplVar20 = (int64_t ****)
                               ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                }
                fVar28 = (float)(*(*pppplVar20)[0x74])();
              }
              local_38 = (int64_t ***)
                         CONCAT44(local_38._4_4_,
                                  local_38._0_4_ * (float)((uint)(fVar28 - fVar27) & g_02390140)
                                  * g_0239011c);
              pvVar12 = _pthread_getspecific(pVar17);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar28 = (float)FUN_0125a2c0();
              pppplVar20 = (int64_t ****)local_78;
              fVar27 = fVar27 + local_38._0_4_;
              pfVar15 = (float *)((int64_t)plVar22 * 4 + (int64_t)ppplVar3[2]);
              if ((float)((uint)(fVar27 - fVar28) & g_02390140) <= g_02394254)
              goto LAB_01a27f12;
              *pfVar15 = fVar27;
              pvVar12 = _pthread_getspecific((void*)ppplVar3);
              ppplVar7 = local_78;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                pppplVar20 = (int64_t ****)ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4]
                ;
              }
              fVar28 = (float)(*(*pppplVar20)[0x72])();
              pppplVar20 = (int64_t ****)local_78;
              bVar23 = 1;
              if (fVar28 <= fVar27) {
                local_38 = (int64_t ***)
                           CONCAT44(local_38._4_4_,
                                    *(void*)((int64_t)ppplVar3[2] + (int64_t)plVar22 * 4));
                pvVar12 = _pthread_getspecific(pVar16);
                ppplVar7 = local_78;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                  pppplVar20 = (int64_t ****)
                               ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                }
                fVar27 = (float)(*(*pppplVar20)[0x73])();
                goto LAB_01a27f03;
              }
            }
            else if ((void*)local_d8 == 0) {
              *(float *)((int64_t)ppplVar3[2] + (int64_t)plVar22 * 4) = fVar27;
              pvVar12 = _pthread_getspecific(pVar16);
              ppplVar7 = local_78;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar14 = FUN_00e8b990(), pppplVar21 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                pppplVar21 = (int64_t ****)ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4]
                ;
              }
              fVar28 = (float)(*(*pppplVar21)[0x72])();
              pppplVar20 = (int64_t ****)local_78;
              bVar23 = 1;
              if (fVar28 <= fVar27) {
                local_38 = (int64_t ***)
                           CONCAT44(local_38._4_4_,
                                    *(void*)((int64_t)ppplVar3[2] + (int64_t)plVar22 * 4));
                pvVar12 = _pthread_getspecific(pVar16);
                ppplVar7 = local_78;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar14 = FUN_00e8b990(), pppplVar20 = (int64_t ****)ppplVar7, lVar14 != 0)) {
                  pppplVar20 = (int64_t ****)
                               ppplVar7[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
                }
                fVar27 = (float)(*(*pppplVar20)[0x73])();
LAB_01a27f03:
                bVar23 = 1;
                if (local_38._0_4_ <= fVar27) goto LAB_01a27f18;
              }
            }
          }
          if ((local_70[0] != '\0') && ((int64_t ****)local_78 != (int64_t ****)0x0)) {
            FUN_00d50b20();
          }
          if ((int64_t ****)ppplVar6 != (int64_t ****)0x0) {
            FUN_00d50b20();
          }
          if ((int64_t ****)ppplVar5 != (int64_t ****)0x0) {
            FUN_00d50b20();
          }
        }
      }
      if ((int64_t ****)ppplVar4 != (int64_t ****)0x0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((bVar23 & 0xfb) != 0) goto LAB_01a28ae3;
      plVar22 = (int64_t *)((int64_t)plVar22 + 1);
    } while (plVar22 != local_120);
  }
  if (0 < (int)local_120) {
    plVar22 = (int64_t *)0x0;
    do {
      lVar2 = *(int64_t *)(*(int64_t *)(*local_e0 + 0x10) + (int64_t)plVar22 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      plVar1 = (int64_t *)*this_ptr;
      local_158 = '\0';
      local_160 = lVar2;
      FUN_0039e8b0();
      local_e8 = 0;
      lVar14 = CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        if (lVar14 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_e8 = '\x01';
      local_150 = *param_3;
      local_148 = '\0';
      pVar16 = (void*)&local_150;
      local_f0 = lVar14;
      (**(code **)(*plVar1 + 0xe50))();
      ppplVar4 = local_78;
      if (local_70[0] == '\0') {
        if ((((int64_t ****)local_78 != (int64_t ****)0x0) &&
            (FUN_00d50b00(), local_70[0] != '\0')) &&
           ((int64_t ****)local_78 != (int64_t ****)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70[0] = '\0';
      }
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      pvVar12 = _pthread_getspecific(pVar16);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      ppplVar5 = local_78;
      if ((local_70[0] != '\0') && ((int64_t ****)local_78 != (int64_t ****)0x0)) {
        FUN_00d50b20();
      }
      if ((int64_t ****)ppplVar5 == (int64_t ****)0x0) {
        fVar27 = *(float *)((int64_t)ppplVar3[2] + (int64_t)plVar22 * 4);
        if ((fVar27 != g_02391078) || (NAN(fVar27) || NAN(g_02391078))) {
          FUN_01a26360();
        }
      }
      else {
        fVar27 = *(float *)((int64_t)local_c0[2] + (int64_t)plVar22 * 4);
        if ((((fVar27 != g_02391078) || (NAN(fVar27) || NAN(g_02391078))) && (*this_ptr != 0))
           && ((int64_t ****)ppplVar4 != (int64_t ****)0x0)) {
          local_70[0] = '\0';
          local_78 = (int64_t ***)0x0;
          local_68 = ppplVar4;
          local_60 = 0xffffffff;
          local_58 = 0;
          local_60._4_4_ = 0;
          while( true ) {
            if (local_60._4_4_ != 0) {
              if (local_60._4_4_ < 1) {
                iVar10 = -local_60._4_4_;
              }
              else {
                iVar10 = (int)local_60 - local_60._4_4_;
                local_60 = CONCAT44(local_60._4_4_,iVar10);
                FUN_00d23690();
                local_58 = local_58 + local_60._4_4_;
                iVar10 = 0;
              }
              local_60 = CONCAT44(iVar10,(int)local_60);
            }
            lVar14 = (int64_t)(int)local_60;
            iVar10 = (int)local_60 + 1;
            local_60 = CONCAT44(local_60._4_4_,iVar10);
            if (*(int *)((int64_t)local_68 + 0xc) <= iVar10) break;
            local_140 = (int64_t ***)local_68[2][lVar14 + 1];
            local_138 = '\0';
            local_78 = local_140;
            (**(code **)(
                        "/System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation"
                        + *(int64_t *)*this_ptr + 0x48))
                      (*(void*)((int64_t)local_c0[2] + (int64_t)plVar22 * 4));
            if ((local_138 != '\0') && ((int64_t ****)local_140 != (int64_t ****)0x0)) {
              FUN_00d50b20();
            }
          }
          pppplVar20 = (int64_t ****)local_68;
          FUN_001159b0();
          pVar16 = (void*)pppplVar20;
        }
        fVar27 = *(float *)((int64_t)ppplVar3[2] + (int64_t)plVar22 * 4);
        if ((fVar27 != g_02391078) || (NAN(fVar27) || NAN(g_02391078))) {
          FUN_01a26360();
        }
        fVar27 = *(float *)((int64_t)local_c8[2] + (int64_t)plVar22 * 4);
        if (((fVar27 != g_02391078) || (NAN(fVar27) || NAN(g_02391078))) && (*this_ptr != 0)) {
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152df60();
          if ((local_70[0] != '\0') && ((int64_t ****)local_78 != (int64_t ****)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      fVar27 = *(float *)((int64_t)ppplVar3[2] + (int64_t)plVar22 * 4);
      if ((fVar27 != g_02391078) || (NAN(fVar27) || NAN(g_02391078))) {
        pvVar12 = _pthread_getspecific(pVar16);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        ppplVar5 = local_78;
        if ((local_70[0] != '\0') && ((int64_t ****)local_78 != (int64_t ****)0x0)) {
          FUN_00d50b20();
        }
        if ((int64_t ****)ppplVar5 != (int64_t ****)0x0) {
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ec70();
          if ((local_70[0] != '\0') && ((int64_t ****)local_78 != (int64_t ****)0x0)) {
            FUN_00d50b20();
          }
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152dc80();
          if ((local_70[0] != '\0') && ((int64_t ****)local_78 != (int64_t ****)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((void*)local_d8 == 0) {
          pvVar12 = _pthread_getspecific(pVar16);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e970();
        }
      }
      if ((int64_t ****)ppplVar4 != (int64_t ****)0x0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      plVar22 = (int64_t *)((int64_t)plVar22 + 1);
    } while (plVar22 != local_120);
  }
LAB_01a28ae3:
  if ((int64_t ****)local_c8 != (int64_t ****)0x0) {
    FUN_00d50b20();
  }
  if ((int64_t ****)local_c0 != (int64_t ****)0x0) {
    FUN_00d50b20();
  }
  if ((int64_t ****)ppplVar3 != (int64_t ****)0x0) {
    FUN_00d50b20();
  }
  return;
}

