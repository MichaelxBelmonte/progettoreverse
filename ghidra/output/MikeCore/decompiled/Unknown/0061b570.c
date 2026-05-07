// Function: FUN_0061b570
// Address: 0061b570
// Size: 3972 bytes
// Class: Unknown


ulonglong FUN_0061b570(undefined8 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  void *pvVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined7 uVar11;
  undefined8 unaff_R12;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined1 local_158 [8];
  undefined1 local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong *local_f8;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  undefined4 local_8c;
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  byte local_61;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  longlong *local_38;
  
  FUN_0063f230();
  local_98 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0061b5b4;
    }
  }
  else if (local_60 != (longlong *)0x0) {
LAB_0061b5b4:
    iVar2 = FUN_00228b30();
    if (iVar2 == 1) {
      FUN_00226f20();
      local_80 = local_60;
      if (local_60 != (longlong *)0x0) {
        if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0061b621;
      }
      puVar12 = (undefined1 *)0x0;
    }
    else {
      local_80 = (longlong *)0x0;
LAB_0061b621:
      local_61 = iVar2 != 1;
      puVar12 = (undefined1 *)CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
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
          if (local_78 != (longlong *)0x0) {
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
        pVar8 = (pthread_key_t)plVar4;
        local_b0 = local_60;
        if (local_58 == '\0') {
          if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (longlong *)0x0)) {
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
        if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
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
        if (local_b0 == (longlong *)0x0) {
          puVar12 = (undefined1 *)0x0;
        }
        else {
          iVar2 = FUN_00228b30();
          if (iVar2 == 0) {
            FUN_0021a630();
            (**(code **)(*local_78 + 0xa00))();
            local_38 = local_60;
            plVar4 = local_60;
            if (local_60 == (longlong *)0x0) {
              local_38 = (longlong *)0x0;
              local_88 = 0;
            }
            else {
              uVar11 = (undefined7)((ulonglong)lVar7 >> 8);
              if (local_58 == '\0') {
                FUN_00d50b00();
                local_88 = CONCAT71(uVar11,1);
                if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_58 = '\0';
                local_88 = CONCAT71(uVar11,1);
              }
            }
            pVar8 = (pthread_key_t)plVar4;
            if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar6 = _pthread_getspecific(pVar8);
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              pVar8 = (pthread_key_t)local_38;
            }
            FUN_00e8b990();
            FUN_00cb1f10();
            FUN_00db3260();
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar6 = _pthread_getspecific(pVar8);
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              pVar8 = (pthread_key_t)local_38;
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
              if (((local_60 != (longlong *)0x0) &&
                  (plVar4 = (longlong *)FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (longlong *)0x0)) {
                plVar4 = (longlong *)FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
            }
            if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
              plVar4 = (longlong *)FUN_00d50b20();
            }
            local_8c = (undefined4)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
            if (local_f8 == (longlong *)0x0) {
LAB_0061c0ec:
              puVar12 = &DAT_02802501;
            }
            else {
              local_58 = '\0';
              local_60 = (longlong *)0x0;
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
                lVar7 = (longlong)(int)local_48;
                iVar2 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,iVar2);
                if (*(int *)((longlong)local_50 + 0xc) <= iVar2) break;
                lVar10 = local_50[2];
                local_60 = *(longlong **)(lVar10 + 8 + lVar7 * 8);
                pvVar6 = _pthread_getspecific((pthread_key_t)lVar10);
                pVar8 = (pthread_key_t)lVar10;
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
                if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
                  FUN_00d50b00();
                }
                if (lVar7 != 0) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if (((plVar4 == (longlong *)0x0) || (cVar1 = FUN_003b7990(), cVar1 == '\0')) ||
                   ((cVar1 = FUN_003b7710(), cVar1 == '\0' &&
                    (cVar1 = FUN_003b7780(), cVar1 == '\0')))) {
                  pvVar6 = _pthread_getspecific(pVar8);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012f4a00();
                  if (plVar4 != (longlong *)0x0) goto LAB_0061bf03;
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
              puVar12 = &DAT_02802501;
            }
          }
          else if (iVar2 == 1) {
            FUN_002218b0();
            cVar1 = FUN_0078cda0();
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar1 == '\0') {
              pvVar6 = _pthread_getspecific(pVar8);
              if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                pVar8 = (pthread_key_t)local_80;
              }
              FUN_0165a070();
            }
            else {
              pvVar6 = _pthread_getspecific(pVar8);
              if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                pVar8 = (pthread_key_t)local_80;
              }
              FUN_0165a0b0();
            }
            plVar4 = local_60;
            if ((((local_58 == '\0') && (local_60 != (longlong *)0x0)) &&
                (FUN_00d50b00(), local_58 != '\0')) && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar6 = _pthread_getspecific(pVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e8920();
            local_38 = local_60;
            plVar9 = local_60;
            if (local_60 == (longlong *)0x0) {
              local_38 = (longlong *)0x0;
              local_88 = 0;
            }
            else {
              local_88 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
              if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            pVar8 = (pthread_key_t)plVar9;
            pvVar6 = _pthread_getspecific(pVar8);
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              pVar8 = (pthread_key_t)local_38;
            }
            FUN_00e8b990();
            FUN_00cb1f10();
            FUN_00db3260();
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar6 = _pthread_getspecific(pVar8);
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              pVar8 = (pthread_key_t)local_38;
            }
            FUN_012cb110();
            pvVar6 = _pthread_getspecific(pVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar3 = FUN_012e6160();
            plVar9 = local_60;
            if (local_58 == '\0') {
              if (((local_60 != (longlong *)0x0) && (uVar3 = FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (longlong *)0x0)) {
                uVar3 = FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
            }
            if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
              uVar3 = FUN_00d50b20();
            }
            if (plVar9 != (longlong *)0x0) {
              local_58 = '\0';
              local_60 = (longlong *)0x0;
              local_50 = plVar9;
              local_48 = 0xffffffff;
              local_40 = 0;
              while( true ) {
                lVar7 = (longlong)(int)local_48;
                iVar2 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,iVar2);
                if (*(int *)((longlong)local_50 + 0xc) <= iVar2) break;
                local_60 = *(longlong **)(local_50[2] + 8 + lVar7 * 8);
                pvVar6 = _pthread_getspecific((pthread_key_t)local_50[2]);
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
            local_8c = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
            if (plVar4 == (longlong *)0x0) goto LAB_0061c0ec;
            FUN_00d50b20();
            puVar12 = &DAT_02802501;
          }
          else if (iVar2 == 2) {
            FUN_0021a630();
            (**(code **)(*local_78 + 0xa00))();
            local_38 = local_60;
            if (local_60 == (longlong *)0x0) {
              local_38 = (longlong *)0x0;
              local_88 = 0;
            }
            else if (local_58 == '\0') {
              uVar3 = FUN_00d50b00();
              local_88 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
              local_88 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
            }
            if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_8c = 0;
          }
          else {
            local_88 = 0;
            local_38 = (longlong *)0x0;
            local_8c = 0;
          }
          puVar5 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar5 = &DAT_025ee570;
          puVar5[6] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          *(undefined8 *)((longlong)puVar5 + 0x1c) = 0;
          *(undefined8 *)((longlong)puVar5 + 0x24) = 0;
          (*DAT_025ee588)();
          local_128 = local_38;
          local_120 = '\0';
          FUN_01531f40();
          if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*local_b0 + 0x390))();
          local_c0 = local_60;
          local_b8 = 0;
          if (local_58 == '\0') {
            if (local_60 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_b8 = '\x01';
          FUN_01532bd0();
          if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_118 = local_b0;
          local_110 = '\0';
          pVar8 = 1;
          FUN_01532c20(1,1,0,0);
          if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)local_8c == '\0') {
LAB_0061c457:
            FUN_00d50b20();
          }
          else {
            pvVar6 = _pthread_getspecific(pVar8);
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              pVar8 = (pthread_key_t)local_38;
            }
            FUN_012cb110();
            pvVar6 = _pthread_getspecific(pVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6160();
            plVar4 = local_60;
            if (local_58 == '\0') {
              if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
            }
            if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar4 != (longlong *)0x0) {
              local_58 = '\0';
              local_60 = (longlong *)0x0;
              local_50 = plVar4;
              local_48 = 0xffffffff;
              local_40 = 0;
              while( true ) {
                lVar7 = (longlong)(int)local_48;
                iVar2 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,iVar2);
                if (*(int *)((longlong)local_50 + 0xc) <= iVar2) break;
                local_60 = *(longlong **)(local_50[2] + 8 + lVar7 * 8);
                pvVar6 = _pthread_getspecific((pthread_key_t)local_50[2]);
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
              pVar8 = (pthread_key_t)plVar4;
              FUN_00d50b20();
            }
            pvVar6 = _pthread_getspecific(pVar8);
            puVar12 = &DAT_02802501;
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_00e8b990();
            FUN_00cb1f10();
            FUN_00db3270();
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (puVar5 != (undefined8 *)0x0) goto LAB_0061c457;
          }
          if (((char)local_88 != '\0') && (local_38 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      local_61 = local_61 | local_80 == (longlong *)0x0;
      if (local_61 == 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    goto LAB_0061c4a1;
  }
  puVar12 = (undefined1 *)0x0;
LAB_0061c4a1:
  return (ulonglong)puVar12 & 0xffffffff;
}


