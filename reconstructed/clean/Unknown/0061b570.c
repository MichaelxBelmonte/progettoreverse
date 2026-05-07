// Function: FUN_0061b570
// Address: 0061b570
// Size: 3972 bytes
// Class: Unknown

uint64_t FUN_0061b570(uint64_t param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  void*puVar5;
  void *pvVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t *plVar9;
  int64_t lVar10;
  undefined7 uVar11;
  uint64_t unaff_R12;
  void*puVar12;
  uint32_t uVar13;
  uint8_t local_158 [8];
  uint8_t local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t *local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  uint32_t local_8c;
  uint64_t local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  byte local_61;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  int64_t *local_38;
  
  FUN_0063f230();
  local_98 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_0061b5b4;
    }
  }
  else if (local_60 != (int64_t *)0x0) {
LAB_0061b5b4:
    iVar2 = FUN_00228b30();
    if (iVar2 == 1) {
      FUN_00226f20();
      local_80 = local_60;
      if (local_60 != (int64_t *)0x0) {
        if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0061b621;
      }
      puVar12 = (void*)0x0;
    }
    else {
      local_80 = (int64_t *)0x0;
LAB_0061b621:
      local_61 = iVar2 != 1;
      puVar12 = (void*)CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
      if (param_2 != '\0') {
        local_148 = 0;
        local_140 = '\0';
        FUN_00b5dfe0();
        local_e0 = local_a8;
        local_d8 = 0;
        if (local_a0 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a0 = '\0';
        }
        local_d8 = '\x01';
        FUN_001220c0();
        local_f0 = local_78;
        local_e8 = 0;
        if (local_70 == '\0') {
          if (local_78 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_e8 = '\x01';
        FUN_00b5dfe0();
        lVar7 = local_108;
        local_c8 = 0;
        if (local_100 == '\0') {
          if (local_108 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_100 = '\0';
        }
        local_c8 = '\x01';
        local_d0 = lVar7;
        local_130 = '\0';
        local_138 = 0;
        plVar4 = &local_d0;
        FUN_01f53880(plVar4,&local_f0,&local_138);
        pVar8 = (void*)plVar4;
        local_b0 = local_60;
        if (local_58 == '\0') {
          if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_58 = '\0';
        }
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if (local_b0 == (int64_t *)0x0) {
          puVar12 = (void*)0x0;
        }
        else {
          iVar2 = FUN_00228b30();
          if (iVar2 == 0) {
            FUN_0021a630();
            (**(code **)(*local_78 + 0xa00))();
            local_38 = local_60;
            plVar4 = local_60;
            if (local_60 == (int64_t *)0x0) {
              local_38 = (int64_t *)0x0;
              local_88 = 0;
            }
            else {
              uVar11 = (undefined7)((uint64_t)lVar7 >> 8);
              if (local_58 == '\0') {
                FUN_00d50b00();
                local_88 = CONCAT71(uVar11,1);
                if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_58 = '\0';
                local_88 = CONCAT71(uVar11,1);
              }
            }
            pVar8 = (void*)plVar4;
            if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar6 = _pthread_getspecific(pVar8);
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              pVar8 = (void*)local_38;
            }
            FUN_00e8b990();
            FUN_00cb1f10();
            FUN_00db3260();
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar6 = _pthread_getspecific(pVar8);
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              pVar8 = (void*)local_38;
            }
            FUN_012cb110();
            pvVar6 = _pthread_getspecific(pVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6160();
            local_f8 = local_60;
            plVar4 = local_60;
            if (local_58 == '\0') {
              if (((local_60 != (int64_t *)0x0) &&
                  (plVar4 = (int64_t *)FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (int64_t *)0x0)) {
                plVar4 = (int64_t *)FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
            }
            if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              plVar4 = (int64_t *)FUN_00d50b20();
            }
            local_8c = (uint32_t)CONCAT71((int7)((uint64_t)plVar4 >> 8),1);
            if (local_f8 == (int64_t *)0x0) {
LAB_0061c0ec:
              puVar12 = &g_02802501;
            }
            else {
              local_58 = '\0';
              local_60 = (int64_t *)0x0;
              local_50 = local_f8;
              local_48 = 0xffffffff;
              local_40 = 0;
              local_48._4_4_ = 0;
              while( true ) {
                if (local_48._4_4_ != 0) {
                  if (local_48._4_4_ < 1) {
                    iVar2 = -local_48._4_4_;
                  }
                  else {
                    iVar2 = (int)local_48 - local_48._4_4_;
                    local_48 = CONCAT44(local_48._4_4_,iVar2);
                    FUN_00d23690();
                    local_40 = local_40 + local_48._4_4_;
                    iVar2 = 0;
                  }
                  local_48 = CONCAT44(iVar2,(int)local_48);
                }
                lVar7 = (int64_t)(int)local_48;
                iVar2 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,iVar2);
                if (*(int *)((int64_t)local_50 + 0xc) <= iVar2) break;
                lVar10 = local_50[2];
                local_60 = *(int64_t **)(lVar10 + 8 + lVar7 * 8);
                pvVar6 = _pthread_getspecific((void*)lVar10);
                pVar8 = (void*)lVar10;
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar13 = FUN_012f4d60();
                lVar7 = local_a8;
                if (local_a0 == '\0') {
                  if (local_a8 != 0) {
                    uVar13 = FUN_00d50b00();
                  }
                }
                else {
                  local_a0 = '\0';
                }
                local_150 = 1;
                FUN_006500a0(uVar13,local_158);
                plVar4 = local_78;
                if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
                  FUN_00d50b00();
                }
                if (lVar7 != 0) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if (((plVar4 == (int64_t *)0x0) || (cVar1 = FUN_003b7990(), cVar1 == '\0')) ||
                   ((cVar1 = FUN_003b7710(), cVar1 == '\0' &&
                    (cVar1 = FUN_003b7780(), cVar1 == '\0')))) {
                  pvVar6 = _pthread_getspecific(pVar8);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012f4a00();
                  if (plVar4 != (int64_t *)0x0) goto LAB_0061bf03;
                }
                else {
                  pvVar6 = _pthread_getspecific(pVar8);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012f4a00();
LAB_0061bf03:
                  FUN_00d50b20();
                }
              }
              FUN_000be170();
              FUN_00d50b20();
              puVar12 = &g_02802501;
            }
          }
          else if (iVar2 == 1) {
            FUN_002218b0();
            cVar1 = FUN_0078cda0();
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar1 == '\0') {
              pvVar6 = _pthread_getspecific(pVar8);
              if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                pVar8 = (void*)local_80;
              }
              FUN_0165a070();
            }
            else {
              pvVar6 = _pthread_getspecific(pVar8);
              if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                pVar8 = (void*)local_80;
              }
              FUN_0165a0b0();
            }
            plVar4 = local_60;
            if ((((local_58 == '\0') && (local_60 != (int64_t *)0x0)) &&
                (FUN_00d50b00(), local_58 != '\0')) && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar6 = _pthread_getspecific(pVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e8920();
            local_38 = local_60;
            plVar9 = local_60;
            if (local_60 == (int64_t *)0x0) {
              local_38 = (int64_t *)0x0;
              local_88 = 0;
            }
            else {
              local_88 = CONCAT71((int7)((uint64_t)local_60 >> 8),1);
              if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            pVar8 = (void*)plVar9;
            pvVar6 = _pthread_getspecific(pVar8);
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              pVar8 = (void*)local_38;
            }
            FUN_00e8b990();
            FUN_00cb1f10();
            FUN_00db3260();
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar6 = _pthread_getspecific(pVar8);
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              pVar8 = (void*)local_38;
            }
            FUN_012cb110();
            pvVar6 = _pthread_getspecific(pVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar3 = FUN_012e6160();
            plVar9 = local_60;
            if (local_58 == '\0') {
              if (((local_60 != (int64_t *)0x0) && (uVar3 = FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (int64_t *)0x0)) {
                uVar3 = FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
            }
            if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              uVar3 = FUN_00d50b20();
            }
            if (plVar9 != (int64_t *)0x0) {
              local_58 = '\0';
              local_60 = (int64_t *)0x0;
              local_50 = plVar9;
              local_48 = 0xffffffff;
              local_40 = 0;
              while( true ) {
                lVar7 = (int64_t)(int)local_48;
                iVar2 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,iVar2);
                if (*(int *)((int64_t)local_50 + 0xc) <= iVar2) break;
                local_60 = *(int64_t **)(local_50[2] + 8 + lVar7 * 8);
                pvVar6 = _pthread_getspecific((void*)local_50[2]);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012f4a00();
                if (local_48._4_4_ != 0) {
                  if (local_48 < 0) {
                    iVar2 = -local_48._4_4_;
                  }
                  else {
                    local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                    FUN_00d23690();
                    local_40 = local_40 + local_48._4_4_;
                    iVar2 = 0;
                  }
                  local_48 = CONCAT44(iVar2,(int)local_48);
                }
              }
              FUN_000be170();
              uVar3 = FUN_00d50b20();
            }
            local_8c = (uint32_t)CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
            if (plVar4 == (int64_t *)0x0) goto LAB_0061c0ec;
            FUN_00d50b20();
            puVar12 = &g_02802501;
          }
          else if (iVar2 == 2) {
            FUN_0021a630();
            (**(code **)(*local_78 + 0xa00))();
            local_38 = local_60;
            if (local_60 == (int64_t *)0x0) {
              local_38 = (int64_t *)0x0;
              local_88 = 0;
            }
            else if (local_58 == '\0') {
              uVar3 = FUN_00d50b00();
              local_88 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
              if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
              local_88 = CONCAT71((int7)((uint64_t)local_60 >> 8),1);
            }
            if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_8c = 0;
          }
          else {
            local_88 = 0;
            local_38 = (int64_t *)0x0;
            local_8c = 0;
          }
          puVar5 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar5 = &g_025ee570;
          puVar5[6] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          *(void*)((int64_t)puVar5 + 0x1c) = 0;
          *(void*)((int64_t)puVar5 + 0x24) = 0;
          (*g_025ee588)();
          local_128 = local_38;
          local_120 = '\0';
          FUN_01531f40();
          if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*local_b0 + 0x390))();
          local_c0 = local_60;
          local_b8 = 0;
          if (local_58 == '\0') {
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_b8 = '\x01';
          FUN_01532bd0();
          if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_118 = local_b0;
          local_110 = '\0';
          pVar8 = 1;
          FUN_01532c20(1,1,0,0);
          if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)local_8c == '\0') {
LAB_0061c457:
            FUN_00d50b20();
          }
          else {
            pvVar6 = _pthread_getspecific(pVar8);
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              pVar8 = (void*)local_38;
            }
            FUN_012cb110();
            pvVar6 = _pthread_getspecific(pVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6160();
            plVar4 = local_60;
            if (local_58 == '\0') {
              if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
            }
            if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              local_58 = '\0';
              local_60 = (int64_t *)0x0;
              local_50 = plVar4;
              local_48 = 0xffffffff;
              local_40 = 0;
              while( true ) {
                lVar7 = (int64_t)(int)local_48;
                iVar2 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,iVar2);
                if (*(int *)((int64_t)local_50 + 0xc) <= iVar2) break;
                local_60 = *(int64_t **)(local_50[2] + 8 + lVar7 * 8);
                pvVar6 = _pthread_getspecific((void*)local_50[2]);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012f4a00();
                if (local_48._4_4_ != 0) {
                  if (local_48 < 0) {
                    iVar2 = -local_48._4_4_;
                  }
                  else {
                    local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                    FUN_00d23690();
                    local_40 = local_40 + local_48._4_4_;
                    iVar2 = 0;
                  }
                  local_48 = CONCAT44(iVar2,(int)local_48);
                }
              }
              plVar4 = local_50;
              FUN_000be170();
              pVar8 = (void*)plVar4;
              FUN_00d50b20();
            }
            pvVar6 = _pthread_getspecific(pVar8);
            puVar12 = &g_02802501;
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_00e8b990();
            FUN_00cb1f10();
            FUN_00db3270();
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (puVar5 != (void*)0x0) goto LAB_0061c457;
          }
          if (((char)local_88 != '\0') && (local_38 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      local_61 = local_61 | local_80 == (int64_t *)0x0;
      if (local_61 == 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    goto LAB_0061c4a1;
  }
  puVar12 = (void*)0x0;
LAB_0061c4a1:
  return (uint64_t)puVar12 & 0xffffffff;
}

