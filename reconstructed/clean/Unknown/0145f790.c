// Function: FUN_0145f790
// Address: 0145f790
// Size: 11747 bytes
// Class: Unknown

void FUN_0145f790(void* param_1,char param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  void *pvVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  code *pcVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint64_t uVar16;
  int64_t lVar17;
  void*puVar18;
  code *pcVar19;
  int64_t *plVar20;
  code *pcVar21;
  void*puVar22;
  void* pVar23;
  code *pcVar24;
  uint uVar25;
  code *pcVar26;
  uint64_t *arg1;
  int64_t this_ptr;
  uint64_t unaff_R12;
  undefined7 uVar27;
  uint64_t unaff_R14;
  int iVar28;
  code **unaff_R15;
  uint64_t uVar29;
  bool bVar30;
  uint32_t uVar31;
  int64_t local_e0;
  char local_d8;
  code *local_d0;
  char local_c8;
  int64_t *local_98;
  uint64_t local_90;
  code *local_78;
  char local_70;
  void*local_68;
  code *local_60;
  uint64_t local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  
  plVar20 = *(int64_t **)(this_ptr + 0x60);
  local_48 = 0x0;
  local_58 = 0;
  local_60 = 0x0;
  local_40 = 0x0;
  local_38 = 0x0;
  local_50 = 0x0;
  pvVar9 = _pthread_getspecific(param_1);
  if (pvVar9 != (void *)0x0) {
    plVar20 = *(int64_t **)(this_ptr + 0x60);
    local_48 = 0x0;
    local_58 = 0;
    local_60 = 0x0;
    local_40 = 0x0;
    local_38 = 0x0;
    local_50 = 0x0;
    lVar10 = FUN_00e8b990();
    if (lVar10 != 0) {
      plVar20 = (int64_t *)plVar20[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
  }
  local_48 = 0x0;
  local_58 = 0;
  local_60 = 0x0;
  local_40 = 0x0;
  local_38 = 0x0;
  local_50 = 0x0;
  uVar31 = (**(code **)(*plVar20 + 0x370))();
  local_48 = 0x0;
  local_58 = 0;
  local_60 = 0x0;
  local_40 = 0x0;
  local_38 = 0x0;
  local_50 = 0x0;
  FUN_00d242c0();
  uVar16 = *arg1;
  pVar23 = *(void* *)(uVar16 + 0xc);
  if ((int)pVar23 < 1) {
    bVar3 = false;
    local_98 = (int64_t *)0x0;
    bVar2 = false;
    local_48 = 0x0;
    local_40 = 0x0;
    local_38 = 0x0;
    local_90 = 0;
    local_50 = 0x0;
    if (0 < (int)pVar23) goto LAB_014605f9;
LAB_01460f8d:
    local_58 = 0;
    local_60 = 0x0;
  }
  else {
    lVar10 = 0;
    local_50 = 0x0;
    local_90 = 0;
    local_38 = 0x0;
    local_40 = 0x0;
    local_48 = 0x0;
    bVar2 = false;
    local_98 = (int64_t *)0x0;
    pcVar24 = 0x0;
    bVar3 = false;
    do {
      lVar11 = *(int64_t *)(uVar16 + 0x10);
      pcVar13 = *(code **)(lVar11 + lVar10 * 8);
      if (local_50 == pcVar13) {
        if (((char)local_90 == '\0') && (local_50 != 0x0)) {
          local_90 = CONCAT71((int7)((uint64_t)lVar11 >> 8),1);
          unaff_R14 = 0;
          FUN_00d50b00();
        }
      }
      else {
        if (pcVar13 != 0x0) {
          unaff_R14 = local_90 & 0xffffffff;
          lVar11 = FUN_00d50b00();
        }
        if (((char)local_90 == '\0') || (local_50 == 0x0)) {
          local_90 = CONCAT71((int7)((uint64_t)lVar11 >> 8),1);
          local_50 = pcVar13;
        }
        else {
          unaff_R14 = local_90 & 0xffffffff;
          local_50 = pcVar13;
          uVar12 = FUN_00d50b20();
          local_90 = CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
        }
      }
      pvVar9 = _pthread_getspecific((void*)pcVar24);
      if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        pcVar24 = local_50;
      }
      FUN_014f60f0();
      pcVar13 = local_78;
      uVar27 = (undefined7)(unaff_R12 >> 8);
      if (local_78 == local_38) {
        if (((char)local_40 != '\0') || (local_78 == 0x0)) {
          unaff_R12 = (uint64_t)local_40 & 0xffffffff;
          pcVar13 = local_38;
          goto joined_r0x0145fb71;
        }
        unaff_R12 = CONCAT71(uVar27,1);
        if (local_70 == '\0') {
          FUN_00d50b00();
          goto LAB_0145fb58;
        }
      }
      else if (local_70 == '\0') {
        if (local_78 != 0x0) {
          FUN_00d50b00();
        }
        unaff_R12 = CONCAT71(uVar27,1);
        if (((char)local_40 != '\0') && (local_38 != 0x0)) {
          FUN_00d50b20();
          local_38 = pcVar13;
LAB_0145fb58:
          unaff_R12 = CONCAT71(uVar27,1);
          pcVar13 = local_38;
        }
joined_r0x0145fb71:
        local_38 = pcVar13;
        if ((local_70 != '\0') && (local_78 != 0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        unaff_R12 = CONCAT71(uVar27,1);
        if (((char)local_40 == '\0') || (local_38 == 0x0)) {
          local_38 = local_78;
        }
        else {
          FUN_00d50b20();
          local_38 = pcVar13;
        }
      }
      pvVar9 = _pthread_getspecific((void*)pcVar24);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01328c70();
      if (param_2 != '\0') {
        pcVar13 = FUN_00e8fc40();
        FUN_007eeec0();
        (**(code **)(*(int64_t *)pcVar13 + 0x18))();
        local_60 = pcVar13;
        pcVar13 = FUN_00115860();
        (**(code **)(*(int64_t *)pcVar13 + 0x18))();
        if (local_48 == pcVar13) {
          if ((!bVar2) && (pcVar13 = local_48, local_48 != 0x0)) goto LAB_0145fc8b;
          if (local_48 == 0x0) {
            local_48 = 0x0;
          }
          else {
            FUN_00d50b20();
          }
        }
        else {
          if ((bVar2) && (local_48 != 0x0)) {
            FUN_00d50b20();
          }
LAB_0145fc8b:
          local_48 = pcVar13;
          bVar2 = true;
        }
        pvVar9 = _pthread_getspecific((void*)pcVar24);
        if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          pcVar24 = local_48;
        }
        FUN_013dd650();
        pvVar9 = _pthread_getspecific((void*)pcVar24);
        if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          pcVar24 = local_38;
        }
        FUN_014bc440();
        pvVar9 = _pthread_getspecific((void*)pcVar24);
        if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          pcVar24 = local_60;
        }
        FUN_013dfbc0();
        pvVar9 = _pthread_getspecific((void*)pcVar24);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01327c60();
        pvVar9 = _pthread_getspecific((void*)pcVar24);
        if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          pcVar24 = local_50;
        }
        FUN_014efb40();
        if (local_70 == '\0') {
          if (local_78 != 0x0) {
            local_40 = local_78;
            FUN_00d50b00();
            if ((local_70 != '\0') && (local_78 != 0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0145ff10;
          }
        }
        else {
          local_40 = local_78;
          if (local_78 != 0x0) {
LAB_0145ff10:
            pvVar9 = _pthread_getspecific((void*)pcVar24);
            pcVar13 = local_40;
            if ((pvVar9 != (void *)0x0) &&
               (lVar11 = FUN_00e8b990(), pcVar13 = local_40, lVar11 != 0)) {
              pcVar24 = local_40;
              pcVar13 = *(code **)(local_40 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8 + 0x20)
              ;
            }
            lVar11 = (**(code **)(*(int64_t *)pcVar13 + 0x380))();
            pvVar9 = _pthread_getspecific((void*)pcVar24);
            pcVar13 = local_38;
            if ((pvVar9 != (void *)0x0) &&
               (lVar17 = FUN_00e8b990(), pcVar13 = local_38, lVar17 != 0)) {
              pcVar24 = local_38;
              pcVar13 = *(code **)(local_38 + (uint64_t)(*(uint *)(lVar17 + 0x154) & 1) * 8 + 0x20)
              ;
            }
            lVar17 = (**(code **)(*(int64_t *)pcVar13 + 0x380))();
            if (lVar11 < lVar17) {
              pvVar9 = _pthread_getspecific((void*)pcVar24);
              if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                pcVar24 = local_40;
              }
              pvVar9 = _pthread_getspecific((void*)pcVar24);
              pcVar13 = local_38;
              if ((pvVar9 != (void *)0x0) &&
                 (lVar11 = FUN_00e8b990(), pcVar13 = local_38, lVar11 != 0)) {
                pcVar24 = local_38;
                pcVar13 = *(code **)(local_38 +
                                    (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8 + 0x20);
              }
              (**(code **)(*(int64_t *)pcVar13 + 0x380))();
              FUN_014bad80();
            }
            pvVar9 = _pthread_getspecific((void*)pcVar24);
            pcVar13 = local_40;
            if ((pvVar9 != (void *)0x0) &&
               (lVar11 = FUN_00e8b990(), pcVar13 = local_40, lVar11 != 0)) {
              pcVar24 = local_40;
              pcVar13 = *(code **)(local_40 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8 + 0x20)
              ;
            }
            lVar11 = (**(code **)(*(int64_t *)pcVar13 + 0x380))();
            pvVar9 = _pthread_getspecific((void*)pcVar24);
            pcVar13 = local_40;
            if ((pvVar9 != (void *)0x0) &&
               (lVar17 = FUN_00e8b990(), pcVar13 = local_40, lVar17 != 0)) {
              pcVar24 = local_40;
              pcVar13 = *(code **)(local_40 + (uint64_t)(*(uint *)(lVar17 + 0x154) & 1) * 8 + 0x20)
              ;
            }
            lVar17 = (**(code **)(*(int64_t *)pcVar13 + 0x388))();
            pvVar9 = _pthread_getspecific((void*)pcVar24);
            pcVar13 = local_38;
            if ((pvVar9 != (void *)0x0) &&
               (lVar14 = FUN_00e8b990(), pcVar13 = local_38, lVar14 != 0)) {
              pcVar24 = local_38;
              pcVar13 = *(code **)(local_38 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8 + 0x20)
              ;
            }
            lVar14 = (**(code **)(*(int64_t *)pcVar13 + 0x380))();
            pvVar9 = _pthread_getspecific((void*)pcVar24);
            pcVar13 = local_38;
            if ((pvVar9 != (void *)0x0) &&
               (lVar15 = FUN_00e8b990(), pcVar13 = local_38, lVar15 != 0)) {
              pcVar24 = local_38;
              pcVar13 = *(code **)(local_38 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8 + 0x20)
              ;
            }
            lVar15 = (**(code **)(*(int64_t *)pcVar13 + 0x388))();
            if (lVar15 + lVar14 < lVar17 + lVar11) {
              pvVar9 = _pthread_getspecific((void*)pcVar24);
              if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                pcVar24 = local_40;
              }
              pvVar9 = _pthread_getspecific((void*)pcVar24);
              pcVar13 = local_38;
              if ((pvVar9 != (void *)0x0) &&
                 (lVar11 = FUN_00e8b990(), pcVar13 = local_38, lVar11 != 0)) {
                pcVar24 = local_38;
                pcVar13 = *(code **)(local_38 +
                                    (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8 + 0x20);
              }
              (**(code **)(*(int64_t *)pcVar13 + 0x380))();
              pvVar9 = _pthread_getspecific((void*)pcVar24);
              pcVar13 = local_38;
              if ((pvVar9 != (void *)0x0) &&
                 (lVar11 = FUN_00e8b990(), pcVar13 = local_38, lVar11 != 0)) {
                pcVar24 = local_38;
                pcVar13 = *(code **)(local_38 +
                                    (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8 + 0x20);
              }
              (**(code **)(*(int64_t *)pcVar13 + 0x388))();
              pvVar9 = _pthread_getspecific((void*)pcVar24);
              pcVar13 = local_40;
              if ((pvVar9 != (void *)0x0) &&
                 (lVar11 = FUN_00e8b990(), pcVar13 = local_40, lVar11 != 0)) {
                pcVar24 = local_40;
                pcVar13 = *(code **)(local_40 +
                                    (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8 + 0x20);
              }
              (**(code **)(*(int64_t *)pcVar13 + 0x380))();
              FUN_014bb2b0();
            }
            local_58 = CONCAT71(local_58._1_7_,(char)unaff_R12);
            pvVar9 = _pthread_getspecific((void*)pcVar24);
            pcVar13 = local_40;
            if ((pvVar9 != (void *)0x0) &&
               (lVar11 = FUN_00e8b990(), pcVar13 = local_40, lVar11 != 0)) {
              pcVar24 = local_40;
              pcVar13 = *(code **)(local_40 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8 + 0x20)
              ;
            }
            lVar11 = (**(code **)(*(int64_t *)pcVar13 + 0x3a0))();
            pvVar9 = _pthread_getspecific((void*)pcVar24);
            if ((pvVar9 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pcVar24 = local_60;
            }
            lVar17 = FUN_013de650();
            uVar29 = lVar11 - lVar17;
            iVar28 = (int)uVar29;
            uVar16 = 0;
            if (-1 < iVar28) {
              uVar16 = uVar29 & 0xffffffff;
            }
            pvVar9 = _pthread_getspecific((void*)pcVar24);
            pcVar13 = local_38;
            if ((pvVar9 != (void *)0x0) &&
               (lVar11 = FUN_00e8b990(), pcVar13 = local_38, lVar11 != 0)) {
              pcVar24 = local_38;
              pcVar13 = *(code **)(local_38 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8 + 0x20)
              ;
            }
            pVar23 = (void*)pcVar24;
            unaff_R14 = (**(code **)(*(int64_t *)pcVar13 + 0x388))();
            unaff_R15 = (code **)CONCAT71((int7)(uVar29 >> 8),iVar28 < 0);
            pvVar9 = _pthread_getspecific(pVar23);
            if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
              pVar23 = (void*)local_38;
            }
            FUN_014bcf30();
            if ((int64_t)unaff_R14 < (int64_t)uVar16 || iVar28 < 0) {
              bVar1 = (byte)local_58;
            }
            else {
              plVar20 = (int64_t *)FUN_00115860();
              (**(code **)(*plVar20 + 0x18))();
              if (local_98 == plVar20) {
                if ((!bVar3) && (plVar20 = local_98, local_98 != (int64_t *)0x0))
                goto LAB_0146041d;
                if (local_98 == (int64_t *)0x0) {
                  local_98 = (int64_t *)0x0;
                }
                else {
                  FUN_00d50b20();
                }
              }
              else {
                if ((bVar3) && (local_98 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_0146041d:
                local_98 = plVar20;
                bVar3 = true;
              }
              pvVar9 = _pthread_getspecific(pVar23);
              if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                pVar23 = (void*)local_98;
              }
              FUN_013dd650();
              pvVar9 = _pthread_getspecific(pVar23);
              if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                pVar23 = (void*)local_40;
              }
              FUN_014bc440();
              pvVar9 = _pthread_getspecific(pVar23);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              bVar1 = (byte)local_58;
              FUN_013dfce0();
              FUN_01433c40(uVar31);
            }
            unaff_R12 = (uint64_t)bVar1;
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      lVar10 = lVar10 + 1;
      uVar16 = *arg1;
      pVar23 = *(void* *)(uVar16 + 0xc);
      pcVar24 = (int64_t)(int)pVar23;
      local_40 = (unaff_R12 & 0xffffffff);
    } while (lVar10 < (int64_t)pcVar24);
    local_40 = (unaff_R12 & 0xffffffff);
    if ((int)pVar23 < 1) goto LAB_01460f8d;
LAB_014605f9:
    unaff_R15 = (code **)0x0;
    local_60 = 0x0;
    pcVar24 = 0x0;
    local_58 = 0;
    do {
      lVar10 = *(int64_t *)(uVar16 + 0x10);
      pcVar13 = *(code **)(lVar10 + (int64_t)unaff_R15 * 8);
      if (local_50 == pcVar13) {
        if (((char)local_90 == '\0') && (local_50 != 0x0)) {
          local_90 = CONCAT71((int7)((uint64_t)lVar10 >> 8),1);
          unaff_R14 = 0;
          FUN_00d50b00();
        }
      }
      else {
        if (pcVar13 != 0x0) {
          unaff_R14 = local_90 & 0xffffffff;
          lVar10 = FUN_00d50b00();
        }
        if (((char)local_90 == '\0') || (local_50 == 0x0)) {
          local_90 = CONCAT71((int7)((uint64_t)lVar10 >> 8),1);
          local_50 = pcVar13;
        }
        else {
          unaff_R14 = local_90 & 0xffffffff;
          local_50 = pcVar13;
          uVar12 = FUN_00d50b20();
          local_90 = CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
        }
      }
      pvVar9 = _pthread_getspecific((void*)pcVar24);
      if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
        pcVar26 = *(code **)(local_50 + 0x148);
        pcVar13 = local_50;
        if (pcVar26 != local_38) goto LAB_01460731;
LAB_014606fe:
        pVar23 = (void*)pcVar24;
        pcVar24 = local_38;
        if (((char)local_40 == '\0') && (pcVar26 != 0x0)) {
          local_40 = CONCAT71((int7)((uint64_t)pcVar13 >> 8),1);
          FUN_00d50b00();
          pcVar24 = local_38;
        }
      }
      else {
        pcVar13 = *(code **)(local_50 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8 + 0x20);
        pcVar26 = *(code **)(pcVar13 + 0x148);
        pcVar24 = local_50;
        if (pcVar26 == local_38) goto LAB_014606fe;
LAB_01460731:
        pVar23 = (void*)pcVar24;
        if (pcVar26 != 0x0) {
          pcVar13 = FUN_00d50b00();
        }
        bVar30 = (char)local_40 != '\0';
        local_40 = CONCAT71((int7)((uint64_t)pcVar13 >> 8),1);
        pcVar24 = pcVar26;
        if ((bVar30) && (local_38 != 0x0)) {
          FUN_00d50b20();
        }
      }
      local_38 = pcVar24;
      pvVar9 = _pthread_getspecific(pVar23);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        pVar23 = (void*)local_50;
      }
      FUN_014bc420();
      if (local_e0 == 0) {
        cVar7 = '\0';
      }
      else {
        unaff_R14 = *arg1;
        pvVar9 = _pthread_getspecific(pVar23);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pVar23 = (void*)local_50;
        }
        FUN_014bc420();
        if (local_c8 == '\0') {
          if (local_d0 != 0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_c8 = '\0';
        }
        local_78 = local_d0;
        local_70 = '\0';
        cVar7 = FUN_00d23d70();
        if ((local_70 != '\0') && (local_78 != 0x0)) {
          FUN_00d50b20();
        }
        if (local_d0 != 0x0) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar7 != '\0') {
        pvVar9 = _pthread_getspecific(pVar23);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pVar23 = (void*)local_50;
        }
        FUN_014bc420();
        pcVar24 = local_78;
        pvVar9 = _pthread_getspecific(pVar23);
        pcVar13 = local_78;
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), pcVar24 = pcVar13, lVar10 != 0)) {
          pcVar24 = *(code **)(pcVar13 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8 + 0x20);
        }
        pcVar24 = *(code **)(pcVar24 + 0x148);
        uVar27 = (undefined7)(unaff_R14 >> 8);
        if (pcVar24 == local_60) {
          if (((byte)local_58 == '\0') && (pcVar24 != 0x0)) {
            FUN_00d50b00();
            goto LAB_014609b0;
          }
          unaff_R14 = local_58 & 0xffffffff;
          pcVar24 = local_60;
        }
        else {
          if (pcVar24 != 0x0) {
            FUN_00d50b00();
          }
          unaff_R14 = CONCAT71(uVar27,1);
          if (((byte)local_58 != '\0') && (local_60 != 0x0)) {
            FUN_00d50b20();
            local_60 = pcVar24;
LAB_014609b0:
            unaff_R14 = CONCAT71(uVar27,1);
            pcVar24 = local_60;
          }
        }
        local_60 = pcVar24;
        if ((local_70 != '\0') && (local_78 != 0x0)) {
          FUN_00d50b20();
        }
        if (local_60 == 0x0) {
          local_58 = unaff_R14 & 0xffffffff;
          local_60 = 0x0;
        }
        else {
          local_58 = unaff_R14 & 0xffffffff;
          pvVar9 = _pthread_getspecific(pVar23);
          if (pvVar9 != (void *)0x0) {
            local_58 = unaff_R14 & 0xffffffff;
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              pVar23 = (void*)local_60;
            }
          }
          cVar7 = FUN_014d36f0();
          if (cVar7 != '\0') {
            local_58 = unaff_R14 & 0xffffffff;
            pvVar9 = _pthread_getspecific(pVar23);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar23 = (void*)local_38;
            }
            FUN_014bc360();
            pvVar9 = _pthread_getspecific(pVar23);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar23 = (void*)local_60;
            }
            FUN_014bc2e0();
          }
          local_58 = unaff_R14 & 0xffffffff;
        }
      }
      pvVar9 = _pthread_getspecific(pVar23);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        pVar23 = (void*)local_50;
      }
      FUN_014d25c0();
      if (local_e0 == 0) {
        cVar7 = '\0';
      }
      else {
        unaff_R14 = *arg1;
        pvVar9 = _pthread_getspecific(pVar23);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pVar23 = (void*)local_50;
        }
        FUN_014d25c0();
        if (local_c8 == '\0') {
          if (local_d0 != 0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_c8 = '\0';
        }
        local_78 = local_d0;
        local_70 = '\0';
        cVar7 = FUN_00d23d70();
        if ((local_70 != '\0') && (local_78 != 0x0)) {
          FUN_00d50b20();
        }
        if (local_d0 != 0x0) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar7 != '\0') {
        pvVar9 = _pthread_getspecific(pVar23);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pVar23 = (void*)local_50;
        }
        FUN_014d25c0();
        pcVar24 = local_78;
        if (local_78 == 0x0) {
          bVar30 = true;
          pcVar24 = 0x0;
        }
        else if (local_70 == '\0') {
          FUN_00d50b00();
          bVar30 = false;
          if ((local_70 != '\0') && (bVar30 = false, local_78 != 0x0)) {
            FUN_00d50b20();
            bVar30 = false;
          }
        }
        else {
          local_70 = '\0';
          bVar30 = false;
        }
        pvVar9 = _pthread_getspecific(pVar23);
        if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
          lVar10 = *(int64_t *)(pcVar24 + 0x148);
          if (lVar10 != 0) goto LAB_01460de2;
