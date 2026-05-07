// Function: FUN_012762c0
// Address: 012762c0
// Size: 2673 bytes
// Class: MUAudioSourceSibilantItem


void FUN_012762c0(undefined8 param_1)

{
  bool bVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *plVar4;
  pthread_key_t pVar5;
  undefined8 in_RCX;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar9;
  longlong *local_1d8;
  undefined1 local_1d0;
  longlong *local_1c8;
  undefined1 local_1c0;
  longlong *local_1b8;
  undefined1 local_1b0;
  longlong *local_1a8;
  undefined1 local_1a0;
  longlong local_198;
  char local_190;
  undefined8 local_188;
  undefined1 local_180;
  longlong *local_178;
  undefined1 local_170;
  longlong *local_168;
  undefined1 local_160;
  undefined8 local_158;
  longlong *local_150;
  longlong *local_148;
  longlong local_140;
  longlong local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  int local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  longlong *local_38;
  
  if (*(int *)(*unaff_RDI + 0xc) == 0) {
    return;
  }
  local_d0 = param_1;
  FUN_00d23310();
  plVar4 = local_60;
  pVar5 = (pthread_key_t)CONCAT71((int7)((ulonglong)in_RCX >> 8),local_58[0]);
  plVar7 = &local_c0;
  if (local_58[0] != '\0') {
    plVar7 = (longlong *)local_58;
  }
  local_c0 = CONCAT71(local_c0._1_7_,local_58[0]);
  *(char *)plVar7 = '\0';
  if ((local_58[0] != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = plVar4[9];
  }
  else {
    lVar3 = *(longlong *)(plVar4[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4] + 0x48);
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  local_140 = lVar3;
  if (((char)local_c0 != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((*unaff_RSI == 0) || (*(int *)(*unaff_RSI + 0xc) == 0)) {
    local_70 = 0;
    local_68 = (longlong *)0x0;
  }
  else {
    FUN_01273930();
    plVar4 = local_60;
    if ((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    local_138 = *unaff_RSI;
    local_130 = '\0';
    FUN_012771c0(local_d0,0);
    local_68 = local_60;
    if (local_60 == (longlong *)0x0) {
      local_68 = (longlong *)0x0;
      local_70 = 0;
    }
    else {
      local_70 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
      if (local_58[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01273930();
  plVar4 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 == (longlong *)0x0) goto LAB_01276d6b;
    FUN_00d50b00();
  }
  else if (local_60 == (longlong *)0x0) goto LAB_01276d6b;
  local_b8 = '\0';
  local_c0 = 0;
  local_c8 = plVar4;
  local_b0 = plVar4[2];
  local_a8 = 0;
  if (0 < *(int *)(local_b0 + 0xc)) {
    do {
      local_c0 = *(longlong *)(*(longlong *)(local_b0 + 0x10) + (longlong)local_a8 * 8);
      FUN_01278310((longlong)local_a8,&local_c0);
      plVar4 = local_60;
      if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_78 = plVar4;
      local_128 = plVar4;
      local_120 = '\0';
      local_1d8 = local_68;
      local_1d0 = 0;
      pVar5 = (pthread_key_t)&local_1d8;
      FUN_012771c0(local_d0,local_140 == 0);
      plVar4 = local_60;
      if ((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_38 = plVar4;
      if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_140 == 0) {
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013f2b00();
        iVar8 = *(int *)((longlong)local_60 + 0xc);
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar8 != 0) {
          local_1c8 = local_78;
          local_1c0 = 0;
          local_1b8 = local_38;
          local_1b0 = 0;
          FUN_012783e0();
        }
        if (local_68 != (longlong *)0x0) {
          local_118 = local_78;
          local_110 = '\0';
          FUN_0152eef0();
          if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_1a8 = local_78;
        local_1a0 = 0;
        FUN_01273200();
        plVar4 = local_60;
        if (local_58[0] == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_012766b4;
          }
        }
        else if (local_60 != (longlong *)0x0) {
LAB_012766b4:
          local_98 = '\0';
          local_a0 = 0;
          local_d8 = plVar4;
          local_90 = plVar4[2];
          local_88 = 0;
          if (0 < *(int *)(local_90 + 0xc)) {
            do {
              lVar3 = (longlong)local_88;
              local_a0 = *(longlong *)(*(longlong *)(local_90 + 0x10) + lVar3 * 8);
              FUN_019c6680();
              plVar4 = local_60;
              pVar5 = (pthread_key_t)lVar3;
              if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
                  (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_150 = plVar4;
              local_108 = plVar4;
              local_100 = '\0';
              FUN_01278c70();
              plVar4 = local_60;
              if ((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              local_80 = plVar4;
              if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (local_68 == (longlong *)0x0) {
                local_f8 = local_80;
                local_f0 = '\0';
                local_188 = 0;
                local_180 = 0;
                pVar5 = (pthread_key_t)&local_188;
                FUN_012771c0(local_d0,1);
                plVar4 = local_60;
                if (local_60 == (longlong *)0x0) {
                  bVar1 = false;
                  plVar4 = (longlong *)0x0;
                }
                else {
                  bVar1 = true;
                  if (local_58[0] == '\0') {
                    FUN_00d50b00();
                  }
                }
                if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                plVar4 = (longlong *)FUN_000bea40();
                (**(code **)(*plVar4 + 0x18))();
                pvVar2 = _pthread_getspecific(pVar5);
                if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
                  pVar5 = (pthread_key_t)local_38;
                }
                FUN_013f2b00();
                plVar7 = local_60;
                if (local_58[0] == '\0') {
                  if (local_60 != (longlong *)0x0) {
                    FUN_00d50b00();
                    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_012768e8;
                  }
                }
                else if (local_60 != (longlong *)0x0) {
LAB_012768e8:
                  local_58[0] = '\0';
                  local_60 = (longlong *)0x0;
                  local_148 = plVar7;
                  local_50 = plVar7;
                  local_48 = 0xffffffff;
                  local_40 = 0;
                  local_48._4_4_ = 0;
                  while( true ) {
                    if (local_48._4_4_ != 0) {
                      if (local_48._4_4_ < 1) {
                        iVar8 = -local_48._4_4_;
                      }
                      else {
                        iVar8 = (int)local_48 - local_48._4_4_;
                        local_48 = CONCAT44(local_48._4_4_,iVar8);
                        FUN_00d23690();
                        local_40 = local_40 + local_48._4_4_;
                        iVar8 = 0;
                      }
                      local_48 = CONCAT44(iVar8,(int)local_48);
                    }
                    lVar3 = (longlong)(int)local_48;
                    iVar8 = (int)local_48 + 1;
                    local_48 = CONCAT44(local_48._4_4_,iVar8);
                    if (*(int *)((longlong)local_50 + 0xc) <= iVar8) break;
                    lVar6 = local_50[2];
                    local_60 = *(longlong **)(lVar6 + 8 + lVar3 * 8);
                    pvVar2 = _pthread_getspecific((pthread_key_t)lVar6);
                    pVar5 = (pthread_key_t)lVar6;
                    plVar7 = plVar4;
                    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
                      plVar7 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
                    }
                    pvVar2 = _pthread_getspecific(pVar5);
                    if (pvVar2 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    pvVar2 = _pthread_getspecific(pVar5);
                    if (pvVar2 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_013faed0();
                    local_158 = FUN_012f8e60();
                    pvVar2 = _pthread_getspecific(pVar5);
                    if (pvVar2 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    pvVar2 = _pthread_getspecific(pVar5);
                    if (pvVar2 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_013faf20();
                    uVar9 = FUN_012f8e60();
                    (**(code **)(*plVar7 + 0x418))(local_158,uVar9);
                    if ((local_190 != '\0') && (local_198 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  plVar7 = local_50;
                  FUN_01a81420();
                  pVar5 = (pthread_key_t)plVar7;
                  bVar1 = true;
                  FUN_00d50b20();
                  goto LAB_01276b40;
                }
                bVar1 = true;
              }
LAB_01276b40:
              pvVar2 = _pthread_getspecific(pVar5);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013f2b00();
              iVar8 = *(int *)((longlong)local_60 + 0xc);
              if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (iVar8 != 0) {
                local_178 = local_80;
                local_170 = 0;
                local_160 = 0;
                local_168 = plVar4;
                FUN_012783e0();
              }
              if (local_68 != (longlong *)0x0) {
                local_e8 = local_80;
                local_e0 = '\0';
                FUN_0152eef0();
                if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((bVar1) && (plVar4 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (local_80 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if (local_150 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              local_88 = local_88 + 1;
            } while (local_88 < *(int *)(local_90 + 0xc));
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
      }
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_a8 = local_a8 + 1;
    } while (local_a8 < *(int *)(local_b0 + 0xc));
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01276d6b:
  if (((char)local_70 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


