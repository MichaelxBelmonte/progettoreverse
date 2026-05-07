// Function: FUN_01bd7b90
// Address: 01bd7b90
// Size: 2891 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void FUN_01bd7b90(uint64_t param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int64_t **pplVar4;
  void *pvVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t lVar8;
  void*puVar9;
  void* pVar10;
  int64_t **pplVar11;
  int64_t this_ptr;
  uint64_t unaff_R13;
  undefined7 uVar12;
  bool bVar13;
  int64_t local_88;
  int64_t local_80;
  int64_t *local_78;
  int64_t local_70;
  uint64_t local_68;
  int local_60;
  void*local_58;
  int64_t *local_50;
  char local_48;
  uint32_t local_3c;
  
  uVar1 = *(uint *)(*(int64_t *)(this_ptr + 0x78) + 0xc);
  pplVar4 = (int64_t **)(uint64_t)uVar1;
  if (uVar1 == 1) {
    if (*(int64_t *)(this_ptr + 0x98) != 0) {
      unaff_R13 = 0;
      FUN_00d50130();
      if (*(int64_t *)(this_ptr + 0x98) != 0) {
        *(void*)(this_ptr + 0x98) = 0;
        unaff_R13 = 0;
        FUN_00d50b20();
      }
    }
    FUN_00d23310();
    pplVar4 = &local_78;
    pVar10 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),(char)local_78);
    pplVar11 = &local_50;
    if ((char)local_78 != '\0') {
      pplVar11 = pplVar4;
    }
    local_50 = (int64_t *)CONCAT71(local_50._1_7_,(char)local_78);
    *(void*)pplVar11 = 0;
    if (((char)local_78 != '\0') && (local_80 != 0)) {
      pplVar4 = (int64_t **)FUN_00d50b20();
    }
    if (local_80 != 0) {
      if ((char)local_50 == '\0') {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e78c0();
      if (local_80 == 0) {
        bVar13 = false;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pplVar4 = &local_50;
        FUN_012e78c0();
        plVar6 = local_50;
        if ((g_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_027e77e8 = FUN_0015ef90();
          g_027e77d0 = "MULSSGenerator";
          g_027e77d8 = 0x70;
          pVar10 = 0x15ef30;
          g_027e77e0 = FUN_0015ef30;
          g_027e77f0 = 0;
          ram_00000000027e77f8 = 0;
          g_027e7800 = 0;
          ram_00000000027e7808 = 0;
          g_027e7810 = 0;
          ram_00000000027e7818 = 0;
          g_027e7820 = 0;
          ram_00000000027e7828 = 0;
          g_027e7830 = 0;
          ram_00000000027e7838 = 0;
          g_027e7840 = 0;
          ram_00000000027e7848 = 0;
          g_027e7850 = 0;
          ram_00000000027e7858 = 0;
          g_027e7860 = 0;
          ram_00000000027e7868 = 0;
          g_027e7870 = 0;
          ram_00000000027e7878 = 0;
          g_027e7880 = 0;
          ram_00000000027e7888 = 0;
          g_027e7890 = 0;
          ___cxa_guard_release();
        }
        if (plVar6 == (int64_t *)0x0) {
LAB_01bd8284:
          pplVar4 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar6 + 0x360))();
          cVar2 = FUN_00e85ea0();
          if (cVar2 == '\0') goto LAB_01bd8284;
        }
        bVar13 = *pplVar4 != (int64_t *)0x0;
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (bVar13) {
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        if (local_80 == 0) {
          puVar9 = (void*)0x0;
          local_88 = 0;
joined_r0x01bd8359:
          if (((char)local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar12 = (undefined7)((uint64_t)unaff_R13 >> 8);
          local_88 = local_80;
          if ((char)local_78 == '\0') {
            FUN_00d50b00();
            puVar9 = (void*)CONCAT71(uVar12,1);
            goto joined_r0x01bd8359;
          }
          puVar9 = (void*)CONCAT71(uVar12,1);
        }
        if (local_88 == 0) goto LAB_01bd83be;
        local_58 = puVar9;
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6cb0();
        if (local_80 == 0) {
          bVar13 = false;
          lVar7 = 0;
        }
        else {
          if ((((char)local_78 == '\0') && (FUN_00d50b00(), (char)local_78 != '\0')) &&
             (local_80 != 0)) {
            FUN_00d50b20();
          }
          pvVar5 = _pthread_getspecific(pVar10);
          lVar7 = local_80;
          if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar7 = *(int64_t *)(local_80 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          if (*(int64_t *)(lVar7 + 0x58) != 0) {
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            puVar9 = (void*)FUN_017ed3a0();
            if (local_80 == local_88) {
              if (((char)local_58 == '\0') && (local_80 != 0)) {
                local_3c = CONCAT31(local_3c._1_3_,1);
                if ((char)local_78 != '\0') goto LAB_01bd85ed;
                local_3c = CONCAT31(local_3c._1_3_,1);
                puVar9 = (void*)FUN_00d50b00();
              }
              else {
                local_3c = CONCAT31(local_3c._1_3_,(char)local_58);
                puVar9 = local_58;
              }
LAB_01bd85d9:
              if (((char)local_78 != '\0') && (local_80 != 0)) {
                puVar9 = (void*)FUN_00d50b20();
              }
            }
            else {
              if ((char)local_78 == '\0') {
                if (local_80 != 0) {
                  puVar9 = (void*)FUN_00d50b00();
                }
                local_3c = CONCAT31(local_3c._1_3_,1);
                if ((char)local_58 == '\0') {
                  local_88 = local_80;
                }
                else {
                  local_88 = local_80;
                  puVar9 = (void*)FUN_00d50b20();
                }
                goto LAB_01bd85d9;
              }
              local_3c = CONCAT31(local_3c._1_3_,1);
              if ((char)local_58 == '\0') {
                local_88 = local_80;
              }
              else {
                local_88 = local_80;
                puVar9 = (void*)FUN_00d50b20();
              }
            }
LAB_01bd85ed:
            local_58 = (void*)CONCAT71((int7)((uint64_t)puVar9 >> 8),(uint8_t)local_3c);
          }
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_017f2970();
          if (cVar2 == '\0') {
            bVar13 = false;
            lVar7 = 0;
            FUN_00d50b20();
          }
          else {
            bVar13 = true;
            lVar7 = local_80;
          }
        }
        local_3c = 0;
        if (((char)local_58 == '\0') || (local_88 == 0)) goto LAB_01bd84c6;
        FUN_00d50b20();
      }
      else {
LAB_01bd83be:
        bVar13 = false;
        lVar7 = 0;
      }
      local_3c = 0;
      goto LAB_01bd84c6;
    }
LAB_01bd8139:
    local_3c = (uint32_t)CONCAT71((int7)((uint64_t)pplVar4 >> 8),1);
    bVar13 = false;
    lVar7 = 0;
  }
  else {
    if ((int)uVar1 < 2) goto LAB_01bd8139;
    local_3c = (uint32_t)CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    if (*(int64_t *)(this_ptr + 0x98) == 0) {
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_01bdae30();
      (**(code **)(*plVar6 + 0x18))();
      lVar7 = *(int64_t *)(this_ptr + 0x98);
      *(int64_t **)(this_ptr + 0x98) = plVar6;
      if (lVar7 != 0) {
        FUN_00d50b20();
        plVar6 = *(int64_t **)(this_ptr + 0x98);
      }
      plVar6[3] = this_ptr;
    }
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar10 = 0x2572358;
    *puVar9 = &g_02572358;
    (*g_02572370)();
    local_58 = puVar9;
    if (*(int64_t *)(this_ptr + 0x78) != 0) {
      local_78._0_1_ = '\0';
      local_80 = 0;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_68._4_4_ = 0;
      local_70 = *(int64_t *)(this_ptr + 0x78);
      while( true ) {
        if (local_68._4_4_ != 0) {
          if (local_68._4_4_ < 1) {
            iVar3 = -local_68._4_4_;
          }
          else {
            iVar3 = (int)local_68 - local_68._4_4_;
            local_68 = CONCAT44(local_68._4_4_,iVar3);
            FUN_00d23690();
            local_60 = local_60 + local_68._4_4_;
            iVar3 = 0;
          }
          local_68 = CONCAT44(iVar3,(int)local_68);
        }
        lVar7 = (int64_t)(int)local_68;
        iVar3 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar3);
        if (*(int *)(local_70 + 0xc) <= iVar3) break;
        local_80 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + 8 + lVar7 * 8);
        pvVar5 = _pthread_getspecific((void*)*(int64_t *)(local_70 + 0x10));
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        plVar6 = local_50;
        if ((g_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_027e77e8 = FUN_0015ef90();
          g_027e77d0 = "MULSSGenerator";
          g_027e77d8 = 0x70;
          g_027e77e0 = FUN_0015ef30;
          g_027e77f0 = 0;
          ram_00000000027e77f8 = 0;
          g_027e7800 = 0;
          ram_00000000027e7808 = 0;
          g_027e7810 = 0;
          ram_00000000027e7818 = 0;
          g_027e7820 = 0;
          ram_00000000027e7828 = 0;
          g_027e7830 = 0;
          ram_00000000027e7838 = 0;
          g_027e7840 = 0;
          ram_00000000027e7848 = 0;
          g_027e7850 = 0;
          ram_00000000027e7858 = 0;
          g_027e7860 = 0;
          ram_00000000027e7868 = 0;
          g_027e7870 = 0;
          ram_00000000027e7878 = 0;
          g_027e7880 = 0;
          ram_00000000027e7888 = 0;
          g_027e7890 = 0;
          ___cxa_guard_release();
        }
        pplVar4 = (int64_t **)&g_02802688;
        if (plVar6 != (int64_t *)0x0) {
          (**(code **)(*plVar6 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar4 = &local_50;
          if (cVar2 == '\0') {
            pplVar4 = (int64_t **)&g_02802688;
          }
        }
        plVar6 = *pplVar4;
        if (*(char *)(pplVar4 + 1) == '\0') {
          if (plVar6 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar4 + 1) = 0;
        }
        pVar10 = (void*)pplVar4;
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (int64_t *)0x0) {
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c6cb0();
          if (local_50 != (int64_t *)0x0) {
            if (((local_48 == '\0') && (FUN_00d50b00(), local_48 != '\0')) &&
               (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_017f2970();
            if (cVar2 != '\0') {
              pvVar5 = _pthread_getspecific(pVar10);
              lVar7 = local_80;
              if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                lVar7 = *(int64_t *)
                         (local_80 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
              if (*(int64_t *)(lVar7 + 0x58) != 0) {
                pvVar5 = _pthread_getspecific(pVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_017ed3a0();
                if (plVar6 != local_50) {
                  plVar6 = local_50;
                  if (local_48 != '\0') {
                    FUN_00d50b20();
                    goto LAB_01bd8049;
                  }
                  if (local_50 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  FUN_00d50b20();
                }
                if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
LAB_01bd8049:
              local_48 = '\0';
              local_50 = plVar6;
              FUN_00d235a0();
              if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
        }
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      lVar7 = local_70;
      FUN_000be170();
      pVar10 = (void*)lVar7;
    }
    FUN_01bd23c0();
    if (*(int64_t *)(*(int64_t *)(this_ptr + 0x98) + 0x20) == 0) {
      bVar13 = false;
      local_80 = 0;
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar7 = *(int64_t *)(*(int64_t *)(this_ptr + 0x98) + 0x20);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c6cb0();
      if (local_80 == 0) {
        local_80 = 0;
        bVar13 = false;
      }
      else if ((char)local_78 == '\0') {
        FUN_00d50b00();
        bVar13 = true;
        if (((char)local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78._0_1_ = '\0';
        bVar13 = true;
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    lVar7 = local_80;
    if (local_58 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  local_80 = 0;
LAB_01bd84c6:
  FUN_01d2a770();
  FUN_01bd69c0();
  if ((bVar13) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_3c == '\0' && local_80 != 0) {
    FUN_00d50b20();
  }
  return;
}

