// Function: FUN_004f3eb0
// Address: 004f3eb0
// Size: 3281 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


uint64_t FUN_004f3eb0(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t lVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  int64_t this_ptr;
  int64_t *plVar13;
  int64_t **pplVar14;
  uint64_t uVar15;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint32_t uVar18;
  uint32_t uVar19;
  int64_t *local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  uint64_t uStack_a0;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78 [8];
  int64_t *local_70;
  uint64_t local_68;
  int local_60;
  int64_t *local_58;
  int64_t *local_50;
  uint64_t local_48;
  uint64_t uStack_40;
  
  uVar19 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar18 = (uint32_t)param_2;
  pplVar14 = &local_80;
  FUN_00d3ecf0();
  plVar11 = local_80;
  FUN_000823a0();
  if (plVar11 == (int64_t *)0x0) {
LAB_004f3f05:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_004f3f05;
  }
  plVar11 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar14 + 1) = 0;
  }
  if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_b0 = plVar11;
  if (*(int64_t *)(this_ptr + 0x10) == 0) {
    uVar12 = 0;
    goto LAB_004f4b5f;
  }
  FUN_00d50b00();
  FUN_002218b0();
  plVar11 = local_80;
  if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (int64_t *)0x0) {
LAB_004f3fd9:
    uVar12 = 0;
  }
  else {
    FUN_002218b0();
    cVar5 = FUN_00751ba0();
    if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') goto LAB_004f3fd9;
    FUN_00226f20();
    pVar9 = (void*)param_1;
    local_58 = local_80;
    if (local_78[0] == '\0') {
      if (local_80 == (int64_t *)0x0) goto LAB_004f4012;
      FUN_00d50b00();
      if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_80 == (int64_t *)0x0) {
LAB_004f4012:
      FUN_00261550();
      plVar11 = local_80;
      pVar9 = (void*)param_1;
      if (local_78[0] == '\0') {
        if (local_80 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_004f4057;
        }
      }
      else if (local_80 != (int64_t *)0x0) {
LAB_004f4057:
        pVar9 = (void*)param_1;
        plVar13 = local_58;
        if (*(int *)((int64_t)plVar11 + 0xc) == 1) {
          FUN_00d23310();
          plVar11 = local_80;
          pVar9 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_78[0]);
          pplVar14 = &local_90;
          if (local_78[0] != '\0') {
            pplVar14 = (int64_t **)local_78;
          }
          local_90 = (int64_t *)CONCAT71(local_90._1_7_,local_78[0]);
          *(char *)pplVar14 = '\0';
          if ((local_78[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar13 = local_58;
          if ((plVar11 != (int64_t *)0x0) && (plVar13 = plVar11, (char)local_90 == '\0')) {
            FUN_00d50b00();
          }
        }
        local_58 = plVar13;
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(this_ptr + 0x10) == 0) {
LAB_004f4163:
      uVar12 = 0;
    }
    else {
      FUN_0021a630();
      local_98 = local_80;
      plVar11 = local_80;
      if (local_78[0] == '\0') {
        if (local_80 == (int64_t *)0x0) goto LAB_004f4163;
        FUN_00d50b00();
        plVar11 = local_98;
        if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      uVar12 = 0;
      if ((plVar11 != (int64_t *)0x0) && (local_58 != (int64_t *)0x0)) {
        pvVar7 = _pthread_getspecific(pVar9);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pVar9 = (void*)local_58;
        }
        FUN_0165a070();
        plVar11 = local_80;
        if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_b0 != plVar11) {
          pvVar7 = _pthread_getspecific(pVar9);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar9 = (void*)local_58;
          }
          FUN_0165a070();
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb770();
          plVar11 = local_80;
          if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_b0 != plVar11) {
            uVar12 = 0;
            goto LAB_004f4b38;
          }
        }
        FUN_0021a630();
        plVar11 = local_98;
        local_a8 = (int64_t *)(**(code **)(*local_80 + 0xa50))();
        local_50 = (int64_t *)CONCAT44(uVar19,uVar18);
        if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar11 + 0x9b8))(local_a8,(int)local_50);
        local_c0 = local_90;
        local_b8 = 0;
        if (local_88 == '\0') {
          if (local_90 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        local_b8 = '\x01';
        FUN_00243390();
        local_50 = local_80;
        if (local_78[0] == '\0') {
          if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
             (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_78[0] = '\0';
        }
        if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        iVar6 = FUN_00228b30();
        plVar13 = local_50;
        if ((iVar6 == 0) && (local_50 != (int64_t *)0x0)) {
          if (*(int *)((int64_t)local_50 + 0xc) != 0) {
            FUN_00d50b00();
            FUN_0025e9a0();
            plVar11 = local_80;
            if (plVar13 == local_80) {
              local_a8 = plVar13;
LAB_004f443e:
              if ((local_78[0] != '\0') && (plVar13 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_78[0] == '\0') {
                if (local_80 != (int64_t *)0x0) {
                  local_a8 = local_50;
                  FUN_00d50b00();
                }
                local_a8 = plVar11;
                FUN_00d50b20();
                local_a8 = plVar11;
                plVar13 = local_80;
                goto LAB_004f443e;
              }
              local_a8 = local_80;
              FUN_00d50b20();
            }
            local_78[0] = '\0';
            local_80 = (int64_t *)0x0;
            local_70 = local_50;
            local_68 = 0xffffffff;
            local_60 = 0;
            local_68._4_4_ = 0;
            while( true ) {
              if (local_68._4_4_ != 0) {
                if (local_68._4_4_ < 1) {
                  iVar6 = -local_68._4_4_;
                }
                else {
                  iVar6 = (int)local_68 - local_68._4_4_;
                  local_68 = CONCAT44(local_68._4_4_,iVar6);
                  FUN_00d23690();
                  local_60 = local_60 + local_68._4_4_;
                  iVar6 = 0;
                }
                local_68 = CONCAT44(iVar6,(int)local_68);
              }
              lVar8 = (int64_t)(int)local_68;
              iVar6 = (int)local_68 + 1;
              local_68 = CONCAT44(local_68._4_4_,iVar6);
              if (*(int *)((int64_t)local_70 + 0xc) <= iVar6) break;
              lVar10 = local_70[2];
              local_80 = *(int64_t **)(lVar10 + 8 + lVar8 * 8);
              pvVar7 = _pthread_getspecific((void*)lVar10);
              pVar9 = (void*)lVar10;
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar7 = _pthread_getspecific(pVar9);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pVar9 = (void*)local_58;
              }
              FUN_0165a070();
              plVar13 = local_90;
              plVar11 = local_e0;
              if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar13 == plVar11) {
                local_90 = local_80;
                local_88 = '\0';
                FUN_00d21140();
                if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266fe0();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012eb770();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0165a070();
                plVar11 = local_90;
                if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar11 == local_110) {
                  local_90 = local_80;
                  local_88 = '\0';
                  FUN_00d21140();
                  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
            }
            plVar11 = local_70;
            FUN_001159b0();
            pVar9 = (void*)plVar11;
            FUN_00d50b20();
            local_50 = local_a8;
            plVar11 = local_98;
            goto LAB_004f4777;
          }
LAB_004f477c:
          if (*(int *)((int64_t)local_50 + 0xc) != 0) {
            local_a8 = (int64_t *)(**(code **)(*plVar11 + 0xa98))();
            plVar13 = local_50;
            iVar6 = *(int *)((int64_t)local_50 + 0xc);
            uStack_a0 = extraout_XMM0_Qb;
            if (1 < iVar6) {
              FUN_004f2260(plVar11,FUN_004f0e40);
              plVar4 = local_80;
              if (local_80 == plVar13) {
LAB_004f480d:
                if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_78[0] == '\0') {
                  if (local_80 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  local_50 = plVar4;
                  FUN_00d50b20();
                  local_50 = plVar4;
                  goto LAB_004f480d;
                }
                local_50 = local_80;
                FUN_00d50b20();
              }
              iVar6 = *(int *)((int64_t)local_50 + 0xc);
            }
            lVar8 = local_50[2];
            lVar10 = *(int64_t *)(lVar8 + (int64_t)(iVar6 / 2) * 8);
            local_c8 = 0;
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            pVar9 = (void*)lVar8;
            local_c8 = '\x01';
            local_d0 = lVar10;
            local_48 = (**(code **)(*plVar11 + 0xc38))();
            uStack_40 = extraout_XMM0_Qb_00;
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            auVar17._8_8_ = uStack_a0;
            auVar17._0_8_ = local_a8;
            auVar1._8_8_ = uStack_40;
            auVar1._0_8_ = local_48;
            auVar16._4_12_ = auVar1._4_12_;
            auVar16._0_4_ = (float)local_48 + (float)((uint64_t)local_a8 >> 0x20) * g_02390118;
            auVar17 = blendps(auVar16,auVar17,0xe);
            (**(code **)(*plVar11 + 0xaa0))(auVar17._0_8_);
          }
        }
        else {
LAB_004f4777:
          if (local_50 != (int64_t *)0x0) goto LAB_004f477c;
          local_50 = (int64_t *)0x0;
        }
        uVar15 = FUN_00d3ed20();
        if (local_78[0] == '\0') {
          if (local_80 == (int64_t *)0x0) goto LAB_004f4989;
          uVar15 = FUN_00d50b00();
          if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
LAB_004f4908:
          lVar8 = g_02709968;
          if (g_02709968 != 0) {
            uVar15 = FUN_00d50b00();
          }
          local_100 = lVar8;
          local_f8 = '\x01';
          pplVar14 = &local_80;
          FUN_000175c0(uVar15,&local_100);
          plVar11 = local_80;
          FUN_002771e0();
          if (plVar11 == (int64_t *)0x0) {
LAB_004f496c:
            pplVar14 = (int64_t **)&g_02802688;
          }
          else {
            (**(code **)(*plVar11 + 0x360))();
            cVar5 = FUN_00e85ea0();
            if (cVar5 == '\0') goto LAB_004f496c;
          }
          plVar11 = *pplVar14;
          if (plVar11 == (int64_t *)0x0) {
            plVar11 = (int64_t *)0x0;
            bVar2 = false;
          }
          else {
            if (*(char *)(pplVar14 + 1) == '\0') {
              FUN_00d50b00();
            }
            else {
              *(void*)(pplVar14 + 1) = 0;
            }
            bVar2 = true;
          }
          if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (plVar11 == (int64_t *)0x0) goto LAB_004f4a58;
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar6 = FUN_01326de0();
          if (iVar6 != 2) {
            pvVar7 = _pthread_getspecific(pVar9);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar6 = FUN_01326de0();
            if (iVar6 != 4) {
              local_e8 = '\0';
              local_f0 = plVar11;
              (**(code **)(*local_98 + 0xcc8))(g_023b49d0);
              if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      *local_98 + 0x40))();
          bVar3 = false;
        }
        else {
          if (local_80 != (int64_t *)0x0) goto LAB_004f4908;
LAB_004f4989:
          bVar2 = false;
LAB_004f4a58:
          bVar3 = true;
        }
        FUN_00212bd0();
        plVar11 = local_80;
        if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (int64_t *)0x0) {
          FUN_00212bd0();
          FUN_00442100();
          if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (bVar2 && !bVar3) {
          FUN_00d50b20();
        }
        uVar12 = CONCAT71((int7)((uint64_t)plVar11 >> 8),1);
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
LAB_004f4b38:
      if (local_98 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_004f4b5f:
  if (local_b0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar12 & 0xffffffff;
}

