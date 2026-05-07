// Function: FUN_01bb14c0
// Address: 01bb14c0
// Size: 2897 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01bb14c0(void* param_1,char param_2)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  void *pvVar6;
  int64_t lVar7;
  bool *pbVar8;
  void* pVar9;
  undefined7 uVar12;
  uint64_t uVar10;
  int64_t *plVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar13;
  int64_t *plVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar15;
  float fVar16;
  int64_t *local_118;
  char local_110;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  float local_bc;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  uint64_t local_78;
  char local_70;
  undefined7 uStack_6f;
  int64_t *local_68;
  int64_t *local_60;
  uint64_t local_58;
  int64_t *local_50;
  bool local_48 [8];
  int64_t *local_40;
  bool local_38 [8];
  
  cVar3 = (**(code **)(*this_ptr + 0x688))();
  if (cVar3 == '\0') {
    uVar10 = 0;
    goto LAB_01bb168e;
  }
  (**(code **)(*this_ptr + 0x630))();
  plVar1 = local_40;
  if (local_38[0] == false) {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      local_c8 = plVar1;
      if ((local_38[0] != false) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01bb150b;
    }
    local_70 = '\0';
    uStack_6f = 0;
    plVar13 = (int64_t *)0x0;
    uVar10 = 0;
  }
  else {
    local_c8 = local_40;
LAB_01bb150b:
    if ((plVar1 == (int64_t *)0x0) || (*(int *)((int64_t)plVar1 + 0xc) < 1)) {
LAB_01bb165f:
      local_70 = '\0';
      uStack_6f = 0;
      plVar13 = (int64_t *)0x0;
LAB_01bb1668:
      uVar10 = 0;
    }
    else {
      FUN_00d23310();
      plVar13 = local_40;
      local_48[0] = local_38[0] != false;
      local_50 = local_40;
      if (local_48[0]) {
        local_38[0] = false;
      }
      FUN_0006e1c0();
      if (plVar13 == (int64_t *)0x0) {
LAB_01bb15e6:
        pplVar5 = &g_02802688;
        plVar14 = g_02802688;
        if (g_02802690 != '\0') goto LAB_01bb15f6;
LAB_01bb1609:
        if (plVar14 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        (**(code **)(*plVar13 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_01bb15e6;
        pplVar5 = &local_50;
        plVar14 = local_50;
        if (local_48[0] == false) goto LAB_01bb1609;
LAB_01bb15f6:
        *(void*)(pplVar5 + 1) = 0;
      }
      if ((local_48[0] != false) && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 == (int64_t *)0x0) goto LAB_01bb165f;
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      plVar13 = local_50;
      pvVar6 = _pthread_getspecific(param_1);
      plVar11 = local_50;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar13 = plVar11, lVar7 != 0)) {
        plVar13 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      FUN_012e8920();
      local_60 = local_40;
      plVar11 = local_40;
      if (local_40 == (int64_t *)0x0) {
        cVar3 = '\0';
        uVar12 = 0;
      }
      else {
        uVar12 = (undefined7)((uint64_t)plVar13 >> 8);
        if (local_38[0] == false) {
          FUN_00d50b00();
          cVar3 = '\x01';
          if ((local_38[0] != false) && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = false;
          cVar3 = '\x01';
        }
      }
      pVar9 = (void*)plVar11;
      if ((local_48[0] != false) && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      local_70 = cVar3;
      uStack_6f = uVar12;
      if (1 < *(int *)((int64_t)plVar1 + 0xc)) {
        FUN_01a13070();
        plVar11 = local_40;
        if ((local_38[0] != false) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar10 = CONCAT71((int7)((uint64_t)plVar11 >> 8),plVar11 != (int64_t *)0x0);
        plVar13 = local_60;
        if ((plVar11 == (int64_t *)0x0) || (param_2 == '\0')) goto LAB_01bb166a;
LAB_01bb179e:
        plVar13 = local_60;
        FUN_01a13070();
        plVar11 = local_40;
        if ((local_38[0] != false) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 == (int64_t *)0x0) {
          local_68 = (int64_t *)0x0;
          local_78 = 0;
        }
        else {
          FUN_01a13070();
          FUN_019f0d50();
          plVar11 = local_40;
          if (local_40 == (int64_t *)0x0) {
            local_78 = 0;
            plVar11 = (int64_t *)0x0;
          }
          else {
            uVar12 = (undefined7)((uint64_t)plVar14 >> 8);
            if (local_38[0] == false) {
              FUN_00d50b00();
              local_78 = CONCAT71(uVar12,1);
              if ((local_38[0] != false) && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38[0] = false;
              local_78 = CONCAT71(uVar12,1);
            }
          }
          local_68 = plVar11;
          if ((local_48[0] != false) && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        plVar14 = (int64_t *)this_ptr[0x1f];
        (**(code **)(*(int64_t *)this_ptr[0x1c] + 0x970))();
        local_b8 = local_40;
        local_b0 = 0;
        if (local_38[0] == false) {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = false;
        }
        local_b0 = '\x01';
        local_bc = (float)(**(code **)(*plVar14 + 0x380))();
        if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != false) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (*(int *)((int64_t)plVar1 + 0xc) != 1) {
          if (*(int *)((int64_t)plVar1 + 0xc) < 2) {
LAB_01bb19b9:
            plVar11 = (int64_t *)0x0;
            local_58 = 0;
          }
          else {
            local_58 = 0;
            iVar4 = FUN_01caecd0();
            if (iVar4 != 2) {
              local_58 = 0;
              iVar4 = FUN_01caecd0();
              if (iVar4 == 0) goto LAB_01bb1a39;
              local_58 = 0;
              iVar4 = FUN_01caecd0();
              if (iVar4 != 3) goto LAB_01bb19b9;
              local_58 = 0;
              (**(code **)(*this_ptr + 0x678))();
              uVar10 = 0;
              if (((char)local_78 == '\0') || (uVar10 = 0, local_68 == (int64_t *)0x0))
              goto LAB_01bb166a;
              FUN_00d50b20();
              goto LAB_01bb1668;
            }
LAB_01bb1a39:
            plVar14 = local_68;
            if (local_68 != (int64_t *)0x0) {
              FUN_01a13070();
              local_a8 = local_40;
              local_a0 = 0;
              if (local_38[0] == false) {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38[0] = false;
              }
              local_a0 = '\x01';
              (**(code **)(*plVar14 + 0x448))();
              if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] != false) && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_01a13070();
            local_98 = local_40;
            local_90 = 0;
            if (local_38[0] == false) {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = false;
            }
            local_90 = '\x01';
            local_d8 = plVar1;
            local_d0 = '\0';
            FUN_01a13070();
            (**(code **)(*local_118 + 0xe58))();
            arg1 = local_50;
            local_80 = 0;
            if (local_48[0] == false) {
              if (local_50 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48[0] = false;
            }
            local_80 = '\x01';
            local_88 = arg1;
            FUN_01a26560(local_bc,&local_d8,&local_88,0);
            if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48[0] != false) && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != false) && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar14 == (int64_t *)0x0) {
              uVar10 = CONCAT71((int7)((uint64_t)arg1 >> 8),1);
              goto LAB_01bb166a;
            }
            plVar11 = (int64_t *)0x0;
            local_58 = 0;
            (**(code **)(*plVar14 + 0x450))();
          }
LAB_01bb1f0c:
          if (((char)local_78 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar10 = CONCAT71((int7)((uint64_t)arg1 >> 8),1);
          if (((char)local_58 != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01bb166a;
        }
        FUN_00d23310();
        plVar13 = local_40;
        local_50 = local_40;
        if (local_38[0] == false) {
          pbVar8 = local_48;
        }
        else {
          pbVar8 = local_38;
        }
        local_48[0] = local_38[0] != false;
        *pbVar8 = false;
        if ((local_38[0] != false) && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0006e1c0();
        if (plVar13 == (int64_t *)0x0) {
LAB_01bb1a0d:
          pplVar5 = &g_02802688;
        }
        else {
          (**(code **)(*plVar13 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar5 = &local_50;
          if (cVar3 == '\0') goto LAB_01bb1a0d;
        }
        plVar11 = *pplVar5;
        if (plVar11 == (int64_t *)0x0) {
          bVar2 = true;
          plVar11 = (int64_t *)0x0;
          local_58 = 0;
        }
        else {
          if (*(char *)(pplVar5 + 1) == '\0') {
            pplVar5 = (int64_t **)FUN_00d50b00();
          }
          else {
            *(void*)(pplVar5 + 1) = 0;
          }
          local_58 = CONCAT71((int7)((uint64_t)pplVar5 >> 8),1);
          bVar2 = false;
        }
        if ((local_48[0] != false) && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar13 = local_60;
        if (plVar11 != (int64_t *)0x0) {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          plVar13 = local_40;
          if ((local_38[0] != false) && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar13 != (int64_t *)0x0) {
            if ((g_027048b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
              g_026cd478 = FUN_00d4fe50();
              g_026cd460 = "GNList";
              g_026cd468 = 0x20;
              pVar9 = 0x18210;
              g_026cd470 = FUN_00018210;
              g_026cd480 = 0;
              ram_00000000026cd488 = 0;
              g_026cd490 = 0;
              g_026cd508 = 0;
              ram_00000000026cd510 = 0;
              g_026cd518 = 0;
              g_026cd51a = 6;
              g_026cd498 = 0;
              ram_00000000026cd4a0 = 0;
              g_026cd4a8 = 0;
              ram_00000000026cd4b0 = 0;
              g_026cd4b8 = 0;
              ram_00000000026cd4c0 = 0;
              g_026cd4c8 = 0;
              ram_00000000026cd4d0 = 0;
              g_026cd4d8 = 0;
              ram_00000000026cd4e0 = 0;
              g_026cd4e8 = 0;
              ram_00000000026cd4f0 = 0;
              g_026cd4f8 = 0;
              ram_00000000026cd500 = 0;
              g_026cd523 = 0;
              g_026cd51b = 0;
              ___cxa_guard_release();
            }
            plVar13 = local_60;
            (**(code **)(*plVar1 + 0x360))();
            cVar3 = FUN_00e85ea0();
            uVar15 = extraout_XMM0_Da;
            if (cVar3 != '\0') {
              FUN_0006e1c0();
              FUN_00e8da30();
              uVar15 = extraout_XMM0_Da_00;
            }
            FUN_01a296f0(uVar15,0);
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            arg1 = local_40;
            pvVar6 = _pthread_getspecific(pVar9);
            plVar1 = local_40;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), arg1 = plVar1, lVar7 != 0))
            {
              arg1 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            fVar16 = (float)FUN_0152e000();
            FUN_01bae1e0(local_bc + fVar16,1);
            if ((local_38[0] != false) && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01e07010();
            (**(code **)(*this_ptr + 0x678))();
            goto LAB_01bb1f0c;
          }
          if (((char)local_78 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (!bVar2) {
            FUN_00d50b20();
            plVar13 = local_60;
            goto LAB_01bb1668;
          }
          uVar10 = 0;
          plVar13 = local_60;
          goto LAB_01bb166a;
        }
        uVar10 = 0;
        if (((char)local_78 == '\0') || (local_68 == (int64_t *)0x0)) goto LAB_01bb166a;
        FUN_00d50b20();
        goto LAB_01bb1668;
      }
      uVar10 = CONCAT71(uVar12,1);
      plVar13 = local_60;
      if (param_2 != '\0') goto LAB_01bb179e;
    }
LAB_01bb166a:
    if (local_c8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01bb168e:
  return uVar10 & 0xffffffff;
}