LAB_01460dc9:
          lVar11 = 0;
        }
        else {
          lVar10 = *(int64_t *)
                    (*(int64_t *)(pcVar24 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8 + 0x20)
                    + 0x148);
          if (lVar10 == 0) goto LAB_01460dc9;
LAB_01460de2:
          FUN_00d50b00();
          lVar11 = lVar10;
        }
        unaff_R14 = 0;
        pvVar9 = _pthread_getspecific(pVar23);
        if ((pvVar9 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
          pVar23 = (void*)local_38;
        }
        FUN_014d2640();
        pvVar9 = _pthread_getspecific(pVar23);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d25e0();
        if ((lVar10 != 0) && (lVar11 != 0)) {
          FUN_00d50b20();
        }
        if (!bVar30 && pcVar24 != 0x0) {
          FUN_00d50b20();
        }
      }
      unaff_R15 = (code **)((int64_t)unaff_R15 + 1);
      uVar16 = *arg1;
      pVar23 = *(void* *)(uVar16 + 0xc);
      pcVar24 = (int64_t)(int)pVar23;
    } while ((int64_t)unaff_R15 < (int64_t)pcVar24);
  }
  lVar10 = *(int64_t *)(this_ptr + 0x68);
  pvVar9 = _pthread_getspecific(pVar23);
  if (pvVar9 != (void *)0x0) {
    lVar10 = *(int64_t *)(this_ptr + 0x68);
    lVar11 = FUN_00e8b990();
    if (lVar11 != 0) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
    }
  }
  if (*(char *)(lVar10 + 0x171) == '\0') goto LAB_014625b6;
  pcVar24 = FUN_00e8fc40();
  FUN_010fe5f0();
  uVar12 = (**(code **)(*(int64_t *)pcVar24 + 0x18))();
  uVar27 = (undefined7)((uint64_t)uVar12 >> 8);
  if (pcVar24 == local_38) {
    if ((char)local_40 == '\0') {
      local_40 = CONCAT71(uVar27,1);
      pcVar24 = local_38;
    }
    else {
      FUN_00d50b20();
      pcVar24 = local_38;
    }
  }
  else {
    bVar30 = (char)local_40 != '\0';
    local_40 = CONCAT71(uVar27,1);
    if ((bVar30) && (local_38 != 0x0)) {
      FUN_00d50b20();
    }
  }
  local_38 = pcVar24;
  pvVar9 = _pthread_getspecific(pVar23);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pVar23 = (void*)local_38;
  }
  FUN_014bb250();
  pvVar9 = _pthread_getspecific(pVar23);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pVar23 = (void*)local_38;
  }
  FUN_014bb2b0();
  pvVar9 = _pthread_getspecific(pVar23);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pVar23 = (void*)local_38;
  }
  FUN_014bd3c0(g_0240df00);
  pvVar9 = _pthread_getspecific(pVar23);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pVar23 = (void*)local_38;
  }
  FUN_014bc170(g_02391090);
  pvVar9 = _pthread_getspecific(pVar23);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_0132dbe0();
  puVar18 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar18 = &g_02572358;
  pcVar13 = g_02572370;
  (*g_02572370)();
  pcVar26 = g_025e74b8;
  uVar25 = 0;
  pcVar24 = g_025e74b8;
  local_68 = puVar18;
  if ((int)uVar8 < 1) {
    bVar30 = false;
    pcVar19 = 0x0;
  }
  else {
    unaff_R15 = &local_78;
    bVar30 = false;
    pcVar21 = 0x0;
    do {
      pcVar19 = FUN_00e8fc40();
      FUN_00d4ff40();
      *(void**)pcVar19 = &g_025e74a0;
      *(void*)(pcVar19 + 0xc) = 0;
      *(void*)(pcVar19 + 0x14) = 0;
      *(void*)(pcVar19 + 0x1c) = 0;
      *(void*)(pcVar19 + 0x24) = 0;
      pcVar19[0x2c] = (code)0x0;
      *(int64_t *)(pcVar19 + 0x30) = 0;
      *(int64_t *)(pcVar19 + 0x38) = 0;
      *(int64_t *)(pcVar19 + 0x40) = 0;
      *(int64_t *)(pcVar19 + 0x48) = 0;
      *(int64_t *)(pcVar19 + 0x50) = 0;
      *(int64_t *)(pcVar19 + 0x58) = 0;
      *(void*)(pcVar19 + 0x60) = 0;
      (*pcVar26)();
      if (pcVar19 == pcVar21) {
        pcVar19 = pcVar21;
        if (bVar30) {
          FUN_00d50b20();
          bVar6 = bVar30;
        }
        else {
          bVar6 = true;
        }
      }
      else {
        bVar6 = true;
        if ((bVar30) && (pcVar21 != 0x0)) {
          FUN_00d50b20();
        }
      }
      bVar30 = bVar6;
      *(uint *)(pcVar19 + 0xc) = uVar25;
      uVar5 = _UNK_0240df4c;
      uVar4 = _UNK_0240df48;
      uVar31 = _UNK_0240df44;
      *(void*)(pcVar19 + 0x10) = g_0240df40;
      *(void*)(pcVar19 + 0x14) = uVar31;
      *(void*)(pcVar19 + 0x18) = uVar4;
      *(void*)(pcVar19 + 0x1c) = uVar5;
      *(void*)(pcVar19 + 0x24) = 0x3dcccccd3dcccccd;
      local_70 = '\0';
      local_78 = pcVar19;
      FUN_00d21140();
      if ((local_70 != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      uVar25 = uVar25 + 1;
      pcVar21 = pcVar19;
    } while (uVar8 != uVar25);
  }
  puVar18 = local_68;
  pvVar9 = _pthread_getspecific((void*)pcVar24);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pcVar24 = local_38;
  }
  FUN_014c2990();
  plVar20 = *(int64_t **)(this_ptr + 0x60);
  pvVar9 = _pthread_getspecific((void*)pcVar24);
  if (pvVar9 != (void *)0x0) {
    plVar20 = *(int64_t **)(this_ptr + 0x60);
    lVar10 = FUN_00e8b990();
    if (lVar10 != 0) {
      plVar20 = (int64_t *)plVar20[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar20 + 0x370))();
  FUN_01433c40();
  pvVar9 = _pthread_getspecific((void*)pcVar24);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328c70();
  pvVar9 = _pthread_getspecific((void*)pcVar24);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0134b4e0();
  if (param_2 != '\0') {
    plVar20 = (int64_t *)FUN_00e8fc40();
    FUN_007eeec0();
    (**(code **)(*plVar20 + 0x18))();
    pcVar21 = FUN_00115860();
    (**(code **)(*(int64_t *)pcVar21 + 0x18))();
    if (local_48 == pcVar21) {
      if ((!bVar2) && (pcVar21 = local_48, local_48 != 0x0)) goto LAB_01461592;
      if (local_48 == 0x0) {
        local_48 = 0x0;
      }
      else {
        FUN_00d50b20();
      }
    }
    else {
      if ((bVar2) && (local_48 != 0x0)) {
        FUN_00d50b20();
      }
LAB_01461592:
      local_48 = pcVar21;
      bVar2 = true;
    }
    pvVar9 = _pthread_getspecific((void*)pcVar24);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pcVar24 = local_48;
    }
    FUN_013dd650();
    pvVar9 = _pthread_getspecific((void*)pcVar24);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pcVar24 = local_38;
    }
    FUN_014bc440();
    pvVar9 = _pthread_getspecific((void*)pcVar24);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfbc0();
    pvVar9 = _pthread_getspecific((void*)pcVar24);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01327c60();
    FUN_00d50b20();
  }
  pcVar21 = FUN_00e8fc40();
  FUN_010fe5f0();
  (**(code **)(*(int64_t *)pcVar21 + 0x18))();
  if (pcVar21 == local_38) {
    FUN_00d50b20();
    uVar16 = (uint64_t)local_40 & 0xffffffff;
    pcVar21 = local_38;
  }
  else {
    uVar16 = CONCAT71((int7)((uint64_t)unaff_R15 >> 8),1);
    if (local_38 != 0x0) {
      FUN_00d50b20();
    }
  }
  local_38 = pcVar21;
  local_40 = (uVar16 & 0xffffffff);
  pvVar9 = _pthread_getspecific((void*)pcVar24);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pcVar24 = local_38;
  }
  FUN_014bb250();
  pvVar9 = _pthread_getspecific((void*)pcVar24);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pcVar24 = local_38;
  }
  FUN_014bb2b0();
  pvVar9 = _pthread_getspecific((void*)pcVar24);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pcVar24 = local_38;
  }
  FUN_014bd3c0(g_02390110);
  pvVar9 = _pthread_getspecific((void*)pcVar24);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pcVar24 = local_38;
  }
  FUN_014bc170(g_02391090);
  puVar22 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar22 = &g_02572358;
  (*pcVar13)();
  if (puVar18 == puVar22) {
    FUN_00d50b20();
    puVar22 = puVar18;
  }
  else if (puVar18 != (void*)0x0) {
    FUN_00d50b20();
  }
  local_68 = puVar22;
  if (0 < (int)uVar8) {
    uVar16 = 0;
    pcVar21 = pcVar19;
    do {
      pcVar19 = FUN_00e8fc40();
      FUN_00d4ff40();
      *(void**)pcVar19 = &g_025e74a0;
      *(void*)(pcVar19 + 0xc) = 0;
      *(void*)(pcVar19 + 0x14) = 0;
      *(void*)(pcVar19 + 0x1c) = 0;
      *(void*)(pcVar19 + 0x24) = 0;
      pcVar19[0x2c] = (code)0x0;
      *(int64_t *)(pcVar19 + 0x30) = 0;
      *(int64_t *)(pcVar19 + 0x38) = 0;
      *(int64_t *)(pcVar19 + 0x40) = 0;
      *(int64_t *)(pcVar19 + 0x48) = 0;
      *(int64_t *)(pcVar19 + 0x50) = 0;
      *(int64_t *)(pcVar19 + 0x58) = 0;
      *(void*)(pcVar19 + 0x60) = 0;
      (*pcVar26)();
      if (pcVar19 == pcVar21) {
        pcVar19 = pcVar21;
        if (bVar30) {
          FUN_00d50b20();
          bVar6 = bVar30;
        }
        else {
          bVar6 = true;
        }
      }
      else {
        bVar6 = true;
        if ((bVar30) && (pcVar21 != 0x0)) {
          FUN_00d50b20();
        }
      }
      bVar30 = bVar6;
      *(int *)(pcVar19 + 0xc) = (int)uVar16;
      uVar5 = _UNK_0240df5c;
      uVar4 = _UNK_0240df58;
      uVar31 = _UNK_0240df54;
      *(void*)(pcVar19 + 0x10) = g_0240df50;
      *(void*)(pcVar19 + 0x14) = uVar31;
      *(void*)(pcVar19 + 0x18) = uVar4;
      *(void*)(pcVar19 + 0x1c) = uVar5;
      *(void*)(pcVar19 + 0x24) = 0x3dcccccd3dcccccd;
      local_70 = '\0';
      local_78 = pcVar19;
      FUN_00d21140();
      if ((local_70 != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      uVar25 = (int)uVar16 + 1;
      uVar16 = (uint64_t)uVar25;
      pcVar21 = pcVar19;
    } while (uVar8 != uVar25);
  }
  puVar18 = local_68;
  pvVar9 = _pthread_getspecific((void*)pcVar24);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pcVar24 = local_38;
  }
  FUN_014c2990();
  plVar20 = *(int64_t **)(this_ptr + 0x60);
  pvVar9 = _pthread_getspecific((void*)pcVar24);
  if (pvVar9 != (void *)0x0) {
    plVar20 = *(int64_t **)(this_ptr + 0x60);
    lVar10 = FUN_00e8b990();
    if (lVar10 != 0) {
      plVar20 = (int64_t *)plVar20[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar20 + 0x370))();
  FUN_01433c40();
  pvVar9 = _pthread_getspecific((void*)pcVar24);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328c70();
  pvVar9 = _pthread_getspecific((void*)pcVar24);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0134b420();
  if (param_2 != '\0') {
    plVar20 = (int64_t *)FUN_00e8fc40();
    FUN_007eeec0();
    (**(code **)(*plVar20 + 0x18))();
    pcVar21 = FUN_00115860();
    (**(code **)(*(int64_t *)pcVar21 + 0x18))();
    if (local_48 == pcVar21) {
      if ((!bVar2) && (pcVar21 = local_48, local_48 != 0x0)) goto LAB_01461caa;
      if (local_48 == 0x0) {
        local_48 = 0x0;
      }
      else {
        FUN_00d50b20();
      }
    }
    else {
      if ((bVar2) && (local_48 != 0x0)) {
        FUN_00d50b20();
      }
LAB_01461caa:
      local_48 = pcVar21;
      bVar2 = true;
    }
    pvVar9 = _pthread_getspecific((void*)pcVar24);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pcVar24 = local_48;
    }
    FUN_013dd650();
    pvVar9 = _pthread_getspecific((void*)pcVar24);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pcVar24 = local_38;
    }
    FUN_014bc440();
    pvVar9 = _pthread_getspecific((void*)pcVar24);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfbc0();
    pvVar9 = _pthread_getspecific((void*)pcVar24);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01327c60();
    FUN_00d50b20();
  }
  pcVar21 = FUN_00e8fc40();
  FUN_010fe5f0();
  (**(code **)(*(int64_t *)pcVar21 + 0x18))();
  if (pcVar21 == local_38) {
    FUN_00d50b20();
    uVar16 = (uint64_t)local_40 & 0xffffffff;
    pcVar21 = local_38;
  }
  else {
    uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
    if (local_38 != 0x0) {
      FUN_00d50b20();
    }
  }
  local_38 = pcVar21;
  local_40 = (uVar16 & 0xffffffff);
  pvVar9 = _pthread_getspecific((void*)pcVar24);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pcVar24 = local_38;
  }
  FUN_014bb250();
  pvVar9 = _pthread_getspecific((void*)pcVar24);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pcVar24 = local_38;
  }
  FUN_014bb2b0();
  pvVar9 = _pthread_getspecific((void*)pcVar24);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pcVar24 = local_38;
  }
  FUN_014bd3c0(g_023941e8);
  pvVar9 = _pthread_getspecific((void*)pcVar24);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pcVar24 = local_38;
  }
  FUN_014bc170(g_02391090);
  puVar22 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar22 = &g_02572358;
  (*pcVar13)();
  pVar23 = (void*)pcVar24;
  if (puVar22 == puVar18) {
    FUN_00d50b20();
LAB_01462039:
    pVar23 = (void*)pcVar24;
    puVar22 = puVar18;
  }
  else if (puVar18 != (void*)0x0) {
    FUN_00d50b20();
    puVar18 = puVar22;
    goto LAB_01462039;
  }
  if (0 < (int)uVar8) {
    uVar25 = 0;
    pcVar13 = pcVar19;
    do {
      pcVar19 = FUN_00e8fc40();
      FUN_00d4ff40();
      *(void**)pcVar19 = &g_025e74a0;
      *(void*)(pcVar19 + 0xc) = 0;
      *(void*)(pcVar19 + 0x14) = 0;
      *(void*)(pcVar19 + 0x1c) = 0;
      *(void*)(pcVar19 + 0x24) = 0;
      pcVar19[0x2c] = (code)0x0;
      *(int64_t *)(pcVar19 + 0x30) = 0;
      *(int64_t *)(pcVar19 + 0x38) = 0;
      *(int64_t *)(pcVar19 + 0x40) = 0;
      *(int64_t *)(pcVar19 + 0x48) = 0;
      *(int64_t *)(pcVar19 + 0x50) = 0;
      *(int64_t *)(pcVar19 + 0x58) = 0;
      *(void*)(pcVar19 + 0x60) = 0;
      (*pcVar26)();
      if (pcVar19 == pcVar13) {
        pcVar19 = pcVar13;
        if (bVar30) {
          FUN_00d50b20();
          bVar6 = bVar30;
        }
        else {
          bVar6 = true;
        }
      }
      else {
        bVar6 = true;
        if ((bVar30) && (pcVar13 != 0x0)) {
          FUN_00d50b20();
        }
      }
      bVar30 = bVar6;
      *(uint *)(pcVar19 + 0xc) = uVar25;
      uVar5 = _UNK_0240df6c;
      uVar4 = _UNK_0240df68;
      uVar31 = _UNK_0240df64;
      *(void*)(pcVar19 + 0x10) = g_0240df60;
      *(void*)(pcVar19 + 0x14) = uVar31;
      *(void*)(pcVar19 + 0x18) = uVar4;
      *(void*)(pcVar19 + 0x1c) = uVar5;
      *(void*)(pcVar19 + 0x24) = 0x3dcccccd3dcccccd;
      local_70 = '\0';
      local_78 = pcVar19;
      FUN_00d21140();
      if ((local_70 != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      pVar23 = (void*)pcVar24;
      uVar25 = uVar25 + 1;
      pcVar13 = pcVar19;
    } while (uVar8 != uVar25);
  }
  pvVar9 = _pthread_getspecific(pVar23);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pVar23 = (void*)local_38;
  }
  FUN_014c2990();
  plVar20 = *(int64_t **)(this_ptr + 0x60);
  pvVar9 = _pthread_getspecific(pVar23);
  if (pvVar9 != (void *)0x0) {
    plVar20 = *(int64_t **)(this_ptr + 0x60);
    lVar10 = FUN_00e8b990();
    if (lVar10 != 0) {
      plVar20 = (int64_t *)plVar20[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar20 + 0x370))();
  FUN_01433c40();
  pvVar9 = _pthread_getspecific(pVar23);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328c70();
  pvVar9 = _pthread_getspecific(pVar23);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0134b360();
  if (param_2 != '\0') {
    plVar20 = (int64_t *)FUN_00e8fc40();
    FUN_007eeec0();
    (**(code **)(*plVar20 + 0x18))();
    pcVar24 = FUN_00115860();
    (**(code **)(*(int64_t *)pcVar24 + 0x18))();
    if (local_48 == pcVar24) {
      if ((!bVar2) && (pcVar24 = local_48, local_48 != 0x0)) goto LAB_014623c1;
      if (local_48 == 0x0) {
        local_48 = 0x0;
      }
      else {
        FUN_00d50b20();
      }
    }
    else {
      if ((bVar2) && (local_48 != 0x0)) {
        FUN_00d50b20();
      }
LAB_014623c1:
      local_48 = pcVar24;
      bVar2 = true;
    }
    pvVar9 = _pthread_getspecific(pVar23);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar23 = (void*)local_48;
    }
    FUN_013dd650();
    pvVar9 = _pthread_getspecific(pVar23);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar23 = (void*)local_38;
    }
    FUN_014bc440();
    pvVar9 = _pthread_getspecific(pVar23);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfbc0();
    pvVar9 = _pthread_getspecific(pVar23);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01327c60();
    FUN_00d50b20();
  }
  if ((bVar30) && (pcVar19 != 0x0)) {
    FUN_00d50b20();
  }
  if (puVar22 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_014625b6:
  if ((bVar3) && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_48 != 0x0)) {
    FUN_00d50b20();
  }
  if (((byte)local_58 != '\0') && (local_60 != 0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (local_38 != 0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (local_50 != 0x0)) {
    FUN_00d50b20();
  }
  return;
}

