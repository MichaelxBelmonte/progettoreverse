// Function: FUN_01f3fe60
// Address: 01f3fe60
// Size: 2748 bytes
// Class: Unknown
// String references:
//   "%@.%@"
//   "%@.lproj"


/* WARNING: Removing unreachable block (ram,0x01f40346) */

undefined8 * FUN_01f3fe60(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *local_198;
  longlong local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  undefined4 local_e4;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  uint local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  char local_48;
  longlong *local_40;
  char local_38;
  
  plVar5 = DAT_02800180;
  local_e4 = param_4;
  local_e0 = param_3;
  local_d8 = param_2;
  if (DAT_02800180 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_d0 = plVar5;
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  local_88 = plVar5;
  if (((longlong *)*param_1 != (longlong *)0x0) && (*local_d8 != 0)) {
    (**(code **)(*(longlong *)*param_1 + 1000))();
    plVar5 = local_70;
    if (((char)local_68 == '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar5 != (longlong *)0x0) {
      if (0 < *(int *)((longlong)plVar5 + 0xc)) {
        lVar10 = 0;
        do {
          plVar1 = *(longlong **)(plVar5[2] + lVar10 * 8);
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar3 = (**(code **)(*plVar1 + 0x3a0))();
          if ((bVar3 & (byte)local_e4) == 1) {
            (**(code **)(*plVar1 + 0x380))();
            plVar2 = local_70;
            local_c0 = 0;
            if ((char)local_68 == '\0') {
              if (local_70 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = local_68 & 0xffffff00;
            }
            local_c0 = '\x01';
            local_c8 = plVar2;
            cVar4 = (**(code **)(*local_d0 + 0x50))();
            if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar4 == '\0') {
              local_178 = *local_d8;
              local_170 = '\0';
              local_160 = '\0';
              local_158 = *local_e0;
              local_150 = '\0';
              local_168 = plVar1;
              (**(code **)(*unaff_RSI + 0x6b0))(&local_168,&local_178,&local_158,1);
              plVar2 = local_40;
              if (local_38 == '\0') {
                if (local_40 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_70 = plVar2;
              local_68 = local_68 & 0xffffff00;
              FUN_00ca1b70();
              if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar2 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_150 != '\0') && (local_158 != 0)) {
                FUN_00d50b20();
              }
              if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_170 != '\0') && (local_178 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            cVar4 = (**(code **)(*plVar1 + 0x398))();
            if (cVar4 != '\0') {
              (**(code **)(*plVar1 + 0x370))();
              plVar2 = local_40;
              if (local_38 == '\0') {
                if (local_40 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_70 = plVar2;
              local_68 = local_68 & 0xffffff00;
              cVar4 = FUN_00d23d70();
              if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar2 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 != '\0') {
                (**(code **)(*plVar1 + 0x390))();
                plVar2 = local_70;
                if (((char)local_68 == '\0') && (local_70 != (longlong *)0x0)) {
                  FUN_00d50b00();
                  if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                lVar6 = DAT_02800188;
                local_80 = plVar2;
                if (DAT_02800188 != 0) {
                  FUN_00d50b00();
                }
                local_148 = lVar6;
                local_140 = '\x01';
                cVar4 = FUN_00d8f400();
                if ((local_140 != '\0') && (local_148 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar4 != '\0') {
                  (**(code **)(*plVar1 + 0x380))();
                  local_78 = local_70;
                  if (((char)local_68 == '\0') && (local_70 != (longlong *)0x0)) {
                    FUN_00d50b00();
                    if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  FUN_00d8c7a0();
                  FUN_00d97ce0();
                  local_198 = local_78;
                  FUN_00083ea0(2,&local_198);
                  FUN_00d8cb40();
                  plVar2 = local_40;
                  if (local_38 == '\0') {
                    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                       (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  local_70 = (longlong *)&DAT_0253d630;
                  if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
                    FUN_00d50b20();
                  }
                  local_70 = &DAT_024c5048;
                  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_90 != '\0') && (local_98 != 0)) {
                    FUN_00d50b20();
                  }
                  local_68 = local_68 & 0xffffff00;
                  local_70 = (longlong *)0x0;
                  local_60 = plVar5;
                  local_58 = 0xffffffff;
                  local_50 = 0;
                  while( true ) {
                    lVar6 = (longlong)(int)local_58;
                    iVar7 = (int)local_58 + 1;
                    local_58 = CONCAT44(local_58._4_4_,iVar7);
                    if (*(int *)((longlong)local_60 + 0xc) <= iVar7) break;
                    local_70 = *(longlong **)(local_60[2] + 8 + lVar6 * 8);
                    (**(code **)(*local_70 + 0x368))();
                    local_138 = plVar2;
                    local_130 = '\0';
                    cVar4 = FUN_00d8f400();
                    if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (cVar4 != '\0') {
                      FUN_00115910();
                      plVar8 = local_80;
                      if (plVar2 != (longlong *)0x0) {
                        FUN_00d50b20();
                      }
                      if (local_78 != (longlong *)0x0) {
                        FUN_00d50b20();
                      }
                      goto LAB_01f405ce;
                    }
                    if (local_58._4_4_ != 0) {
                      if (local_58._4_4_ < 1) {
                        iVar7 = -local_58._4_4_;
                      }
                      else {
                        local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
                        FUN_00d23690();
                        local_50 = local_50 + local_58._4_4_;
                        iVar7 = 0;
                      }
                      local_58 = CONCAT44(iVar7,(int)local_58);
                    }
                  }
                  FUN_00115910();
                  if (plVar2 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  if (local_78 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                }
                local_120 = '\0';
                local_128 = plVar1;
                (**(code **)(*plVar1 + 0x390))();
                plVar2 = local_70;
                local_b0 = 0;
                if ((char)local_68 == '\0') {
                  if (local_70 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_68 = local_68 & 0xffffff00;
                }
                plVar8 = local_80;
                local_b0 = '\x01';
                local_b8 = plVar2;
                FUN_01f41160();
                if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01f405ce:
                if (plVar8 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
              }
            }
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((longlong)plVar5 + 0xc));
      }
      FUN_00d50b20();
    }
  }
  lVar10 = *local_e0;
  if (lVar10 != 0) {
    uVar9 = *(uint *)(lVar10 + 0xc);
    uVar11 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      while( true ) {
        uVar9 = uVar9 - 1;
        plVar5 = (longlong *)*param_1;
        plVar1 = *(longlong **)(*(longlong *)(lVar10 + 0x10) + (ulonglong)uVar9 * 8);
        local_68 = 1;
        local_70 = &DAT_024c5048;
        local_58 = local_58 & 0xffffffffffffff00;
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_58 = CONCAT71(local_58._1_7_,1);
        local_60 = plVar1;
        FUN_00d8cb40();
        local_a8 = local_98;
        local_a0 = 0;
        if (local_90 == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        local_a0 = '\x01';
        (**(code **)(*plVar5 + 0x400))();
        plVar5 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        local_70 = &DAT_024c5048;
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar5 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar5 + 0x3a0))();
          if (cVar4 != '\0') {
            local_118 = *local_d8;
            local_110 = '\0';
            local_108 = plVar5;
            local_100 = '\0';
            local_f8 = 0;
            local_f0 = '\0';
            (**(code **)(*unaff_RSI + 0x6b0))(&local_108,&local_118,&local_f8,1);
            plVar5 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_70 = plVar5;
            local_68 = local_68 & 0xffffff00;
            FUN_00ca1b70();
            if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar5 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_110 != '\0') && (local_118 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        if ((longlong)uVar11 < 2) break;
        uVar11 = uVar11 - 1;
        lVar10 = *local_e0;
      }
    }
  }
  *unaff_RDI = local_88;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_d0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


